#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_scheme_comment_token1 = 1,
  anon_sym_POUND_PIPE = 2,
  aux_sym__scheme_block_comment_token1 = 3,
  aux_sym__scheme_block_comment_token2 = 4,
  anon_sym_PIPE_POUND = 5,
  sym_scheme_boolean = 6,
  sym_scheme_character = 7,
  aux_sym_scheme_number_token1 = 8,
  anon_sym_POUND_COLON = 9,
  sym_scheme_keyword_name = 10,
  anon_sym_DQUOTE = 11,
  sym_scheme_string_fragment = 12,
  sym_scheme_escape_sequence = 13,
  sym_scheme_symbol = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_SQUOTE = 17,
  anon_sym_BQUOTE = 18,
  anon_sym_COMMA = 19,
  anon_sym_COMMA_AT = 20,
  anon_sym_POUND_LPAREN = 21,
  anon_sym_POUNDvu8_LPAREN = 22,
  anon_sym_POUND_LBRACE = 23,
  anon_sym_POUND_RBRACE = 24,
  aux_sym_scheme_embedded_lilypond_text_token1 = 25,
  aux_sym_scheme_embedded_lilypond_text_token2 = 26,
  sym_scheme_program = 27,
  sym__scheme_token = 28,
  sym_scheme_comment = 29,
  sym__scheme_block_comment = 30,
  sym__scheme_datum = 31,
  sym__scheme_simple_datum = 32,
  sym_scheme_number = 33,
  sym_scheme_keyword = 34,
  sym_scheme_string = 35,
  sym__scheme_compound_datum = 36,
  sym_scheme_list = 37,
  sym_scheme_quote = 38,
  sym_scheme_quasiquote = 39,
  sym_scheme_unquote = 40,
  sym_scheme_unquote_splicing = 41,
  sym_scheme_vector = 42,
  sym_scheme_byte_vector = 43,
  sym_scheme_embedded_lilypond = 44,
  sym_scheme_embedded_lilypond_text = 45,
  aux_sym_scheme_program_repeat1 = 46,
  aux_sym__scheme_block_comment_repeat1 = 47,
  aux_sym_scheme_string_repeat1 = 48,
  aux_sym_scheme_quote_repeat1 = 49,
  aux_sym_scheme_embedded_lilypond_text_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_scheme_comment_token1] = "scheme_comment_token1",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym__scheme_block_comment_token1] = "_scheme_block_comment_token1",
  [aux_sym__scheme_block_comment_token2] = "_scheme_block_comment_token2",
  [anon_sym_PIPE_POUND] = "|#",
  [sym_scheme_boolean] = "scheme_boolean",
  [sym_scheme_character] = "scheme_character",
  [aux_sym_scheme_number_token1] = "scheme_number_token1",
  [anon_sym_POUND_COLON] = "#:",
  [sym_scheme_keyword_name] = "scheme_keyword_name",
  [anon_sym_DQUOTE] = "\"",
  [sym_scheme_string_fragment] = "scheme_string_fragment",
  [sym_scheme_escape_sequence] = "scheme_escape_sequence",
  [sym_scheme_symbol] = "scheme_symbol",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA] = ",",
  [anon_sym_COMMA_AT] = ",@",
  [anon_sym_POUND_LPAREN] = "#(",
  [anon_sym_POUNDvu8_LPAREN] = "#vu8(",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_POUND_RBRACE] = "#}",
  [aux_sym_scheme_embedded_lilypond_text_token1] = "scheme_embedded_lilypond_text_token1",
  [aux_sym_scheme_embedded_lilypond_text_token2] = "scheme_embedded_lilypond_text_token2",
  [sym_scheme_program] = "scheme_program",
  [sym__scheme_token] = "_scheme_token",
  [sym_scheme_comment] = "scheme_comment",
  [sym__scheme_block_comment] = "_scheme_block_comment",
  [sym__scheme_datum] = "_scheme_datum",
  [sym__scheme_simple_datum] = "_scheme_simple_datum",
  [sym_scheme_number] = "scheme_number",
  [sym_scheme_keyword] = "scheme_keyword",
  [sym_scheme_string] = "scheme_string",
  [sym__scheme_compound_datum] = "_scheme_compound_datum",
  [sym_scheme_list] = "scheme_list",
  [sym_scheme_quote] = "scheme_quote",
  [sym_scheme_quasiquote] = "scheme_quasiquote",
  [sym_scheme_unquote] = "scheme_unquote",
  [sym_scheme_unquote_splicing] = "scheme_unquote_splicing",
  [sym_scheme_vector] = "scheme_vector",
  [sym_scheme_byte_vector] = "scheme_byte_vector",
  [sym_scheme_embedded_lilypond] = "scheme_embedded_lilypond",
  [sym_scheme_embedded_lilypond_text] = "scheme_embedded_lilypond_text",
  [aux_sym_scheme_program_repeat1] = "scheme_program_repeat1",
  [aux_sym__scheme_block_comment_repeat1] = "_scheme_block_comment_repeat1",
  [aux_sym_scheme_string_repeat1] = "scheme_string_repeat1",
  [aux_sym_scheme_quote_repeat1] = "scheme_quote_repeat1",
  [aux_sym_scheme_embedded_lilypond_text_repeat1] = "scheme_embedded_lilypond_text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_scheme_comment_token1] = aux_sym_scheme_comment_token1,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym__scheme_block_comment_token1] = aux_sym__scheme_block_comment_token1,
  [aux_sym__scheme_block_comment_token2] = aux_sym__scheme_block_comment_token2,
  [anon_sym_PIPE_POUND] = anon_sym_PIPE_POUND,
  [sym_scheme_boolean] = sym_scheme_boolean,
  [sym_scheme_character] = sym_scheme_character,
  [aux_sym_scheme_number_token1] = aux_sym_scheme_number_token1,
  [anon_sym_POUND_COLON] = anon_sym_POUND_COLON,
  [sym_scheme_keyword_name] = sym_scheme_keyword_name,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_scheme_string_fragment] = sym_scheme_string_fragment,
  [sym_scheme_escape_sequence] = sym_scheme_escape_sequence,
  [sym_scheme_symbol] = sym_scheme_symbol,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COMMA_AT] = anon_sym_COMMA_AT,
  [anon_sym_POUND_LPAREN] = anon_sym_POUND_LPAREN,
  [anon_sym_POUNDvu8_LPAREN] = anon_sym_POUNDvu8_LPAREN,
  [anon_sym_POUND_LBRACE] = anon_sym_POUND_LBRACE,
  [anon_sym_POUND_RBRACE] = anon_sym_POUND_RBRACE,
  [aux_sym_scheme_embedded_lilypond_text_token1] = aux_sym_scheme_embedded_lilypond_text_token1,
  [aux_sym_scheme_embedded_lilypond_text_token2] = aux_sym_scheme_embedded_lilypond_text_token2,
  [sym_scheme_program] = sym_scheme_program,
  [sym__scheme_token] = sym__scheme_token,
  [sym_scheme_comment] = sym_scheme_comment,
  [sym__scheme_block_comment] = sym__scheme_block_comment,
  [sym__scheme_datum] = sym__scheme_datum,
  [sym__scheme_simple_datum] = sym__scheme_simple_datum,
  [sym_scheme_number] = sym_scheme_number,
  [sym_scheme_keyword] = sym_scheme_keyword,
  [sym_scheme_string] = sym_scheme_string,
  [sym__scheme_compound_datum] = sym__scheme_compound_datum,
  [sym_scheme_list] = sym_scheme_list,
  [sym_scheme_quote] = sym_scheme_quote,
  [sym_scheme_quasiquote] = sym_scheme_quasiquote,
  [sym_scheme_unquote] = sym_scheme_unquote,
  [sym_scheme_unquote_splicing] = sym_scheme_unquote_splicing,
  [sym_scheme_vector] = sym_scheme_vector,
  [sym_scheme_byte_vector] = sym_scheme_byte_vector,
  [sym_scheme_embedded_lilypond] = sym_scheme_embedded_lilypond,
  [sym_scheme_embedded_lilypond_text] = sym_scheme_embedded_lilypond_text,
  [aux_sym_scheme_program_repeat1] = aux_sym_scheme_program_repeat1,
  [aux_sym__scheme_block_comment_repeat1] = aux_sym__scheme_block_comment_repeat1,
  [aux_sym_scheme_string_repeat1] = aux_sym_scheme_string_repeat1,
  [aux_sym_scheme_quote_repeat1] = aux_sym_scheme_quote_repeat1,
  [aux_sym_scheme_embedded_lilypond_text_repeat1] = aux_sym_scheme_embedded_lilypond_text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_scheme_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__scheme_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__scheme_block_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_scheme_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_character] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_scheme_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_scheme_keyword_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_scheme_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDvu8_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_scheme_embedded_lilypond_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scheme_embedded_lilypond_text_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_scheme_program] = {
    .visible = true,
    .named = true,
  },
  [sym__scheme_token] = {
    .visible = false,
    .named = true,
  },
  [sym_scheme_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__scheme_block_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__scheme_datum] = {
    .visible = false,
    .named = true,
  },
  [sym__scheme_simple_datum] = {
    .visible = false,
    .named = true,
  },
  [sym_scheme_number] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_string] = {
    .visible = true,
    .named = true,
  },
  [sym__scheme_compound_datum] = {
    .visible = false,
    .named = true,
  },
  [sym_scheme_list] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_quasiquote] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_unquote_splicing] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_byte_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_embedded_lilypond] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_embedded_lilypond_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_scheme_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__scheme_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scheme_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scheme_quote_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scheme_embedded_lilypond_text_repeat1] = {
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
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 43,
  [46] = 44,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 27,
  [54] = 38,
  [55] = 55,
  [56] = 56,
  [57] = 57,
};

