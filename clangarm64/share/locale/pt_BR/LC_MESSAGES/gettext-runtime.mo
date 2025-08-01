��    H      \  a   �         8   !  B   Z  A   �  7   �  6     H   N  I   �  F   �  9   (  7   b  6   �  M   �  7   	  L   W	  C   �	  *   �	  A   
  O   U
  H   �
  {   �
     j  "   �  �  �     �  �   �  e   }  :   �  �        �  y   �    9  �  S  �  2  M   �  T     N   h     �  �   �     �     �  �   �  `   H  <   �  1   �  [     &   t  9   �    �  �   �  -   t  4   �  u   �  t   M  r   �      5  &   V     }  <   �  (   �  "   �  9     I   O  �   �     7      G      `      r      �      �   4   �      �   �  �   G   �"  D   ,#  B   q#  =   �#  ;   �#  H   .$  J   w$  P   �$  5   %  3   I%  8   }%  M   �%  :   &  P   ?&  K   �&  .   �&  M   '  M   Y'  H   �'  {   �'  "   l(  (   �(    �(     �,  �   �,  g   �-  ;   <.  �   x.     /  �   )/  /  �/  �  �0  �  �2  Q   �4  \   �4  U   K5     �5  �   �5     �6     �6  �   �6  `   X7  �   �7  1   G8  a   y8  +   �8  @   9  6  H9  �   :  )   ;  A   >;  �   �;  {   <  r   <  '   �<  +   =     F=  A   U=  )   �=  "   �=  =   �=  J   ">  �   m>     ?     ?     /?     C?     ^?     n?  9   �?     �?        
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
PO-Revision-Date: 2025-07-07 23:42-0300
Last-Translator: Rafael Fontenelle <rafaelff@gnome.org>
Language-Team: Brazilian Portuguese <ldpbr-translation@lists.sourceforge.net>
Language: pt_BR
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=2; plural=(n > 1);
X-Generator: Gtranslator 48.0
X-Bugs: Report translation errors to the Language-Team address.
   -E                        (ignorado por questão de compatibilidade)
   -V, --version               exibe a informação da versão e sai
   -V, --version             exibe a informação da versão e sai
   -c, --context=CONTEXTO    especifica contexto para formato
   -c, --context=CONTEXTO    especifica contexto para MSGID
   -d, --domain=DOMÍNIOTEXTO obtém mensagem traduzida de DOMÍNIOTEXTO
   -d, --domain=DOMÍNIOTEXTO obtém mensagens traduzidas de DOMÍNIOTEXTO
   -e                        habilita expansão de algumas sequências de escape
   -h, --help                  exibe essa ajuda e sai
   -h, --help                exibe essa ajuda e sai
   -n                        suprime nova linha ao final
   -v, --variables             exibe as variáveis ocorrentes em SHELL-FORMAT
   ARGUMENTO                 string ou argumento numérico
   NÚMERO                    escolhe forma singular/plural com base nesse valor
   FORMATO                   Forma singular em inglês da string de formato
   FORMATO                   string de formato
   FORMATO-PLURAL             Forma de plural em inglês da string de formato
   MSGID MSGID-PLURAL        traduzi MSGID (singular) / MSGID-PLURAL (plural)
   [DOMÍNIOTEXTO]            obtém mensagem traduzida de DOMÍNIOTEXTO
   [DOMÍNIOTEXTO] MSGID      obtém mensagem traduzida correspondendo a
                            MSGID de DOMÍNIOTEXTO
 %s: esperava-se um valor numérico %s: valor não foi convertido totalmente Uma diretiva que consome um argumento
- começa com "%s" ou "%s" onde %s é um inteiro positivo,
- é opcionalmente seguido por qualquer um dos caracteres "%c", "%c", "%c", "%c", "%c",
  cada um dos quais se comporta como um sinalizador,
- é opcionalmente seguido por uma especificação de largura (um inteiro não negativo),
- é opcionalmente seguido por "%c" e uma especificação de precisão (um inteiro não negativo opcional),
- é finalizado por um especificador
  - "%c", que imprime um caractere,
  - "%c", que imprime uma string,
  - "%c", "%c", que imprime um inteiro,
  - "%c", "%c", "%c", "%c", que imprime um inteiro sem sinal (não negativo),
  - "%c", "%c", que imprime um número de ponto flutuante em notação científica,
  - "%c", "%c", que imprime um número de ponto flutuante número sem expoente,
  - "%c", "%c", que imprime um número de ponto flutuante em notação geral,
  - "%c", "%c", que imprime um número de ponto flutuante em notação hexadecimal.
Além disso, há a diretiva "%s", que imprime um único "%c".
 Bruno Haible Copyright (C) %s Free Software Foundation, Inc.
Licença GPLv3+: GNU GPL versão 3 ou posterior <%s>
Este é um software livre: você é livre para alterá-lo e redistribui-lo.
NÃO HÁ QUALQUER GARANTIA, na máxima extensão permitida em lei.
 Exibe tradução de idioma nativo de uma mensagem textual cuja forma
gramatical depende de um número.
 Exibe tradução do idioma nativo de uma mensagem textual.
 Cada string de formato consiste em
- texto simples,
- diretivas, que começam com "%c",
- sequências de escape, que começam com uma barra invertida.
 Variáveis de ambiente:
 Se uma diretiva especifica os argumentos pelo seu número (notação "%s"),
todas as diretivas que consomem um argumento também devem.
 Se o parâmetro DOMÍNIOTEXTO não for informado, o domínio é determinado por
meio da variável de ambiente TEXTDOMAIN. Se o catálogo de mensagens não
for encontrado no diretório padrão, outro locale pode ser especificado
na variável de ambiente TEXTDOMAINDIR.
Diretório de pesquisa padrão: %s
 Se o parâmetro DOMÍNIOTEXTO não for informado, o domínio é determinado por
meio da variável de ambiente TEXTDOMAIN. Se o catálogo de mensagens não
for encontrado no diretório padrão, outro locale pode ser especificado
na variável de ambiente TEXTDOMAINDIR.
Quando USADO com a opção -s o programa comporta-se como o comando "echo".
Mas não somente copiando seus parâmetros para stdout, e sim traduzindo as
mensagens encontradas no catálogo selecionado
Diretório de pesquisa padrão: %s
 Em modo de operação normal, a entrada padrão é copiada para a saída padrão,
com referências a variáveis de ambiente da forma de $VARIABLE ou ${VARIABLE}
sendo substituída com os valores correspondentes. Se um FORMATO-SHELL é dado,
apenas aquelas variáveis de ambiente que forem referenciadas no FORMATO-SHELL
são substituídas. Do contrário, todas as referências variáveis de ambiente
ocorrentes na entrada padrão são substituídas.
 Na diretiva de número %zu, o argumento de número 0 não é um inteiro positivo. Na diretiva de número %zu, o caractere "%c" não é um especificador de conversão válido. Na diretiva de número %zu, a sinalização "%c" é inválida para a conversão "%c". Saída informativa:
 É pesquisado no diretório de catálogos fornecido pela variável de ambiente %s
ou, se não estiver presente, no diretório de catálogos padrão.
Este binário está configurado para usar o diretório de catálogos padrão:
%s.
 Modo de operação:
 Opções e argumentos:
 Produz um saída formatada,a plicando a tradução do idioma nativo de FORMATO
e FORMAT-PLURAL, dependendo de CONTAGEM, para os ARGUMENTOs.
 Produz saída formatada, aplicando a tradução do idioma nativo de FORMATO
para os ARGUMENTOs.
 Relate erros no rastreador em <%s>
ou por e-mail para <%s>.
Relate erros de tradução para <https://translationproject.org/team/pt_BR.html>
 Substitui os valores das variáveis de ambiente.
 O caractere que termina a diretiva de número %zu não é um especificador de conversão válido. A sequência de escape "%c%c" é inválida. A sequência de escape "%c%c" não é suportada (não no POSIX). As sequências de escape são:

  %s      barra invertida
  %s      alerta (BEL)
  %s      backspace (BS)
  %s      form feed (FF)
  %s      nova linha (LF)
  %s      retorno de carro (CR)
  %s      tabulação horizontal (HT)
  %s      tabulação vertical (VT)
  %s    número octal com 1 a 3 dígitos octal
 A string de formato consiste em
- texto simples,
- diretivas, que começam com "%c",
- sequências de escape, que começam com uma barra invertida.
 A string termina no meio de uma diretiva. A string termina no meio da diretiva de uma sequência de escape. A string faz referência a argumentos por meio de números de argumento absolutos e por especificações de argumento sem número. A string de formato traduzida consome %zu argumentos, sendo que a string de formato original consome apenas %zu argumentos. A tradução da string de formato é procurada no domínio de tradução fornecido
pela variável de ambiente %s.
 Esta sequência de escape é inválida. Tente "%s --help" para mais informações.
 Ulrich Drepper Uso: %s [OPÇÃO] FORMATO FORMATO-PLURAL CONTAGEM [ARGUMENTO]...
 Uso: %s [OPÇÃO] FORMATO [ARGUMENTO]...
 Uso: %s [OPÇÃO] [FORMATO SHELL]
 Uso: %s [OPÇÃO] [DOMÍNIOTEXTO] MSGID MSGID-PLURAL NÚMERO
 Uso: %s [OPÇÃO] [[DOMÍNIOTEXTO] MSGID]
ou:  %s [OPÇÃO] -s [MSGID]...
 Quando --variables é usado, a entrada padrão é ignorada e a saída conste nas
variáveis de ambiente que são referenciadas em FORMATO-SHELL, um por linha.
 Escrito por %s.
 erro ao ler "%s" faltando argumentos faltando string de formato entrada padrão número excessivo de argumentos aviso: ignorando argumentos excessivos, começando com %s erro de escrita 