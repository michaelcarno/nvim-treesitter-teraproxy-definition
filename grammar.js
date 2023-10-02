module.exports = grammar({
  name: "TERA_DEFINITIONS",

  extras: ($) => [/\s/, $.comment],

  supertypes: ($) => [$._value],

  rules: {
    document: ($) => repeat($._value),

    _value: ($) =>
      choice(
        $.object,
        $.array,
        $.simple_array,
        $.simple_data,
        // $.number,
        // $.fieldname,
        // $.true,
        // $.false,
        // $.null
      ),

    object: ($) =>
      seq(
        // "{", commaSep($.pair), "}"
        "object",
        $.identifier,
        fieldInEntyty($.pair),
      ),

    simple_data: ($) => seq($._types, $.identifier),
    // simple_data: ($) => choice($.string, $.number, $.boolean),

    pair: ($) => seq(field("key", $._types), field("value", $.identifier)),

    array: ($) =>
      seq(
        "array",
        // typeTemplate($._type),
        $.identifier,
        fieldInEntyty($.pair),
      ),

    simple_array: ($) => seq("array", "<", $._simpleTypes, ">", $.identifier),

    // string: ($) => choice(seq('"', '"'), seq('"', $.string_content, '"')),

    identifier: ($) => /[a-zA-Z0-9]+/,

    _simpleTypes: ($) =>
      choice(
        "int32",
        "int64",
        "float",
        "bool",
        "string",
        "double",
        "uint64",
        "uint32",
      ),

    _types: ($) =>
      prec(
        -1,
        choice(
          $._simpleTypes,
          "object",
          "array",
          seq("array", optional(seq("<", $._simpleTypes, ">"))),
        ),
      ),

    fieldname: ($) => $.identifier,

    string_content: ($) =>
      repeat1(choice(token.immediate(prec(1, /[^\\"\n]+/)), $.escape_sequence)),

    escape_sequence: ($) =>
      token.immediate(seq("\\", /(\"|\\|\/|b|f|n|r|t|u)/)),

    number: ($) => {
      const hex_literal = seq(choice("0x", "0X"), /[\da-fA-F]+/);

      const decimal_digits = /\d+/;
      const signed_integer = seq(optional(choice("-", "+")), decimal_digits);
      const exponent_part = seq(choice("e", "E"), signed_integer);

      const binary_literal = seq(choice("0b", "0B"), /[0-1]+/);

      const octal_literal = seq(choice("0o", "0O"), /[0-7]+/);

      const decimal_integer_literal = seq(
        optional(choice("-", "+")),
        choice("0", seq(/[1-9]/, optional(decimal_digits))),
      );

      const decimal_literal = choice(
        seq(
          decimal_integer_literal,
          ".",
          optional(decimal_digits),
          optional(exponent_part),
        ),
        seq(".", decimal_digits, optional(exponent_part)),
        seq(decimal_integer_literal, optional(exponent_part)),
      );

      return token(
        choice(hex_literal, decimal_literal, binary_literal, octal_literal),
      );
    },

    true: ($) => "true",

    false: ($) => "false",

    null: ($) => "null",

    comment: ($) => token(choice(seq("#", /.*/))),
  },
});

function fieldInEntyty(rule) {
  return optional(repeat(seq("- ", rule)));
}

// function commaSep1(rule) {
//   return seq(rule, repeat(seq("- ", rule)));
// }
//
// function commaSep(rule) {
//   return optional(commaSep1(rule));
// }
