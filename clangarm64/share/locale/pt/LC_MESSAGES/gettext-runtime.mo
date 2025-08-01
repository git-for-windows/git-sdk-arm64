��    H      \  a   �         8   !  B   Z  A   �  7   �  6     H   N  I   �  F   �  9   (  7   b  6   �  M   �  7   	  L   W	  C   �	  *   �	  A   
  O   U
  H   �
  {   �
     j  "   �  �  �     �  �   �  e   }  :   �  �        �  y   �    9  �  S  �  2  M   �  T     N   h     �  �   �     �     �  �   �  `   H  <   �  1   �  [     &   t  9   �    �  �   �  -   t  4   �  u   �  t   M  r   �      5  &   V     }  <   �  (   �  "   �  9     I   O  �   �     7      G      `      r      �      �   4   �      �   �  �   <   �"  C   #  A   V#  =   �#  ;   �#  D   $  D   W$  N   �$  9   �$  7   %%  5   ]%  D   �%  :   �%  P   &  H   d&  .   �&  F   �&  L   #'  D   p'  w   �'     -(  '   M(  /  u(     �,  �   �,  i   �-  =   �-  �   0.     �.  �   �.  1  m/    �0  �  �2  D   r4  Z   �4  O   5     b5  �   w5     G6     \6  �   t6  `   �6  �   ]7  1   �7  _    8  +   �8  ;   �8  4  �8  �   :  *   �:  5   �:  �   
;  w   �;  l   <  $   p<  *   �<     �<  =   �<  )   =  "   7=  8   Z=  E   �=  �   �=     s>     �>     �>     �>     �>     �>  9   �>     $?        
   4      	       D             #   )   0      E   9   @   *         B              8              5         +       G      7   C   F          (           >   3                          ?   =   &                 ;   '      :       H       1   6      <   !   A                  -       %       $                   2      .   ,             "      /         -E                        (ignored for compatibility)
   -V, --version               output version information and exit
   -V, --version             display version information and exit
   -c, --context=CONTEXT     specify context for FORMAT
   -c, --context=CONTEXT     specify context for MSGID
   -d, --domain=TEXTDOMAIN   retrieve translated message from TEXTDOMAIN
   -d, --domain=TEXTDOMAIN   retrieve translated messages from TEXTDOMAIN
   -e                        enable expansion of some escape sequences
   -h, --help                  display this help and exit
   -h, --help                display this help and exit
   -n                        suppress trailing newline
   -v, --variables             output the variables occurring in SHELL-FORMAT
   ARGUMENT                  string or numeric argument
   COUNT                     choose singular/plural form based on this value
   FORMAT                    English singular form of format string
   FORMAT                    format string
   FORMAT-PLURAL             English plural form of format string
   MSGID MSGID-PLURAL        translate MSGID (singular) / MSGID-PLURAL (plural)
   [TEXTDOMAIN]              retrieve translated message from TEXTDOMAIN
   [TEXTDOMAIN] MSGID        retrieve translated message corresponding
                            to MSGID from TEXTDOMAIN
 %s: expected a numeric value %s: value not completely converted A directive that consumes an argument
  - starts with '%s' or '%s' where %s is a positive integer,
  - is optionally followed by any of the characters '%c', '%c', '%c', '%c', '%c',
    each of which acts as a flag,
  - is optionally followed by a width specification (a nonnegative integer),
  - is optionally followed by '%c' and a precision specification (an optional
    nonnegative integer),
  - is finished by a specifier
      - '%c', that prints a character,
      - '%c', that prints a string,
      - '%c', '%c', that print an integer,
      - '%c', '%c', '%c', '%c', that print an unsigned (nonnegative) integer,
      - '%c', '%c', that print a floating-point number in scientific notation,
      - '%c', '%c', that print a floating-point number without an exponent,
      - '%c', '%c', that print a floating-point number in general notation,
      - '%c', '%c', that print a floating-point number in hexadecimal notation.
Additionally there is the directive '%s', that prints a single '%c'.
 Bruno Haible Copyright (C) %s Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <%s>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
 Display native language translation of a textual message whose grammatical