static inline bool sym_scheme_character_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\r')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8202 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8287 || c == 12288))));
}

static inline bool sym_scheme_keyword_name_character_set_1(int32_t c) {
  return (c < 5760
    ? (c < '{'
      ? (c < 11
        ? c == 0
        : (c <= '\f' || (c >= '[' && c <= ']')))
      : (c <= '{' || (c < 160
        ? c == '}'
        : c <= 160)))
    : (c <= 5760 || (c < 8239
      ? (c < 8232
        ? (c >= 8192 && c <= 8202)
        : c <= 8233)
      : (c <= 8239 || (c < 12288
        ? c == 8287
        : c <= 12288)))));
}

static inline bool sym_scheme_keyword_name_character_set_2(int32_t c) {
  return (c < '{'
    ? (c < '\''
      ? (c < ' '
        ? (c < '\t'
          ? c == 0
          : c <= '\r')
        : (c <= ' ' || (c >= '"' && c <= '#')))
      : (c <= ')' || (c < '['
        ? (c < ';'
          ? c == ','
          : c <= ';')
        : (c <= ']' || c == '`'))))
    : (c <= '{' || (c < 8232
      ? (c < 5760
        ? (c < 160
          ? c == '}'
          : c <= 160)
        : (c <= 5760 || (c >= 8192 && c <= 8202)))
      : (c <= 8233 || (c < 8287
        ? c == 8239
        : (c <= 8287 || c == 12288))))));
}

