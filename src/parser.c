#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_object = 1,
  anon_sym_DASH = 2,
  anon_sym_array = 3,
  anon_sym_LT = 4,
  anon_sym_GT = 5,
  sym_identifier = 6,
  anon_sym_int32 = 7,
  anon_sym_int64 = 8,
  anon_sym_float = 9,
  anon_sym_bool = 10,
  anon_sym_string = 11,
  anon_sym_double = 12,
  anon_sym_uint64 = 13,
  anon_sym_uint32 = 14,
  sym_escape_sequence = 15,
  sym_number = 16,
  sym_true = 17,
  sym_false = 18,
  sym_null = 19,
  sym_comment = 20,
  sym_document = 21,
  sym__value = 22,
  sym_object = 23,
  sym_simple_data = 24,
  sym_pair = 25,
  sym_array = 26,
  sym_simple_array = 27,
  sym__simpleTypes = 28,
  sym__types = 29,
  aux_sym_document_repeat1 = 30,
  aux_sym_object_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_object] = "object",
  [anon_sym_DASH] = "- ",
  [anon_sym_array] = "array",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym_identifier] = "identifier",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_float] = "float",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_double] = "double",
  [anon_sym_uint64] = "uint64",
  [anon_sym_uint32] = "uint32",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_simple_data] = "simple_data",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_simple_array] = "simple_array",
  [sym__simpleTypes] = "_simpleTypes",
  [sym__types] = "_types",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_identifier] = sym_identifier,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_uint32] = anon_sym_uint32,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_simple_data] = sym_simple_data,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_simple_array] = sym_simple_array,
  [sym__simpleTypes] = sym__simpleTypes,
  [sym__types] = sym__types,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
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
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
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
  [sym_simple_data] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_array] = {
    .visible = true,
    .named = true,
  },
  [sym__simpleTypes] = {
    .visible = false,
    .named = true,
  },
  [sym__types] = {
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
};