form depends on a number.
 Display native language translation of a textual message.
 Each format string consists of
  - plain text,
  - directives, that start with '%c',
  - escape sequences, that start with a backslash.
 Environment variables:
 If a directive specifies the argument by its number ('%s' notation),
all directives that consume an argument must do so.
 If the TEXTDOMAIN parameter is not given, the domain is determined from the
environment variable TEXTDOMAIN.  If the message catalog is not found in the
regular directory, another location can be specified with the environment
variable TEXTDOMAINDIR.
Standard search directory: %s
 If the TEXTDOMAIN parameter is not given, the domain is determined from the
environment variable TEXTDOMAIN.  If the message catalog is not found in the
regular directory, another location can be specified with the environment
variable TEXTDOMAINDIR.
When used with the -s option the program behaves like the 'echo' command.
But it does not simply copy its arguments to stdout.  Instead those messages
found in the selected catalog are translated.
Standard search directory: %s
 In normal operation mode, standard input is copied to standard output,
with references to environment variables of the form $VARIABLE or ${VARIABLE}
being replaced with the corresponding values.  If a SHELL-FORMAT is given,
only those environment variables that are referenced in SHELL-FORMAT are
substituted; otherwise all environment variables references occurring in
standard input are substituted.
 In the directive number %zu, the argument number 0 is not a positive integer. In the directive number %zu, the character '%c' is not a valid conversion specifier. In the directive number %zu, the flag '%c' is invalid for the conversion '%c'. Informative output:
 It is looked up in the catalogs directory given by the environment variable
%s or, if not present, in the default catalogs directory.
This binary is configured to use the default catalogs directory:
%s
 Operation mode:
 Options and arguments:
 Produces formatted output, applying the native language translation of FORMAT
and FORMAT-PLURAL, depending on COUNT, to the ARGUMENTs.
 Produces formatted output, applying the native language translation of FORMAT
to the ARGUMENTs.
 Report bugs in the bug tracker at <%s>
or by email to <%s>.
 Substitutes the values of environment variables.
 The character that terminates the directive number %zu is not a valid conversion specifier. The escape sequence '%c%c' is invalid. The escape sequence '%c%c' is unsupported (not in POSIX). The escape sequences are:

  %s      backslash
  %s      alert (BEL)
  %s      backspace (BS)
  %s      form feed (FF)
  %s      new line (LF)
  %s      carriage return (CR)
  %s      horizontal tab (HT)
  %s      vertical tab (VT)
  %s    octal number with 1 to 3 octal digits
 The format string consists of
  - plain text,
  - directives, that start with '%c',
  - escape sequences, that start with a backslash.
 The string ends in the middle of a directive. The string ends in the middle of an escape sequence. The string refers to arguments both through absolute argument numbers and through unnumbered argument specifications. The translated format string consumes %zu arguments, whereas the original format string consumes only %zu arguments. The translation of the format string is looked up in the translation domain
given by the environment variable %s.
 This escape sequence is invalid. Try '%s --help' for more information.
 Ulrich Drepper Usage: %s [OPTION] FORMAT FORMAT-PLURAL COUNT [ARGUMENT]...
 Usage: %s [OPTION] FORMAT [ARGUMENT]...
 Usage: %s [OPTION] [SHELL-FORMAT]
 Usage: %s [OPTION] [TEXTDOMAIN] MSGID MSGID-PLURAL COUNT
 Usage: %s [OPTION] [[TEXTDOMAIN] MSGID]
or:    %s [OPTION] -s [MSGID]...
 When --variables is used, standard input is ignored, and the output consists
of the environment variables that are referenced in SHELL-FORMAT, one per line.
 Written by %s.
 error while reading "%s" missing arguments missing format string standard input too many arguments warning: ignoring excess arguments, starting with %s write error Project-Id-Version: gettext-runtime 0.26-pre1