static inline bool sym_scheme_symbol_character_set_1(int32_t c) {
  return (c < '{'
    ? (c < '\''
      ? (c < ' '
        ? (c < '\t'
          ? c == 0
          : c <= '\r')
        : (c <= ' ' || c == '"'))
      : (c <= ')' || (c < '['
        ? (c < ';'
          ? c == ','
          : c <= ';')
        : (c <= ']' || c == '`'))))
    : (c <= '{' || (c < 8232
      ? (c < 5760
        ? (c < 160
          ? c == '}'
          : c <= 160)
        : (c <= 5760 || (c >= 8192 && c <= 8202)))
      : (c <= 8233 || (c < 8287
        ? c == 8239
        : (c <= 8287 || c == 12288))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(161);
      if (lookahead == '"') ADVANCE(269);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(312);
      if (lookahead == '(') ADVANCE(310);
      if (lookahead == ')') ADVANCE(311);
      if (lookahead == ',') ADVANCE(314);
      if (lookahead == ';') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '`') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (!sym_scheme_keyword_name_character_set_1(lookahead)) ADVANCE(268);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(269);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(136);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(206);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(150);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '/') ADVANCE(150);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(58);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(58);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(168);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(229);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 24:
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == ';') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == 'v') ADVANCE(46);
      if (lookahead == '{') ADVANCE(318);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(17);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(170);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(20);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(3);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == ';') ADVANCE(162);
      if (lookahead == '{') ADVANCE(318);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '}') ADVANCE(319);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(170);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      if (lookahead != 0) ADVANCE(322);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(317);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(261);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(260);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == '0') ADVANCE(195);
      END_STATE();
    case 39:
      if (lookahead == '0') ADVANCE(254);
      END_STATE();
    case 40:
      if (lookahead == '0') ADVANCE(88);
      END_STATE();
    case 41:
      if (lookahead == '0') ADVANCE(251);
      END_STATE();
    case 42:
      if (lookahead == '0') ADVANCE(255);
      END_STATE();
    case 43:
      if (lookahead == '0') ADVANCE(256);
      END_STATE();
    case 44:
      if (lookahead == '8') ADVANCE(26);
      END_STATE();
    case 45:
      if (lookahead == ';') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 'x') ADVANCE(153);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 48:
      if (lookahead == '}') ADVANCE(319);
      if (lookahead != 0) ADVANCE(322);
      END_STATE();
    case 49:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(206);
      END_STATE();
    case 50:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(229);
      END_STATE();
    case 51:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 52:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(90);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(221);
      END_STATE();
    case 53:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(235);
      END_STATE();
    case 54:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 55:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 56:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 57:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 58:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(174);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(175);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(181);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(191);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(188);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(189);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(173);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(176);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(188);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(190);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(193);
      if (!sym_scheme_character_character_set_1(lookahead)) ADVANCE(172);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 68:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(172);
      END_STATE();
    case 69:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(49);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(27);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(50);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(51);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 79:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 80:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 81:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 82:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 83:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 84:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 85:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 86:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 87:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(258);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(62);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(214);
      END_STATE();
    case 88:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 89:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(221);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(235);
      END_STATE();
    case 92:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 94:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(260);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(9);
      END_STATE();
    case 95:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(260);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(19);
      END_STATE();
    case 96:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(260);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 97:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(231);
      END_STATE();
    case 98:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(263);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 99:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(172);
      END_STATE();
    case 100:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(123);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 106:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 108:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 109:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 110:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 117:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 118:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 119:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(172);
      END_STATE();
    case 120:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 121:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 122:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 123:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 124:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      END_STATE();
    case 125:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      END_STATE();
    case 126:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(75);
      END_STATE();
    case 127:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 128:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 129:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(105);
      END_STATE();
    case 130:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(172);
      END_STATE();
    case 131:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(219);
      END_STATE();
    case 132:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(223);
      END_STATE();
    case 133:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(225);
      END_STATE();
    case 134:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(11);
      END_STATE();
    case 135:
      if (lookahead == 'B' ||
          lookahead == 'X' ||
          lookahead == 'b' ||
          lookahead == 'x') ADVANCE(172);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 140:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(172);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(233);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(237);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(226);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(12);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 158:
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 159:
      if (eof) ADVANCE(161);
      if (lookahead == '"') ADVANCE(269);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(312);
      if (lookahead == '(') ADVANCE(310);
      if (lookahead == ')') ADVANCE(311);
      if (lookahead == ',') ADVANCE(314);
      if (lookahead == ';') ADVANCE(162);
      if (lookahead == '`') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (!sym_scheme_keyword_name_character_set_1(lookahead)) ADVANCE(309);
      END_STATE();
    case 160:
      if (eof) ADVANCE(161);
      if (lookahead == '"') ADVANCE(269);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '\'') ADVANCE(312);
      if (lookahead == '(') ADVANCE(310);
      if (lookahead == ')') ADVANCE(311);
      if (lookahead == ',') ADVANCE(314);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == ';') ADVANCE(162);
      if (lookahead == '`') ADVANCE(313);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (!sym_scheme_keyword_name_character_set_1(lookahead)) ADVANCE(309);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_scheme_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__scheme_block_comment_token1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__scheme_block_comment_token2);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__scheme_block_comment_token2);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(165);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__scheme_block_comment_token2);
      if (lookahead == '|') ADVANCE(163);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_scheme_boolean);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_scheme_boolean);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_scheme_boolean);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_scheme_character);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (lookahead == 'L' ||
          lookahead == 'P' ||
          lookahead == 'l' ||
          lookahead == 'p') ADVANCE(172);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(99);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(140);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(172);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(172);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(172);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'F' ||
          lookahead == 'S' ||
          lookahead == 'f' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'I' ||
          lookahead == 'S' ||
          lookahead == 'i' ||
          lookahead == 's') ADVANCE(172);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(185);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(179);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(68);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_scheme_character);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_scheme_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(301);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(281);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (!sym_scheme_symbol_character_set_1(lookahead)) ADVANCE(309);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(55);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(281);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (!sym_scheme_symbol_character_set_1(lookahead)) ADVANCE(309);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(55);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(281);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (!sym_scheme_symbol_character_set_1(lookahead)) ADVANCE(309);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(56);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(281);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (!sym_scheme_symbol_character_set_1(lookahead)) ADVANCE(309);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(56);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == '/') ADVANCE(305);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (!sym_scheme_symbol_character_set_1(lookahead)) ADVANCE(309);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == '/') ADVANCE(149);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == '/') ADVANCE(149);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(57);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(216);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (!sym_scheme_symbol_character_set_1(lookahead)) ADVANCE(309);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(216);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(57);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(216);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '/') ADVANCE(133);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '/') ADVANCE(143);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '/') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '/') ADVANCE(156);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '/') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(281);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(281);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(292);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(293);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_POUND_COLON);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_scheme_keyword_name);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_scheme_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_scheme_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_scheme_escape_sequence);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(306);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (!sym_scheme_symbol_character_set_1(lookahead)) ADVANCE(309);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (!sym_scheme_symbol_character_set_1(lookahead)) ADVANCE(309);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '.') ADVANCE(283);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '.') ADVANCE(302);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(257);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '.') ADVANCE(284);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '.') ADVANCE(282);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '.') ADVANCE(306);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(259);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '0') ADVANCE(266);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '0') ADVANCE(249);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '0') ADVANCE(296);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(297);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(298);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(275);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(277);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(280);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(275);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(277);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(280);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(294);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (!sym_scheme_keyword_name_character_set_2(lookahead)) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_POUNDvu8_LPAREN);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_scheme_embedded_lilypond_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_scheme_embedded_lilypond_text_token1);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_scheme_embedded_lilypond_text_token2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 160},
  [2] = {.lex_state = 160},
  [3] = {.lex_state = 160},
  [4] = {.lex_state = 160},
  [5] = {.lex_state = 160},
  [6] = {.lex_state = 160},
  [7] = {.lex_state = 160},
  [8] = {.lex_state = 160},
  [9] = {.lex_state = 160},
  [10] = {.lex_state = 160},
  [11] = {.lex_state = 160},
  [12] = {.lex_state = 160},
  [13] = {.lex_state = 160},
  [14] = {.lex_state = 160},
  [15] = {.lex_state = 160},
  [16] = {.lex_state = 160},
  [17] = {.lex_state = 160},
  [18] = {.lex_state = 160},
  [19] = {.lex_state = 160},
  [20] = {.lex_state = 160},
  [21] = {.lex_state = 160},
  [22] = {.lex_state = 160},
  [23] = {.lex_state = 160},
  [24] = {.lex_state = 160},
  [25] = {.lex_state = 160},
  [26] = {.lex_state = 160},
  [27] = {.lex_state = 160},
  [28] = {.lex_state = 160},
  [29] = {.lex_state = 160},
  [30] = {.lex_state = 160},
  [31] = {.lex_state = 160},
  [32] = {.lex_state = 160},
  [33] = {.lex_state = 160},
  [34] = {.lex_state = 160},
  [35] = {.lex_state = 160},
  [36] = {.lex_state = 160},
  [37] = {.lex_state = 160},
  [38] = {.lex_state = 160},
  [39] = {.lex_state = 160},
  [40] = {.lex_state = 160},
  [41] = {.lex_state = 160},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 158},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_scheme_comment_token1] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [sym_scheme_boolean] = ACTIONS(1),
    [anon_sym_POUND_COLON] = ACTIONS(1),
    [sym_scheme_keyword_name] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_scheme_escape_sequence] = ACTIONS(1),
    [sym_scheme_symbol] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COMMA_AT] = ACTIONS(1),
    [anon_sym_POUND_LPAREN] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_POUND_RBRACE] = ACTIONS(1),
    [aux_sym_scheme_embedded_lilypond_text_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_scheme_program] = STATE(56),
    [sym__scheme_token] = STATE(8),
    [sym_scheme_comment] = STATE(8),
    [sym__scheme_block_comment] = STATE(21),
    [sym__scheme_datum] = STATE(8),
    [sym__scheme_simple_datum] = STATE(8),
    [sym_scheme_number] = STATE(8),
    [sym_scheme_keyword] = STATE(8),
    [sym_scheme_string] = STATE(8),
    [sym__scheme_compound_datum] = STATE(8),
    [sym_scheme_list] = STATE(8),
    [sym_scheme_quote] = STATE(8),
    [sym_scheme_quasiquote] = STATE(8),
    [sym_scheme_unquote] = STATE(8),
    [sym_scheme_unquote_splicing] = STATE(8),
    [sym_scheme_vector] = STATE(8),
    [sym_scheme_byte_vector] = STATE(8),
    [sym_scheme_embedded_lilypond] = STATE(8),
    [aux_sym_scheme_program_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(9),
    [sym_scheme_character] = ACTIONS(9),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [2] = {
    [sym__scheme_token] = STATE(2),
    [sym_scheme_comment] = STATE(2),
    [sym__scheme_block_comment] = STATE(21),
    [sym__scheme_datum] = STATE(2),
    [sym__scheme_simple_datum] = STATE(2),
    [sym_scheme_number] = STATE(2),
    [sym_scheme_keyword] = STATE(2),
    [sym_scheme_string] = STATE(2),
    [sym__scheme_compound_datum] = STATE(2),
    [sym_scheme_list] = STATE(2),
    [sym_scheme_quote] = STATE(2),
    [sym_scheme_quasiquote] = STATE(2),
    [sym_scheme_unquote] = STATE(2),
    [sym_scheme_unquote_splicing] = STATE(2),
    [sym_scheme_vector] = STATE(2),
    [sym_scheme_byte_vector] = STATE(2),
    [sym_scheme_embedded_lilypond] = STATE(2),
    [aux_sym_scheme_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym_scheme_comment_token1] = ACTIONS(37),
    [anon_sym_POUND_PIPE] = ACTIONS(40),
    [sym_scheme_boolean] = ACTIONS(43),
    [sym_scheme_character] = ACTIONS(43),
    [aux_sym_scheme_number_token1] = ACTIONS(46),
    [anon_sym_POUND_COLON] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(52),
    [sym_scheme_symbol] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_COMMA_AT] = ACTIONS(70),
    [anon_sym_POUND_LPAREN] = ACTIONS(73),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(76),
    [anon_sym_POUND_LBRACE] = ACTIONS(79),
  },
  [3] = {
    [sym__scheme_token] = STATE(2),
    [sym_scheme_comment] = STATE(2),
    [sym__scheme_block_comment] = STATE(21),
    [sym__scheme_datum] = STATE(2),
    [sym__scheme_simple_datum] = STATE(2),
    [sym_scheme_number] = STATE(2),
    [sym_scheme_keyword] = STATE(2),
    [sym_scheme_string] = STATE(2),
    [sym__scheme_compound_datum] = STATE(2),
    [sym_scheme_list] = STATE(2),
    [sym_scheme_quote] = STATE(2),
    [sym_scheme_quasiquote] = STATE(2),
    [sym_scheme_unquote] = STATE(2),
    [sym_scheme_unquote_splicing] = STATE(2),
    [sym_scheme_vector] = STATE(2),
    [sym_scheme_byte_vector] = STATE(2),
    [sym_scheme_embedded_lilypond] = STATE(2),
    [aux_sym_scheme_program_repeat1] = STATE(2),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(82),
    [sym_scheme_character] = ACTIONS(82),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(86),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [4] = {
    [sym__scheme_token] = STATE(2),
    [sym_scheme_comment] = STATE(2),
    [sym__scheme_block_comment] = STATE(21),
    [sym__scheme_datum] = STATE(2),
    [sym__scheme_simple_datum] = STATE(2),
    [sym_scheme_number] = STATE(2),
    [sym_scheme_keyword] = STATE(2),
    [sym_scheme_string] = STATE(2),
    [sym__scheme_compound_datum] = STATE(2),
    [sym_scheme_list] = STATE(2),
    [sym_scheme_quote] = STATE(2),
    [sym_scheme_quasiquote] = STATE(2),
    [sym_scheme_unquote] = STATE(2),
    [sym_scheme_unquote_splicing] = STATE(2),
    [sym_scheme_vector] = STATE(2),
    [sym_scheme_byte_vector] = STATE(2),
    [sym_scheme_embedded_lilypond] = STATE(2),
    [aux_sym_scheme_program_repeat1] = STATE(2),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(82),
    [sym_scheme_character] = ACTIONS(82),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(88),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [5] = {
    [sym__scheme_token] = STATE(9),
    [sym_scheme_comment] = STATE(9),
    [sym__scheme_block_comment] = STATE(21),
    [sym__scheme_datum] = STATE(9),
    [sym__scheme_simple_datum] = STATE(9),
    [sym_scheme_number] = STATE(9),
    [sym_scheme_keyword] = STATE(9),
    [sym_scheme_string] = STATE(9),
    [sym__scheme_compound_datum] = STATE(9),
    [sym_scheme_list] = STATE(9),
    [sym_scheme_quote] = STATE(9),
    [sym_scheme_quasiquote] = STATE(9),
    [sym_scheme_unquote] = STATE(9),
    [sym_scheme_unquote_splicing] = STATE(9),
    [sym_scheme_vector] = STATE(9),
    [sym_scheme_byte_vector] = STATE(9),
    [sym_scheme_embedded_lilypond] = STATE(9),
    [aux_sym_scheme_program_repeat1] = STATE(9),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(90),
    [sym_scheme_character] = ACTIONS(90),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [6] = {
    [sym__scheme_token] = STATE(4),
    [sym_scheme_comment] = STATE(4),
    [sym__scheme_block_comment] = STATE(21),
    [sym__scheme_datum] = STATE(4),
    [sym__scheme_simple_datum] = STATE(4),
    [sym_scheme_number] = STATE(4),
    [sym_scheme_keyword] = STATE(4),
    [sym_scheme_string] = STATE(4),
    [sym__scheme_compound_datum] = STATE(4),
    [sym_scheme_list] = STATE(4),
    [sym_scheme_quote] = STATE(4),
    [sym_scheme_quasiquote] = STATE(4),
    [sym_scheme_unquote] = STATE(4),
    [sym_scheme_unquote_splicing] = STATE(4),
    [sym_scheme_vector] = STATE(4),
    [sym_scheme_byte_vector] = STATE(4),
    [sym_scheme_embedded_lilypond] = STATE(4),
    [aux_sym_scheme_program_repeat1] = STATE(4),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(96),
    [sym_scheme_character] = ACTIONS(96),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [7] = {
    [sym__scheme_token] = STATE(3),
    [sym_scheme_comment] = STATE(3),
    [sym__scheme_block_comment] = STATE(21),
    [sym__scheme_datum] = STATE(3),
    [sym__scheme_simple_datum] = STATE(3),
    [sym_scheme_number] = STATE(3),
    [sym_scheme_keyword] = STATE(3),
    [sym_scheme_string] = STATE(3),
    [sym__scheme_compound_datum] = STATE(3),
    [sym_scheme_list] = STATE(3),
    [sym_scheme_quote] = STATE(3),
    [sym_scheme_quasiquote] = STATE(3),
    [sym_scheme_unquote] = STATE(3),
    [sym_scheme_unquote_splicing] = STATE(3),
    [sym_scheme_vector] = STATE(3),
    [sym_scheme_byte_vector] = STATE(3),
    [sym_scheme_embedded_lilypond] = STATE(3),
    [aux_sym_scheme_program_repeat1] = STATE(3),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(102),
    [sym_scheme_character] = ACTIONS(102),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [8] = {
    [sym__scheme_token] = STATE(2),
    [sym_scheme_comment] = STATE(2),
    [sym__scheme_block_comment] = STATE(21),
    [sym__scheme_datum] = STATE(2),
    [sym__scheme_simple_datum] = STATE(2),
    [sym_scheme_number] = STATE(2),
    [sym_scheme_keyword] = STATE(2),
    [sym_scheme_string] = STATE(2),
    [sym__scheme_compound_datum] = STATE(2),
    [sym_scheme_list] = STATE(2),
    [sym_scheme_quote] = STATE(2),
    [sym_scheme_quasiquote] = STATE(2),
    [sym_scheme_unquote] = STATE(2),
    [sym_scheme_unquote_splicing] = STATE(2),
    [sym_scheme_vector] = STATE(2),
    [sym_scheme_byte_vector] = STATE(2),
    [sym_scheme_embedded_lilypond] = STATE(2),
    [aux_sym_scheme_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(108),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(82),
    [sym_scheme_character] = ACTIONS(82),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [9] = {
    [sym__scheme_token] = STATE(2),
    [sym_scheme_comment] = STATE(2),
    [sym__scheme_block_comment] = STATE(21),
    [sym__scheme_datum] = STATE(2),
    [sym__scheme_simple_datum] = STATE(2),
    [sym_scheme_number] = STATE(2),
    [sym_scheme_keyword] = STATE(2),
    [sym_scheme_string] = STATE(2),
    [sym__scheme_compound_datum] = STATE(2),
    [sym_scheme_list] = STATE(2),
    [sym_scheme_quote] = STATE(2),
    [sym_scheme_quasiquote] = STATE(2),
    [sym_scheme_unquote] = STATE(2),
    [sym_scheme_unquote_splicing] = STATE(2),
    [sym_scheme_vector] = STATE(2),
    [sym_scheme_byte_vector] = STATE(2),
    [sym_scheme_embedded_lilypond] = STATE(2),
    [aux_sym_scheme_program_repeat1] = STATE(2),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(82),
    [sym_scheme_character] = ACTIONS(82),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [10] = {
    [sym_scheme_comment] = STATE(18),
    [sym__scheme_block_comment] = STATE(21),
    [sym__scheme_datum] = STATE(31),
    [sym__scheme_simple_datum] = STATE(31),
    [sym_scheme_number] = STATE(31),
    [sym_scheme_keyword] = STATE(31),
    [sym_scheme_string] = STATE(31),
    [sym__scheme_compound_datum] = STATE(31),
    [sym_scheme_list] = STATE(31),
    [sym_scheme_quote] = STATE(31),
    [sym_scheme_quasiquote] = STATE(31),
    [sym_scheme_unquote] = STATE(31),
    [sym_scheme_unquote_splicing] = STATE(31),
    [sym_scheme_vector] = STATE(31),
    [sym_scheme_byte_vector] = STATE(31),
    [sym_scheme_embedded_lilypond] = STATE(31),
    [aux_sym_scheme_quote_repeat1] = STATE(18),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(112),
    [sym_scheme_character] = ACTIONS(112),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [11] = {
    [sym_scheme_comment] = STATE(17),
    [sym__scheme_block_comment] = STATE(21),
    [sym__scheme_datum] = STATE(24),
    [sym__scheme_simple_datum] = STATE(24),
    [sym_scheme_number] = STATE(24),
    [sym_scheme_keyword] = STATE(24),
    [sym_scheme_string] = STATE(24),
    [sym__scheme_compound_datum] = STATE(24),
    [sym_scheme_list] = STATE(24),
    [sym_scheme_quote] = STATE(24),
    [sym_scheme_quasiquote] = STATE(24),
    [sym_scheme_unquote] = STATE(24),
    [sym_scheme_unquote_splicing] = STATE(24),
    [sym_scheme_vector] = STATE(24),
    [sym_scheme_byte_vector] = STATE(24),
    [sym_scheme_embedded_lilypond] = STATE(24),
    [aux_sym_scheme_quote_repeat1] = STATE(17),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(116),
    [sym_scheme_character] = ACTIONS(116),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [12] = {
    [sym_scheme_comment] = STATE(16),
    [sym__scheme_block_comment] = STATE(21),
    [sym__scheme_datum] = STATE(26),
    [sym__scheme_simple_datum] = STATE(26),
    [sym_scheme_number] = STATE(26),
    [sym_scheme_keyword] = STATE(26),
    [sym_scheme_string] = STATE(26),
    [sym__scheme_compound_datum] = STATE(26),
    [sym_scheme_list] = STATE(26),
    [sym_scheme_quote] = STATE(26),
    [sym_scheme_quasiquote] = STATE(26),
    [sym_scheme_unquote] = STATE(26),
    [sym_scheme_unquote_splicing] = STATE(26),
    [sym_scheme_vector] = STATE(26),
    [sym_scheme_byte_vector] = STATE(26),
    [sym_scheme_embedded_lilypond] = STATE(26),
    [aux_sym_scheme_quote_repeat1] = STATE(16),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(120),
    [sym_scheme_character] = ACTIONS(120),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [13] = {
    [sym_scheme_comment] = STATE(15),
    [sym__scheme_block_comment] = STATE(21),
    [sym__scheme_datum] = STATE(28),
    [sym__scheme_simple_datum] = STATE(28),
    [sym_scheme_number] = STATE(28),
    [sym_scheme_keyword] = STATE(28),
    [sym_scheme_string] = STATE(28),
    [sym__scheme_compound_datum] = STATE(28),
    [sym_scheme_list] = STATE(28),
    [sym_scheme_quote] = STATE(28),
    [sym_scheme_quasiquote] = STATE(28),
    [sym_scheme_unquote] = STATE(28),
    [sym_scheme_unquote_splicing] = STATE(28),
    [sym_scheme_vector] = STATE(28),
    [sym_scheme_byte_vector] = STATE(28),
    [sym_scheme_embedded_lilypond] = STATE(28),
    [aux_sym_scheme_quote_repeat1] = STATE(15),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(124),
    [sym_scheme_character] = ACTIONS(124),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [14] = {
    [sym_scheme_comment] = STATE(10),
    [sym__scheme_block_comment] = STATE(21),
    [sym__scheme_datum] = STATE(20),
    [sym__scheme_simple_datum] = STATE(20),
    [sym_scheme_number] = STATE(20),
    [sym_scheme_keyword] = STATE(20),
    [sym_scheme_string] = STATE(20),
    [sym__scheme_compound_datum] = STATE(20),
    [sym_scheme_list] = STATE(20),
    [sym_scheme_quote] = STATE(20),
    [sym_scheme_quasiquote] = STATE(20),
    [sym_scheme_unquote] = STATE(20),
    [sym_scheme_unquote_splicing] = STATE(20),
    [sym_scheme_vector] = STATE(20),
    [sym_scheme_byte_vector] = STATE(20),
    [sym_scheme_embedded_lilypond] = STATE(20),
    [aux_sym_scheme_quote_repeat1] = STATE(10),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(128),
    [sym_scheme_character] = ACTIONS(128),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [15] = {
    [sym_scheme_comment] = STATE(18),
    [sym__scheme_block_comment] = STATE(21),
    [sym__scheme_datum] = STATE(29),
    [sym__scheme_simple_datum] = STATE(29),
    [sym_scheme_number] = STATE(29),
    [sym_scheme_keyword] = STATE(29),
    [sym_scheme_string] = STATE(29),
    [sym__scheme_compound_datum] = STATE(29),
    [sym_scheme_list] = STATE(29),
    [sym_scheme_quote] = STATE(29),
    [sym_scheme_quasiquote] = STATE(29),
    [sym_scheme_unquote] = STATE(29),
    [sym_scheme_unquote_splicing] = STATE(29),
    [sym_scheme_vector] = STATE(29),
    [sym_scheme_byte_vector] = STATE(29),
    [sym_scheme_embedded_lilypond] = STATE(29),
    [aux_sym_scheme_quote_repeat1] = STATE(18),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(132),
    [sym_scheme_character] = ACTIONS(132),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [16] = {
    [sym_scheme_comment] = STATE(18),
    [sym__scheme_block_comment] = STATE(21),
    [sym__scheme_datum] = STATE(25),
    [sym__scheme_simple_datum] = STATE(25),
    [sym_scheme_number] = STATE(25),
    [sym_scheme_keyword] = STATE(25),
    [sym_scheme_string] = STATE(25),
    [sym__scheme_compound_datum] = STATE(25),
    [sym_scheme_list] = STATE(25),
    [sym_scheme_quote] = STATE(25),
    [sym_scheme_quasiquote] = STATE(25),
    [sym_scheme_unquote] = STATE(25),
    [sym_scheme_unquote_splicing] = STATE(25),
    [sym_scheme_vector] = STATE(25),
    [sym_scheme_byte_vector] = STATE(25),
    [sym_scheme_embedded_lilypond] = STATE(25),
    [aux_sym_scheme_quote_repeat1] = STATE(18),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(136),
    [sym_scheme_character] = ACTIONS(136),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [17] = {
    [sym_scheme_comment] = STATE(18),
    [sym__scheme_block_comment] = STATE(21),
    [sym__scheme_datum] = STATE(30),
    [sym__scheme_simple_datum] = STATE(30),
    [sym_scheme_number] = STATE(30),
    [sym_scheme_keyword] = STATE(30),
    [sym_scheme_string] = STATE(30),
    [sym__scheme_compound_datum] = STATE(30),
    [sym_scheme_list] = STATE(30),
    [sym_scheme_quote] = STATE(30),
    [sym_scheme_quasiquote] = STATE(30),
    [sym_scheme_unquote] = STATE(30),
    [sym_scheme_unquote_splicing] = STATE(30),
    [sym_scheme_vector] = STATE(30),
    [sym_scheme_byte_vector] = STATE(30),
    [sym_scheme_embedded_lilypond] = STATE(30),
    [aux_sym_scheme_quote_repeat1] = STATE(18),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(140),
    [sym_scheme_character] = ACTIONS(140),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(144), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(147), 1,
      anon_sym_POUND_PIPE,
    STATE(21), 1,
      sym__scheme_block_comment,
    STATE(18), 2,
      sym_scheme_comment,
      aux_sym_scheme_quote_repeat1,
    ACTIONS(152), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(150), 11,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [32] = 2,
    ACTIONS(156), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(154), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [55] = 2,
    ACTIONS(160), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(158), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [78] = 2,
    ACTIONS(164), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(162), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [101] = 2,
    ACTIONS(168), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(166), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [124] = 2,
    ACTIONS(172), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(170), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [147] = 2,
    ACTIONS(176), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(174), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [170] = 2,
    ACTIONS(180), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(178), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [193] = 2,
    ACTIONS(184), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(182), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [216] = 2,
    ACTIONS(188), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(186), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [239] = 2,
    ACTIONS(192), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(190), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [262] = 2,
    ACTIONS(196), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(194), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [285] = 2,
    ACTIONS(200), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(198), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [308] = 2,
    ACTIONS(204), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(202), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [331] = 2,
    ACTIONS(208), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(206), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [354] = 2,
    ACTIONS(212), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(210), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [377] = 2,
    ACTIONS(216), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(214), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [400] = 2,
    ACTIONS(220), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(218), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [423] = 2,
    ACTIONS(224), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(222), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [446] = 2,
    ACTIONS(228), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(226), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [469] = 2,
    ACTIONS(232), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(230), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [492] = 2,
    ACTIONS(236), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(234), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [515] = 2,
    ACTIONS(240), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(238), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [538] = 2,
    ACTIONS(244), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(242), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [561] = 4,
    ACTIONS(246), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(252), 1,
      anon_sym_PIPE_POUND,
    ACTIONS(249), 2,
      aux_sym__scheme_block_comment_token1,
      aux_sym__scheme_block_comment_token2,
    STATE(42), 2,
      sym__scheme_block_comment,
      aux_sym__scheme_block_comment_repeat1,
  [576] = 4,
    ACTIONS(254), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(258), 1,
      anon_sym_PIPE_POUND,
    ACTIONS(256), 2,
      aux_sym__scheme_block_comment_token1,
      aux_sym__scheme_block_comment_token2,
    STATE(44), 2,
      sym__scheme_block_comment,
      aux_sym__scheme_block_comment_repeat1,
  [591] = 4,
    ACTIONS(254), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(262), 1,
      anon_sym_PIPE_POUND,
    ACTIONS(260), 2,
      aux_sym__scheme_block_comment_token1,
      aux_sym__scheme_block_comment_token2,
    STATE(42), 2,
      sym__scheme_block_comment,
      aux_sym__scheme_block_comment_repeat1,
  [606] = 4,
    ACTIONS(254), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(266), 1,
      anon_sym_PIPE_POUND,
    ACTIONS(264), 2,
      aux_sym__scheme_block_comment_token1,
      aux_sym__scheme_block_comment_token2,
    STATE(46), 2,
      sym__scheme_block_comment,
      aux_sym__scheme_block_comment_repeat1,
  [621] = 4,
    ACTIONS(254), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(268), 1,
      anon_sym_PIPE_POUND,
    ACTIONS(260), 2,
      aux_sym__scheme_block_comment_token1,
      aux_sym__scheme_block_comment_token2,
    STATE(42), 2,
      sym__scheme_block_comment,
      aux_sym__scheme_block_comment_repeat1,
  [636] = 5,
    ACTIONS(270), 1,
      anon_sym_POUND_RBRACE,
    ACTIONS(272), 1,
      aux_sym_scheme_embedded_lilypond_text_token1,
    ACTIONS(274), 1,
      aux_sym_scheme_embedded_lilypond_text_token2,
    STATE(49), 1,
      aux_sym_scheme_embedded_lilypond_text_repeat1,
    STATE(55), 1,
      sym_scheme_embedded_lilypond_text,
  [652] = 3,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym_scheme_string_repeat1,
    ACTIONS(278), 2,
      sym_scheme_string_fragment,
      sym_scheme_escape_sequence,
  [663] = 4,
    ACTIONS(281), 1,
      anon_sym_POUND_RBRACE,
    ACTIONS(283), 1,
      aux_sym_scheme_embedded_lilypond_text_token1,
    ACTIONS(285), 1,
      aux_sym_scheme_embedded_lilypond_text_token2,
    STATE(52), 1,
      aux_sym_scheme_embedded_lilypond_text_repeat1,
  [676] = 3,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym_scheme_string_repeat1,
    ACTIONS(289), 2,
      sym_scheme_string_fragment,
      sym_scheme_escape_sequence,
  [687] = 3,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      aux_sym_scheme_string_repeat1,
    ACTIONS(293), 2,
      sym_scheme_string_fragment,
      sym_scheme_escape_sequence,
  [698] = 4,
    ACTIONS(295), 1,
      anon_sym_POUND_RBRACE,
    ACTIONS(297), 1,
      aux_sym_scheme_embedded_lilypond_text_token1,
    ACTIONS(300), 1,
      aux_sym_scheme_embedded_lilypond_text_token2,
    STATE(52), 1,
      aux_sym_scheme_embedded_lilypond_text_repeat1,
  [711] = 1,
    ACTIONS(188), 4,
      anon_sym_POUND_PIPE,
      aux_sym__scheme_block_comment_token1,
      aux_sym__scheme_block_comment_token2,
      anon_sym_PIPE_POUND,
  [718] = 1,
    ACTIONS(232), 4,
      anon_sym_POUND_PIPE,
      aux_sym__scheme_block_comment_token1,
      aux_sym__scheme_block_comment_token2,
      anon_sym_PIPE_POUND,
  [725] = 1,
    ACTIONS(303), 1,
      anon_sym_POUND_RBRACE,
  [729] = 1,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
  [733] = 1,
    ACTIONS(307), 1,
      sym_scheme_keyword_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 32,
  [SMALL_STATE(20)] = 55,
  [SMALL_STATE(21)] = 78,
  [SMALL_STATE(22)] = 101,
  [SMALL_STATE(23)] = 124,
  [SMALL_STATE(24)] = 147,
  [SMALL_STATE(25)] = 170,
  [SMALL_STATE(26)] = 193,
  [SMALL_STATE(27)] = 216,
  [SMALL_STATE(28)] = 239,
  [SMALL_STATE(29)] = 262,
  [SMALL_STATE(30)] = 285,
  [SMALL_STATE(31)] = 308,
  [SMALL_STATE(32)] = 331,
  [SMALL_STATE(33)] = 354,
  [SMALL_STATE(34)] = 377,
  [SMALL_STATE(35)] = 400,
  [SMALL_STATE(36)] = 423,
  [SMALL_STATE(37)] = 446,
  [SMALL_STATE(38)] = 469,
  [SMALL_STATE(39)] = 492,
  [SMALL_STATE(40)] = 515,
  [SMALL_STATE(41)] = 538,
  [SMALL_STATE(42)] = 561,
  [SMALL_STATE(43)] = 576,
  [SMALL_STATE(44)] = 591,
  [SMALL_STATE(45)] = 606,
  [SMALL_STATE(46)] = 621,
  [SMALL_STATE(47)] = 636,
  [SMALL_STATE(48)] = 652,
  [SMALL_STATE(49)] = 663,
  [SMALL_STATE(50)] = 676,
  [SMALL_STATE(51)] = 687,
  [SMALL_STATE(52)] = 698,
  [SMALL_STATE(53)] = 711,
  [SMALL_STATE(54)] = 718,
  [SMALL_STATE(55)] = 725,
  [SMALL_STATE(56)] = 729,
  [SMALL_STATE(57)] = 733,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2), SHIFT_REPEAT(21),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2), SHIFT_REPEAT(43),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2), SHIFT_REPEAT(2),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scheme_program_repeat1, 2), SHIFT_REPEAT(37),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2), SHIFT_REPEAT(57),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2), SHIFT_REPEAT(51),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scheme_program_repeat1, 2), SHIFT_REPEAT(2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2), SHIFT_REPEAT(5),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2), SHIFT_REPEAT(11),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2), SHIFT_REPEAT(12),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scheme_program_repeat1, 2), SHIFT_REPEAT(13),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2), SHIFT_REPEAT(14),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2), SHIFT_REPEAT(6),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2), SHIFT_REPEAT(7),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2), SHIFT_REPEAT(47),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_program, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_quote_repeat1, 2), SHIFT_REPEAT(21),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_quote_repeat1, 2), SHIFT_REPEAT(43),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scheme_quote_repeat1, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scheme_quote_repeat1, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_string, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_string, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_unquote_splicing, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_unquote_splicing, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_comment, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_comment, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_list, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_list, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_keyword, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_keyword, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_quote, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_quote, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_quasiquote, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_quasiquote, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_quasiquote, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_quasiquote, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scheme_block_comment, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__scheme_block_comment, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_unquote, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_unquote, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_unquote, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_unquote, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_quote, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_quote, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_unquote_splicing, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_unquote_splicing, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_vector, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_vector, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_vector, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_vector, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_byte_vector, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_byte_vector, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_byte_vector, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_byte_vector, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_embedded_lilypond, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_embedded_lilypond, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_number, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_number, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scheme_block_comment, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__scheme_block_comment, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_embedded_lilypond, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_embedded_lilypond, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_string, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_string, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_list, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_list, 3),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__scheme_block_comment_repeat1, 2), SHIFT_REPEAT(45),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__scheme_block_comment_repeat1, 2), SHIFT_REPEAT(42),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__scheme_block_comment_repeat1, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scheme_string_repeat1, 2),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_string_repeat1, 2), SHIFT_REPEAT(48),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_embedded_lilypond_text, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scheme_embedded_lilypond_text_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_embedded_lilypond_text_repeat1, 2), SHIFT_REPEAT(52),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scheme_embedded_lilypond_text_repeat1, 2), SHIFT_REPEAT(52),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [305] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lilypond_scheme(void) {
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
