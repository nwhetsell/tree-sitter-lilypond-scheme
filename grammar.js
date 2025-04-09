const rules = require('./rules.js');

module.exports = grammar({
  name: 'lilypond_scheme',

  rules: Object.assign(
    {
      scheme_program: $ => repeat(
        $._scheme_token
      )
    },

    rules,

    {

      scheme_embedded_lilypond_fragment: $ => choice(
        /[^#\s]+/,
        /#[^}]/
      ),

      scheme_embedded_lilypond: $ => seq(
        '#{',
        optional($.scheme_embedded_lilypond_text),
        '#}'
      ),

      scheme_embedded_lilypond_text: $ => repeat1(choice(
        $.scheme_embedded_lilypond_fragment,
        $.scheme_embedded_lilypond
      ))
    }
  )
});