Report-Msgid-Bugs-To: bug-gettext@gnu.org
PO-Revision-Date: 2025-07-05 06:31+0100
Last-Translator: Pedro Albuquerque <pmra@protonmail.com>
Language-Team: Portuguese <translation-team-pt@lists.sourceforge.net>
Language: pt
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=2; plural=(n != 1);
X-Bugs: Report translation errors to the Language-Team address.
X-Generator: Poedit 3.6
   -E                        (ignorado para compatibilidade)
   -V, --version               mostra informação da versão e sai
   -V, --version             mostra informação da versão e sai
   -c, --context=CONTEXTO    especifica o contexto de FORMATO
   -c, --context=CONTEXTO    especifica contexto para MSGID
   -d, --domain=DOMTEXTO     obtém a mensagem traduzida de DOMTEXTO
   -d, --domain=DOMTEXTO..   obtém mensagens traduzidas de DOMTEXTO
   -e                        activa expansão de algumas sequências de escape
   -h, --help                  mostra esta mensagem e sai
   -h, --help                mostra esta mensagem e sai
   -n                        suprime nova linha final
   -v, --variables             mostra as variáveis em FORMATO-SHELL
   ARGUMENTO                 cadeia ou argumento numérico
   TOTAL                     escolhe a forma singular/plural baseado neste valor
   FORMATO                   Forma singular inglesa da cadeia de formato
   FORMATO                   cadeia de formato
   FORMATO-PLURAL            Forma plural inglesa da cadeia de formato
   MSGID MSGID-PLURAL        traduz MSGID (singular) / MSGID-PLURAL (plural)
   [DOMTEXTO]                obtém a mensagem traduzida de DOMTEXTO
   [DOMTEXTO] MSGID          obtém a mensagem traduzida correspondente
                            a MSGID de DOMTEXTO
 %s: esperado um valor numérico %s: valor não completamente convertido Uma directiva que consome um argumento
  - começa com "%s" ou "%s" onde %s é um inteiro positivo,
  - é optionalmente seguida por um dos caracteres "%c", "%c", "%c", "%c", "%c",
    cada um actuando como bandeira,
  - é optionalmente seguido por uma especificação de largura (um inteiro não negativo),
  - é optionalmente seguido de "%c" e uma especificação de precisão (um inteiro
    não negativo opcional),
  - termina por um especificador
      - "%c", que imprime um carácter,
      - '%c', que imprime uma cadeia,
      - '%c', '%c', que imprime um inteiro,
      - '%c', '%c', '%c', '%c', que imprime um inteiro sem sinal ((não negativo),
      - '%c', '%c', que imprime um número de vírgula flutuante em notação cietífica,
      - '%c', '%c', que imprime um número de vírgula flutuante sem expoente,
      - '%c', '%c', que imprime um número de vírgula flutuante em notação geral,
      - '%c', '%c', que imprime um número de vírgula flutuante em notação hexadecinal.
Adicionalmente, há a directiva "%s", que imprime um único "%c".
 Bruno Haible Copyright (C) %s Free Software Foundation, Inc.
Licença GPLv3+: GNU GPL versão 3 ou posterior <%s>
Este software é grátis: pode alterá-lo e redistribuí-lo.
Não há QUALQUER GARANTIA, até ao limite da Lei.
 Mostrar tradução de idioma nativo de uma mensagem textual cuja forma
gramatical depende de um número.
 Mostrar tradução de idioma nativo de uma mensagem textual.
 Cada cadeia de formato consiste em
  - texto simples,
  - directivas, que começam com "%c",
  - sequências de escape, que começam com "\".
 Variáveis de ambiente:
 Se uma directiva especifica o argumento pelo seu número (notação "%s"),
todas as directivas que consomem um argumento terão também de o fazer.
 Se o parâmetro DIALECTO não for fornecido, o domínio é determinado a partir
da variável de ambiente TEXTDOMAIN. Se o catálogo de mensagens não for
encontrado na pasta habitual, pode ser especificada outra localização através
da variável de ambiente TEXTDOMAINDIR.
Pasta padrão de pesquisa: %s
 Se o parâmetro DIALECTO não for fornecido, o domínio é determinado a
partir da variável de ambiente TEXTDOMAIN. Se o catálogo de mensagens
não for encontrado na pasta habitual, pode ser especificada outra
localização através da variável de ambiente TEXTDOMAINDIR.
Quando usado com a opção -s, o programa comporta-se como o comando "echo".
Mas ele não copia simplesmente os seus argumentos para a saída padrão.
Ao invés, as mensagens encontradas no catálogo seleccionado são traduzidas.
Pasta padrão de pesquisa: %s
 Em modo de operação normal, a entrada padrão é copiada para a saída padrão,
com referências a variáveis de ambiente da forma $VARIÁVEL ou ${VARIÁVEL}
sendo substituídas com os valores correspondentes. Se um FORMATO-SHELL for
dado, apenas essas variáveis de ambiente referenciadas em FORMATO-SHELL são
substituídas; caso contrário, todas as variáveis de ambiente referenciadas
ocorrentes na entrada padrão são substituídas.
 Na directiva número %zu, o argumento 0 não é um inteiro positivo. Na directiva número %zu, o carácter "%c" não é um especificador de conversão válido. Na directiva nṹmero %zu, a bandeira "%c" é inválida para a conversão "%c". Saída informativa:
 É procurada na pasta de catálogos dada pela variável de ambiente
%s ou, se ausente, na pasta de catálogos pré-definida.
Este binário está configurado para usar a pasta de catálogos pré-definida:
%s
 Modo de operação:
 Opções e argumentos:
 Produz saída formatada, apllicando a tradução em idioma nativo de FORMATO
e FORMATO-PLURAL, dependendo de CONT, para os ARGUMENTOs.
 Produz saída formatada, aplicando a tradução do idioma nativo de FORMATO
para os ARGUMENTOs.
 Reporte erros no sistema de rastreio em <%s>
ou por email para <%s>.
Reporte erros de tradução em <translation-team-pt@lists.sourceforge.net>
 Substitui os valores das variáveis de ambiente.
 O carácter que termina a directiva número %zu não é um especificador de conversão válido. A sequência de escape "%c%c" é inválida. A sequência de escape "%c%c" não é suportada (em POSIX). As sequências de escape são:

  %s      barra esquerda
  %s      alerta (BEL)
  %s      recuo (BS)
  %s      form feed (FF)
  %s      nova linha (LF)
  %s      retorno do carro (CR)
  %s      tabulação horizontal (HT)
  %s      tabulação vertical (VT)
  %s    número octal com 1 a 3 algarismos octais
 A cadeia de formato consiste em
  - texto simples,
  - directivas, que começam com "%c",
  - sequências de escape, que começam com "\".
 A cadeia termina no meio de uma directiva. A cadeia termina no meio de uma sequência de escape. A cadeia refere-se a argumentos tanto por números de argumento absolutos como por especificações de argumento não numeradas. A cadeia de formato traduzida consome %zu argumentos, enquanto a cadeia de formato original consome só %zu argumentos. A tradução da cadeia de formato é procurada no domínio da tradução
dado pela variável e ambiente %s.
 A sequência de escape é inválida. Tente "%s --help" para mais informação.
 Ulrich Drepper Uso: %s [OPÇÃO] FORMATO FORMATO-PLURAL CONT [ARGUMENTO]...
 Uso: %s [OPÇÃO] FORMATO [ARGUMENTO]...
 Uso: %s [OPÇÃO] [FORMATO-SHELL]
 Uso: %s [OPÇÃO] [DIALECTO] MSGID MSGID-PLURAL NÚMERO
 Uso: %s [OPÇÃO] [[DIALECTO] MSGID]
ou:  %s [OPÇÃO] -s [MSGID]...
 Quando --variables é usado, a entrada padrão é ignorada e a saída consiste
nas variáveis de ambiente referenciadas em FORMATO-SHELL, uma por linha.
 Escrito por %s.
 erro ao ler "%s" argumentos em falta cadeia de formato em falta entrada padrão demasiados argumentos aviso: a ignorar argumentos excessivos, a começar por %s erro de escrita 