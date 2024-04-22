#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_object = 1,
  anon_sym_DASH = 2,
  anon_sym_array = 3,
  anon_sym_LT = 4,
  anon_sym_GT = 5,
  sym_identifier = 6,
  anon_sym_int16 = 7,
  anon_sym_int32 = 8,
  anon_sym_int64 = 9,
  anon_sym_float = 10,
  anon_sym_bool = 11,
  anon_sym_string = 12,
  anon_sym_double = 13,
  anon_sym_uint16 = 14,
  anon_sym_uint32 = 15,
  anon_sym_uint64 = 16,
  anon_sym_bytes = 17,
  anon_sym_byte = 18,
  anon_sym_customize = 19,
  anon_sym_shape = 20,
  anon_sym_vec3 = 21,
  anon_sym_angle = 22,
  anon_sym_skillid = 23,
  anon_sym_offset = 24,
  anon_sym_count = 25,
  sym_escape_sequence = 26,
  sym_number = 27,
  sym_true = 28,
  sym_false = 29,
  sym_null = 30,
  sym_patchVersion = 31,
  sym_comment = 32,
  sym_document = 33,
  sym__value = 34,
  sym_object = 35,
  sym_simpleField = 36,
  sym_array = 37,
  sym_simpleArray = 38,
  sym__simpleTypes = 39,
  aux_sym_document_repeat1 = 40,
  aux_sym_object_repeat1 = 41,
  aux_sym_object_repeat2 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_object] = "object",
  [anon_sym_DASH] = "-",
  [anon_sym_array] = "array",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym_identifier] = "identifier",
  [anon_sym_int16] = "int16",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_float] = "float",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_double] = "double",
  [anon_sym_uint16] = "uint16",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint64] = "uint64",
  [anon_sym_bytes] = "bytes",
  [anon_sym_byte] = "byte",
  [anon_sym_customize] = "customize",
  [anon_sym_shape] = "shape",
  [anon_sym_vec3] = "vec3",
  [anon_sym_angle] = "angle",
  [anon_sym_skillid] = "skillid",
  [anon_sym_offset] = "offset",
  [anon_sym_count] = "count",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_patchVersion] = "patchVersion",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_simpleField] = "simpleField",
  [sym_array] = "array",
  [sym_simpleArray] = "simpleArray",
  [sym__simpleTypes] = "_simpleTypes",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_object_repeat2] = "object_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_identifier] = sym_identifier,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_uint16] = anon_sym_uint16,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_customize] = anon_sym_customize,
  [anon_sym_shape] = anon_sym_shape,
  [anon_sym_vec3] = anon_sym_vec3,
  [anon_sym_angle] = anon_sym_angle,
  [anon_sym_skillid] = anon_sym_skillid,
  [anon_sym_offset] = anon_sym_offset,
  [anon_sym_count] = anon_sym_count,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_patchVersion] = sym_patchVersion,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_simpleField] = sym_simpleField,
  [sym_array] = sym_array,
  [sym_simpleArray] = sym_simpleArray,
  [sym__simpleTypes] = sym__simpleTypes,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_object_repeat2] = aux_sym_object_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_customize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vec3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_angle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_skillid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_offset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_count] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_patchVersion] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_simpleField] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_simpleArray] = {
    .visible = true,
    .named = true,
  },
  [sym__simpleTypes] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 6,
  [8] = 5,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 16,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 22,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(92);
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == '+') ADVANCE(2);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '0') ADVANCE(120);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '^') ADVANCE(131);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(58);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == 'v') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(90)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '^') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 2:
      if (lookahead == '0') ADVANCE(121);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(101);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(108);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(114);
      END_STATE();
    case 8:
      if (lookahead == '4') ADVANCE(102);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(109);
      END_STATE();
    case 10:
      if (lookahead == '6') ADVANCE(100);
      END_STATE();
    case 11:
      if (lookahead == '6') ADVANCE(107);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(7);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(105);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(13);
      if (lookahead == 'k') ADVANCE(38);
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 40:
      if (lookahead == 'j') ADVANCE(29);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 81:
      if (lookahead == 'y') ADVANCE(96);
      END_STATE();
    case 82:
      if (lookahead == 'z') ADVANCE(28);
      END_STATE();
    case 83:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 84:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(124);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(125);
      END_STATE();
    case 86:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 90:
      if (eof) ADVANCE(92);
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == '+') ADVANCE(2);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '0') ADVANCE(120);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == '^') ADVANCE(131);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(58);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == 'v') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(90)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 91:
      if (eof) ADVANCE(92);
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '^') ADVANCE(131);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(58);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == 'v') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(91)
      END_STATE();
    case 92:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(121);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_customize);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_vec3);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_angle);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_skillid);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_offset);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(85);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(89);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_patchVersion);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 91},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 91},
  [6] = {.lex_state = 91},
  [7] = {.lex_state = 91},
  [8] = {.lex_state = 91},
  [9] = {.lex_state = 91},
  [10] = {.lex_state = 91},
  [11] = {.lex_state = 91},
  [12] = {.lex_state = 91},
  [13] = {.lex_state = 91},
  [14] = {.lex_state = 91},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 91},
  [17] = {.lex_state = 91},
  [18] = {.lex_state = 91},
  [19] = {.lex_state = 91},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_uint16] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_customize] = ACTIONS(1),
    [anon_sym_shape] = ACTIONS(1),
    [anon_sym_vec3] = ACTIONS(1),
    [anon_sym_angle] = ACTIONS(1),
    [anon_sym_skillid] = ACTIONS(1),
    [anon_sym_offset] = ACTIONS(1),
    [anon_sym_count] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_patchVersion] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(23),
    [sym__value] = STATE(2),
    [sym_object] = STATE(11),
    [sym_simpleField] = STATE(11),
    [sym_array] = STATE(11),
    [sym_simpleArray] = STATE(11),
    [sym__simpleTypes] = STATE(25),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_object] = ACTIONS(7),
    [anon_sym_array] = ACTIONS(9),
    [anon_sym_int16] = ACTIONS(11),
    [anon_sym_int32] = ACTIONS(11),
    [anon_sym_int64] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_double] = ACTIONS(11),
    [anon_sym_uint16] = ACTIONS(11),
    [anon_sym_uint32] = ACTIONS(11),
    [anon_sym_uint64] = ACTIONS(11),
    [anon_sym_bytes] = ACTIONS(11),
    [anon_sym_byte] = ACTIONS(13),
    [anon_sym_customize] = ACTIONS(11),
    [anon_sym_shape] = ACTIONS(11),
    [anon_sym_vec3] = ACTIONS(11),
    [anon_sym_angle] = ACTIONS(11),
    [anon_sym_skillid] = ACTIONS(11),
    [anon_sym_offset] = ACTIONS(11),
    [anon_sym_count] = ACTIONS(11),
    [sym_patchVersion] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__value] = STATE(4),
    [sym_object] = STATE(11),
    [sym_simpleField] = STATE(11),
    [sym_array] = STATE(11),
    [sym_simpleArray] = STATE(11),
    [sym__simpleTypes] = STATE(25),
    [aux_sym_document_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_object] = ACTIONS(7),
    [anon_sym_array] = ACTIONS(9),
    [anon_sym_int16] = ACTIONS(11),
    [anon_sym_int32] = ACTIONS(11),
    [anon_sym_int64] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_double] = ACTIONS(11),
    [anon_sym_uint16] = ACTIONS(11),
    [anon_sym_uint32] = ACTIONS(11),
    [anon_sym_uint64] = ACTIONS(11),
    [anon_sym_bytes] = ACTIONS(11),
    [anon_sym_byte] = ACTIONS(13),
    [anon_sym_customize] = ACTIONS(11),
    [anon_sym_shape] = ACTIONS(11),
    [anon_sym_vec3] = ACTIONS(11),
    [anon_sym_angle] = ACTIONS(11),
    [anon_sym_skillid] = ACTIONS(11),
    [anon_sym_offset] = ACTIONS(11),
    [anon_sym_count] = ACTIONS(11),
    [sym_patchVersion] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__value] = STATE(12),
    [sym_object] = STATE(11),
    [sym_simpleField] = STATE(11),
    [sym_array] = STATE(11),
    [sym_simpleArray] = STATE(11),
    [sym__simpleTypes] = STATE(25),
    [aux_sym_object_repeat1] = STATE(13),
    [anon_sym_object] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_array] = ACTIONS(21),
    [anon_sym_int16] = ACTIONS(11),
    [anon_sym_int32] = ACTIONS(11),
    [anon_sym_int64] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_double] = ACTIONS(11),
    [anon_sym_uint16] = ACTIONS(11),
    [anon_sym_uint32] = ACTIONS(11),
    [anon_sym_uint64] = ACTIONS(11),
    [anon_sym_bytes] = ACTIONS(11),
    [anon_sym_byte] = ACTIONS(13),
    [anon_sym_customize] = ACTIONS(11),
    [anon_sym_shape] = ACTIONS(11),
    [anon_sym_vec3] = ACTIONS(11),
    [anon_sym_angle] = ACTIONS(11),
    [anon_sym_skillid] = ACTIONS(11),
    [anon_sym_offset] = ACTIONS(11),
    [anon_sym_count] = ACTIONS(11),
    [sym_patchVersion] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__value] = STATE(4),
    [sym_object] = STATE(11),
    [sym_simpleField] = STATE(11),
    [sym_array] = STATE(11),
    [sym_simpleArray] = STATE(11),
    [sym__simpleTypes] = STATE(25),
    [aux_sym_document_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_object] = ACTIONS(25),
    [anon_sym_array] = ACTIONS(28),
    [anon_sym_int16] = ACTIONS(31),
    [anon_sym_int32] = ACTIONS(31),
    [anon_sym_int64] = ACTIONS(31),
    [anon_sym_float] = ACTIONS(31),
    [anon_sym_bool] = ACTIONS(31),
    [anon_sym_string] = ACTIONS(31),
    [anon_sym_double] = ACTIONS(31),
    [anon_sym_uint16] = ACTIONS(31),
    [anon_sym_uint32] = ACTIONS(31),
    [anon_sym_uint64] = ACTIONS(31),
    [anon_sym_bytes] = ACTIONS(31),
    [anon_sym_byte] = ACTIONS(34),
    [anon_sym_customize] = ACTIONS(31),
    [anon_sym_shape] = ACTIONS(31),
    [anon_sym_vec3] = ACTIONS(31),
    [anon_sym_angle] = ACTIONS(31),
    [anon_sym_skillid] = ACTIONS(31),
    [anon_sym_offset] = ACTIONS(31),
    [anon_sym_count] = ACTIONS(31),
    [sym_patchVersion] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [aux_sym_object_repeat1] = STATE(3),
    [aux_sym_object_repeat2] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_object] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_array] = ACTIONS(37),
    [anon_sym_int16] = ACTIONS(37),
    [anon_sym_int32] = ACTIONS(37),
    [anon_sym_int64] = ACTIONS(37),
    [anon_sym_float] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_string] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_uint16] = ACTIONS(37),
    [anon_sym_uint32] = ACTIONS(37),
    [anon_sym_uint64] = ACTIONS(37),
    [anon_sym_bytes] = ACTIONS(37),
    [anon_sym_byte] = ACTIONS(41),
    [anon_sym_customize] = ACTIONS(37),
    [anon_sym_shape] = ACTIONS(37),
    [anon_sym_vec3] = ACTIONS(37),
    [anon_sym_angle] = ACTIONS(37),
    [anon_sym_skillid] = ACTIONS(37),
    [anon_sym_offset] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(37),
    [sym_patchVersion] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [aux_sym_object_repeat1] = STATE(3),
    [aux_sym_object_repeat2] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_object] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_array] = ACTIONS(43),
    [anon_sym_int16] = ACTIONS(43),
    [anon_sym_int32] = ACTIONS(43),
    [anon_sym_int64] = ACTIONS(43),
    [anon_sym_float] = ACTIONS(43),
    [anon_sym_bool] = ACTIONS(43),
    [anon_sym_string] = ACTIONS(43),
    [anon_sym_double] = ACTIONS(43),
    [anon_sym_uint16] = ACTIONS(43),
    [anon_sym_uint32] = ACTIONS(43),
    [anon_sym_uint64] = ACTIONS(43),
    [anon_sym_bytes] = ACTIONS(43),
    [anon_sym_byte] = ACTIONS(45),
    [anon_sym_customize] = ACTIONS(43),
    [anon_sym_shape] = ACTIONS(43),
    [anon_sym_vec3] = ACTIONS(43),
    [anon_sym_angle] = ACTIONS(43),
    [anon_sym_skillid] = ACTIONS(43),
    [anon_sym_offset] = ACTIONS(43),
    [anon_sym_count] = ACTIONS(43),
    [sym_patchVersion] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [aux_sym_object_repeat1] = STATE(3),
    [aux_sym_object_repeat2] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_object] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_array] = ACTIONS(43),
    [anon_sym_int16] = ACTIONS(43),
    [anon_sym_int32] = ACTIONS(43),
    [anon_sym_int64] = ACTIONS(43),
    [anon_sym_float] = ACTIONS(43),
    [anon_sym_bool] = ACTIONS(43),
    [anon_sym_string] = ACTIONS(43),
    [anon_sym_double] = ACTIONS(43),
    [anon_sym_uint16] = ACTIONS(43),
    [anon_sym_uint32] = ACTIONS(43),
    [anon_sym_uint64] = ACTIONS(43),
    [anon_sym_bytes] = ACTIONS(43),
    [anon_sym_byte] = ACTIONS(45),
    [anon_sym_customize] = ACTIONS(43),
    [anon_sym_shape] = ACTIONS(43),
    [anon_sym_vec3] = ACTIONS(43),
    [anon_sym_angle] = ACTIONS(43),
    [anon_sym_skillid] = ACTIONS(43),
    [anon_sym_offset] = ACTIONS(43),
    [anon_sym_count] = ACTIONS(43),
    [sym_patchVersion] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [aux_sym_object_repeat1] = STATE(3),
    [aux_sym_object_repeat2] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_object] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(50),
    [anon_sym_array] = ACTIONS(37),
    [anon_sym_int16] = ACTIONS(37),
    [anon_sym_int32] = ACTIONS(37),
    [anon_sym_int64] = ACTIONS(37),
    [anon_sym_float] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_string] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_uint16] = ACTIONS(37),
    [anon_sym_uint32] = ACTIONS(37),
    [anon_sym_uint64] = ACTIONS(37),
    [anon_sym_bytes] = ACTIONS(37),
    [anon_sym_byte] = ACTIONS(41),
    [anon_sym_customize] = ACTIONS(37),
    [anon_sym_shape] = ACTIONS(37),
    [anon_sym_vec3] = ACTIONS(37),
    [anon_sym_angle] = ACTIONS(37),
    [anon_sym_skillid] = ACTIONS(37),
    [anon_sym_offset] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(37),
    [sym_patchVersion] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [aux_sym_object_repeat1] = STATE(3),
    [aux_sym_object_repeat2] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_object] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_array] = ACTIONS(53),
    [anon_sym_int16] = ACTIONS(53),
    [anon_sym_int32] = ACTIONS(53),
    [anon_sym_int64] = ACTIONS(53),
    [anon_sym_float] = ACTIONS(53),
    [anon_sym_bool] = ACTIONS(53),
    [anon_sym_string] = ACTIONS(53),
    [anon_sym_double] = ACTIONS(53),
    [anon_sym_uint16] = ACTIONS(53),
    [anon_sym_uint32] = ACTIONS(53),
    [anon_sym_uint64] = ACTIONS(53),
    [anon_sym_bytes] = ACTIONS(53),
    [anon_sym_byte] = ACTIONS(58),
    [anon_sym_customize] = ACTIONS(53),
    [anon_sym_shape] = ACTIONS(53),
    [anon_sym_vec3] = ACTIONS(53),
    [anon_sym_angle] = ACTIONS(53),
    [anon_sym_skillid] = ACTIONS(53),
    [anon_sym_offset] = ACTIONS(53),
    [anon_sym_count] = ACTIONS(53),
    [sym_patchVersion] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_object] = ACTIONS(60),
    [anon_sym_DASH] = ACTIONS(60),
    [anon_sym_array] = ACTIONS(60),
    [anon_sym_int16] = ACTIONS(60),
    [anon_sym_int32] = ACTIONS(60),
    [anon_sym_int64] = ACTIONS(60),
    [anon_sym_float] = ACTIONS(60),
    [anon_sym_bool] = ACTIONS(60),
    [anon_sym_string] = ACTIONS(60),
    [anon_sym_double] = ACTIONS(60),
    [anon_sym_uint16] = ACTIONS(60),
    [anon_sym_uint32] = ACTIONS(60),
    [anon_sym_uint64] = ACTIONS(60),
    [anon_sym_bytes] = ACTIONS(60),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_customize] = ACTIONS(60),
    [anon_sym_shape] = ACTIONS(60),
    [anon_sym_vec3] = ACTIONS(60),
    [anon_sym_angle] = ACTIONS(60),
    [anon_sym_skillid] = ACTIONS(60),
    [anon_sym_offset] = ACTIONS(60),
    [anon_sym_count] = ACTIONS(60),
    [sym_patchVersion] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_object] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [anon_sym_array] = ACTIONS(64),
    [anon_sym_int16] = ACTIONS(64),
    [anon_sym_int32] = ACTIONS(64),
    [anon_sym_int64] = ACTIONS(64),
    [anon_sym_float] = ACTIONS(64),
    [anon_sym_bool] = ACTIONS(64),
    [anon_sym_string] = ACTIONS(64),
    [anon_sym_double] = ACTIONS(64),
    [anon_sym_uint16] = ACTIONS(64),
    [anon_sym_uint32] = ACTIONS(64),
    [anon_sym_uint64] = ACTIONS(64),
    [anon_sym_bytes] = ACTIONS(64),
    [anon_sym_byte] = ACTIONS(66),
    [anon_sym_customize] = ACTIONS(64),
    [anon_sym_shape] = ACTIONS(64),
    [anon_sym_vec3] = ACTIONS(64),
    [anon_sym_angle] = ACTIONS(64),
    [anon_sym_skillid] = ACTIONS(64),
    [anon_sym_offset] = ACTIONS(64),
    [anon_sym_count] = ACTIONS(64),
    [sym_patchVersion] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_object] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_array] = ACTIONS(53),
    [anon_sym_int16] = ACTIONS(53),
    [anon_sym_int32] = ACTIONS(53),
    [anon_sym_int64] = ACTIONS(53),
    [anon_sym_float] = ACTIONS(53),
    [anon_sym_bool] = ACTIONS(53),
    [anon_sym_string] = ACTIONS(53),
    [anon_sym_double] = ACTIONS(53),
    [anon_sym_uint16] = ACTIONS(53),
    [anon_sym_uint32] = ACTIONS(53),
    [anon_sym_uint64] = ACTIONS(53),
    [anon_sym_bytes] = ACTIONS(53),
    [anon_sym_byte] = ACTIONS(58),
    [anon_sym_customize] = ACTIONS(53),
    [anon_sym_shape] = ACTIONS(53),
    [anon_sym_vec3] = ACTIONS(53),
    [anon_sym_angle] = ACTIONS(53),
    [anon_sym_skillid] = ACTIONS(53),
    [anon_sym_offset] = ACTIONS(53),
    [anon_sym_count] = ACTIONS(53),
    [sym_patchVersion] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [aux_sym_object_repeat1] = STATE(13),
    [anon_sym_object] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_array] = ACTIONS(68),
    [anon_sym_int16] = ACTIONS(68),
    [anon_sym_int32] = ACTIONS(68),
    [anon_sym_int64] = ACTIONS(68),
    [anon_sym_float] = ACTIONS(68),
    [anon_sym_bool] = ACTIONS(68),
    [anon_sym_string] = ACTIONS(68),
    [anon_sym_double] = ACTIONS(68),
    [anon_sym_uint16] = ACTIONS(68),
    [anon_sym_uint32] = ACTIONS(68),
    [anon_sym_uint64] = ACTIONS(68),
    [anon_sym_bytes] = ACTIONS(68),
    [anon_sym_byte] = ACTIONS(73),
    [anon_sym_customize] = ACTIONS(68),
    [anon_sym_shape] = ACTIONS(68),
    [anon_sym_vec3] = ACTIONS(68),
    [anon_sym_angle] = ACTIONS(68),
    [anon_sym_skillid] = ACTIONS(68),
    [anon_sym_offset] = ACTIONS(68),
    [anon_sym_count] = ACTIONS(68),
    [sym_patchVersion] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_object] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_array] = ACTIONS(75),
    [anon_sym_int16] = ACTIONS(75),
    [anon_sym_int32] = ACTIONS(75),
    [anon_sym_int64] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_bool] = ACTIONS(75),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_uint16] = ACTIONS(75),
    [anon_sym_uint32] = ACTIONS(75),
    [anon_sym_uint64] = ACTIONS(75),
    [anon_sym_bytes] = ACTIONS(75),
    [anon_sym_byte] = ACTIONS(77),
    [anon_sym_customize] = ACTIONS(75),
    [anon_sym_shape] = ACTIONS(75),
    [anon_sym_vec3] = ACTIONS(75),
    [anon_sym_angle] = ACTIONS(75),
    [anon_sym_skillid] = ACTIONS(75),
    [anon_sym_offset] = ACTIONS(75),
    [anon_sym_count] = ACTIONS(75),
    [sym_patchVersion] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__simpleTypes] = STATE(24),
    [anon_sym_int16] = ACTIONS(79),
    [anon_sym_int32] = ACTIONS(79),
    [anon_sym_int64] = ACTIONS(79),
    [anon_sym_float] = ACTIONS(79),
    [anon_sym_bool] = ACTIONS(79),
    [anon_sym_string] = ACTIONS(79),
    [anon_sym_double] = ACTIONS(79),
    [anon_sym_uint16] = ACTIONS(79),
    [anon_sym_uint32] = ACTIONS(79),
    [anon_sym_uint64] = ACTIONS(79),
    [anon_sym_bytes] = ACTIONS(79),
    [anon_sym_byte] = ACTIONS(81),
    [anon_sym_customize] = ACTIONS(79),
    [anon_sym_shape] = ACTIONS(79),
    [anon_sym_vec3] = ACTIONS(79),
    [anon_sym_angle] = ACTIONS(79),
    [anon_sym_skillid] = ACTIONS(79),
    [anon_sym_offset] = ACTIONS(79),
    [anon_sym_count] = ACTIONS(79),
    [sym_patchVersion] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(39), 1,
      anon_sym_DASH,
    STATE(3), 1,
      aux_sym_object_repeat1,
    STATE(6), 1,
      aux_sym_object_repeat2,
    ACTIONS(3), 2,
      sym_patchVersion,
      sym_comment,
  [14] = 4,
    ACTIONS(39), 1,
      anon_sym_DASH,
    STATE(3), 1,
      aux_sym_object_repeat1,
    STATE(5), 1,
      aux_sym_object_repeat2,
    ACTIONS(3), 2,
      sym_patchVersion,
      sym_comment,
  [28] = 4,
    ACTIONS(39), 1,
      anon_sym_DASH,
    STATE(3), 1,
      aux_sym_object_repeat1,
    STATE(8), 1,
      aux_sym_object_repeat2,
    ACTIONS(3), 2,
      sym_patchVersion,
      sym_comment,
  [42] = 4,
    ACTIONS(39), 1,
      anon_sym_DASH,
    STATE(3), 1,
      aux_sym_object_repeat1,
    STATE(7), 1,
      aux_sym_object_repeat2,
    ACTIONS(3), 2,
      sym_patchVersion,
      sym_comment,
  [56] = 3,
    ACTIONS(83), 1,
      anon_sym_LT,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_patchVersion,
      sym_comment,
  [67] = 3,
    ACTIONS(83), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_patchVersion,
      sym_comment,
  [78] = 2,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_patchVersion,
      sym_comment,
  [86] = 2,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_patchVersion,
      sym_comment,
  [94] = 2,
    ACTIONS(93), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_patchVersion,
      sym_comment,
  [102] = 2,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_patchVersion,
      sym_comment,
  [110] = 2,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_patchVersion,
      sym_comment,
  [118] = 2,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_patchVersion,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 14,
  [SMALL_STATE(18)] = 28,
  [SMALL_STATE(19)] = 42,
  [SMALL_STATE(20)] = 56,
  [SMALL_STATE(21)] = 67,
  [SMALL_STATE(22)] = 78,
  [SMALL_STATE(23)] = 86,
  [SMALL_STATE(24)] = 94,
  [SMALL_STATE(25)] = 102,
  [SMALL_STATE(26)] = 110,
  [SMALL_STATE(27)] = 118,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(22),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_array, 3), SHIFT(3),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_object, 3), SHIFT(3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat2, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat2, 2), SHIFT_REPEAT(3),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat2, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleField, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simpleField, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(13),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleArray, 5),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simpleArray, 5),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [91] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_teraonline_definitions(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
