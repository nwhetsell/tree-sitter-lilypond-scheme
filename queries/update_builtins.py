from pygments.regexopt import regex_opt
import pygments.lexers._lilypond_builtins as _lilypond_builtins
import pygments.lexers._scheme_builtins as _scheme_builtins
import re
from textwrap import dedent

with open('highlights-builtins.scm', 'w') as file:
    regex = re.sub(r'\\(.)', r'\\\\\1', regex_opt(_scheme_builtins.scheme_keywords, '^', '$').replace("\\-", "-"))
    file.write(dedent(f'''\
    (
      (scheme_symbol) @keyword
      (#match? @keyword "{regex}")
    )
    '''))

    # Remove operator-like functions.
    for item in ['*', '+', '-', '/', '<', '<=', '=', '>', '>=']:
        _scheme_builtins.scheme_builtins.remove(item)
    regex = re.sub(r'\\(.)', r'\\\\\1', regex_opt(_scheme_builtins.scheme_builtins, '^', '$').replace("\\-", "-"))
    file.write(dedent(f'''\
    (
      (scheme_symbol) @identifier.core.function
      (#match? @identifier.core.function "{regex}")
    )
    '''))

with open('highlights-lilypond-builtins.scm', 'w') as file:
    regex = re.sub(r'\\(.)', r'\\\\\1', regex_opt(_lilypond_builtins.scheme_functions, '^', '$').replace("\\-", "-"))
    file.write(dedent(f'''\
    (
      (scheme_symbol) @identifier.core.function
      (#match? @identifier.core.function "{regex}")
    )
    '''))