enum {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 1},
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
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '+') ADVANCE(3);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '0') ADVANCE(75);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(75);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(65);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '6') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '4') ADVANCE(66);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(71);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'j') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 49:
      if (lookahead == 'y') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 51:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(78);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(79);
      END_STATE();
    case 53:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '+') ADVANCE(3);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(51);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(52);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(56);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(22),
    [sym__value] = STATE(2),
    [sym_object] = STATE(13),
    [sym_simple_data] = STATE(13),
    [sym_array] = STATE(13),
    [sym_simple_array] = STATE(13),
    [sym__simpleTypes] = STATE(20),
    [sym__types] = STATE(20),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_object] = ACTIONS(7),
    [anon_sym_array] = ACTIONS(9),
    [anon_sym_int32] = ACTIONS(11),
    [anon_sym_int64] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_double] = ACTIONS(11),
    [anon_sym_uint64] = ACTIONS(11),
    [anon_sym_uint32] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__value] = STATE(3),
    [sym_object] = STATE(13),
    [sym_simple_data] = STATE(13),
    [sym_array] = STATE(13),
    [sym_simple_array] = STATE(13),
    [sym__simpleTypes] = STATE(20),
    [sym__types] = STATE(20),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_object] = ACTIONS(7),
    [anon_sym_array] = ACTIONS(9),
    [anon_sym_int32] = ACTIONS(11),
    [anon_sym_int64] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_double] = ACTIONS(11),
    [anon_sym_uint64] = ACTIONS(11),
    [anon_sym_uint32] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__value] = STATE(3),
    [sym_object] = STATE(13),
    [sym_simple_data] = STATE(13),
    [sym_array] = STATE(13),
    [sym_simple_array] = STATE(13),
    [sym__simpleTypes] = STATE(20),
    [sym__types] = STATE(20),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_object] = ACTIONS(17),
    [anon_sym_array] = ACTIONS(20),
    [anon_sym_int32] = ACTIONS(23),
    [anon_sym_int64] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [anon_sym_double] = ACTIONS(23),
    [anon_sym_uint64] = ACTIONS(23),
    [anon_sym_uint32] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_DASH,
    STATE(6), 1,
      aux_sym_object_repeat1,
    ACTIONS(26), 11,
      ts_builtin_sym_end,
      anon_sym_object,
      anon_sym_array,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_uint64,
      anon_sym_uint32,
  [23] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_DASH,
    STATE(5), 1,
      aux_sym_object_repeat1,
    ACTIONS(30), 11,
      ts_builtin_sym_end,
      anon_sym_object,
      anon_sym_array,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_uint64,
      anon_sym_uint32,
  [46] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_DASH,
    STATE(5), 1,
      aux_sym_object_repeat1,
    ACTIONS(35), 11,
      ts_builtin_sym_end,
      anon_sym_object,
      anon_sym_array,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_uint64,
      anon_sym_uint32,
  [69] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_DASH,
    STATE(5), 1,
      aux_sym_object_repeat1,
    ACTIONS(37), 11,
      ts_builtin_sym_end,
      anon_sym_object,
      anon_sym_array,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_uint64,
      anon_sym_uint32,
  [92] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_array,
    STATE(10), 1,
      sym_pair,
    STATE(23), 2,
      sym__simpleTypes,
      sym__types,
    ACTIONS(39), 9,
      anon_sym_object,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_uint64,
      anon_sym_uint32,
  [117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_DASH,
    STATE(7), 1,
      aux_sym_object_repeat1,
    ACTIONS(43), 11,
      ts_builtin_sym_end,
      anon_sym_object,
      anon_sym_array,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_uint64,
      anon_sym_uint32,
  [140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 12,
      ts_builtin_sym_end,
      anon_sym_object,
      anon_sym_DASH,
      anon_sym_array,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_uint64,
      anon_sym_uint32,
  [158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 12,
      ts_builtin_sym_end,
      anon_sym_object,
      anon_sym_DASH,
      anon_sym_array,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_uint64,
      anon_sym_uint32,
  [176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 11,
      ts_builtin_sym_end,
      anon_sym_object,
      anon_sym_array,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_uint64,
      anon_sym_uint32,
  [193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 11,
      ts_builtin_sym_end,
      anon_sym_object,
      anon_sym_array,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_uint64,
      anon_sym_uint32,
  [210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 11,
      ts_builtin_sym_end,
      anon_sym_object,
      anon_sym_array,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_uint64,
      anon_sym_uint32,
  [227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(21), 1,
      sym__simpleTypes,
    ACTIONS(53), 8,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_uint64,
      anon_sym_uint32,
  [244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(25), 1,
      sym__simpleTypes,
    ACTIONS(55), 8,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_uint64,
      anon_sym_uint32,
  [261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LT,
    ACTIONS(59), 1,
      sym_identifier,
  [271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LT,
    ACTIONS(63), 1,
      sym_identifier,
  [281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
  [288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
  [295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_GT,
  [302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
  [309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
  [316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_identifier,
  [323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_GT,
  [330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 23,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 69,
  [SMALL_STATE(8)] = 92,
  [SMALL_STATE(9)] = 117,
  [SMALL_STATE(10)] = 140,
  [SMALL_STATE(11)] = 158,
  [SMALL_STATE(12)] = 176,
  [SMALL_STATE(13)] = 193,
  [SMALL_STATE(14)] = 210,
  [SMALL_STATE(15)] = 227,
  [SMALL_STATE(16)] = 244,
  [SMALL_STATE(17)] = 261,
  [SMALL_STATE(18)] = 271,
  [SMALL_STATE(19)] = 281,
  [SMALL_STATE(20)] = 288,
  [SMALL_STATE(21)] = 295,
  [SMALL_STATE(22)] = 302,
  [SMALL_STATE(23)] = 309,
  [SMALL_STATE(24)] = 316,
  [SMALL_STATE(25)] = 323,
  [SMALL_STATE(26)] = 330,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(8),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 2, .production_id = 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_data, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_array, 5),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__types, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [71] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__types, 4),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_TERA_DEFINITIONS(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
