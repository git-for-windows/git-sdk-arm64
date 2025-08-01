��    H      \  a   �         8   !  B   Z  A   �  7   �  6     H   N  I   �  F   �  9   (  7   b  6   �  M   �  7   	  L   W	  C   �	  *   �	  A   
  O   U
  H   �
  {   �
     j  "   �  �  �     �  �   �  e   }  :   �  �        �  y   �    9  �  S  �  2  M   �  T     N   h     �  �   �     �     �  �   �  `   H  <   �  1   �  [     &   t  9   �    �  �   �  -   t  4   �  u   �  t   M  r   �      5  &   V     }  <   �  (   �  "   �  9     I   O  �   �     7      G      `      r      �      �   4   �      �   �  �   =   �"  =   �"  ;   #  @   Y#  >   �#  I   �#  L   #$  S   p$  E   �$  C   
%  7   N%  �   �%  <   &  q   X&  N   �&  .   '  L   H'  M   �'  J   �'  }   .(  "   �(  %   �(  F  �(     <-  �   I-  l   5.  >   �.  �   �.     �/  �   �/  "  :0  $  ]1  �  �3  P   t5  ]   �5  X   #6     |6  �   �6     ~7     �7  �   �7  f   ?8  ]   �8  3   9  a   89  ,   �9  >   �9  e  :  �   l;  +   <  5   ?<  �   u<  ~   =  q   �=  '   �=  +   >     H>  K   W>  4   �>  C   �>  F   ?  _   c?  �   �?     {@     �@     �@     �@     �@     �@  ?   �@     =A        
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
 error while reading "%s" missing arguments missing format string standard input too many arguments warning: ignoring excess arguments, starting with %s write error Project-Id-Version: GNU gettext-runtime 0.26-pre1
Report-Msgid-Bugs-To: bug-gettext@gnu.org
PO-Revision-Date: 2025-07-04 18:51+0200
Last-Translator: Antonio Ceballos <aceballos@gmail.com>
Language-Team: Spanish <es@tp.org.es>
Language: es
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8-bit
X-Bugs: Report translation errors to the Language-Team address.
Plural-Forms: nplurals=2; plural=(n != 1);
   -E                        (desestimado por compatibilidad)
   -V, --version               muestra la versión y finaliza
   -V, --version             muestra la versión y finaliza
   -c, --context=CONTEXTO    especifica el contexto para FORMATO
   -c, --context=CONTEXTO    especifica el contexto para MSGID
   -d, --domain=DOMINIOTEXTO obtiene el mensaje traducido de DOMINIOTEXTO
   -d, --domain=DOMINIOTEXTO obtiene los mensajes traducidos de DOMINIOTEXTO
   -e                        habilita la expansión de algunas secuencias de escape
   -h, --help                  muestra este texto de ayuda y finaliza
   -h, --help                muestra este texto de ayuda y finaliza
   -n                        suprime nueva línea final
  -v, --variables                    muestra las variables que aparecen en el
                                    FORMATO-DE-INTÉRPRETE-DE-COMANDOS
   ARGUMENTO                 argumento de cadena o numérico
   CUENTA                    elige la forma singular/plural en función de este
                            valor
   FORMATO                   forma singular en inglés de la cadena de formato
   FORMATO                   cadena de formato
   FORMATO-PLURAL            forma plural en inglés de la cadena de formato
   MSGID MSGID-PLURAL        traduce MSGID (singular) / MSGID-PLURAL (plural)
   [DOMINIOTEXTO]             obtiene el mensaje traducido de DOMINIOTEXTO
   [DOMINIOTEXTO] MSGID      obtiene el mensaje traducido correspondiente
                            a MSGID de DOMINIOTEXTO
 %s: se esperaba un valor numérico %s: valor no completamente convertido Una directiva que consume un argumento
  - comienza con '%s' o '%s', donde %s es un entero positivo,
  - va seguida opcionalmente de cualquiera de los caracteres '%c', '%c', '%c',
    '%c', '%c', cada uno de los cuales actúa como modificador,
  - va opcionalmente seguida de un especificador de anchura (entero,
    no negativo),
  - va opcionalmente seguida de '%c' y una especificación de precisión (entero
    no negativo opcional),
  - finaliza con un especificador
      - '%c', que imprime un carácter,
      - '%c', que imprime una cadena,
      - '%c', '%c', que imprime un entero,
      - '%c', '%c', '%c', '%c', que imprime un entero sin signo (no negativo),
      - '%c', '%c', que imprime un número en coma flotante en notación
         científica,
      - '%c', '%c', que imprime un número en coma flotante sin exponente,
      - '%c', '%c', que imprime un número en coma flotante en notación general,
      - '%c', '%c', que imprime un número en coma flotante en notación.
         hexadecimal.
También está disponible la directiva '%s', que imprime un único '%c'.
 Bruno Haible Copyright (C) %s Free Software Foundation, Inc.
Licencia GPLv3+: GNU GPL versión 3 o posterior <%s>
Esto es software libre: puede modificarlo y redistribuirlo libremente.
SIN NINGÚN TIPO DE GARANTÍA, dentro de los límites legales.
 Muestra la traducción del idioma nativo de un mensaje textual cuya forma
gramatical depende de un número.
 Mostrar la traducción a idioma nativo de un mensaje textual.
 Cada cadena de formato consta de
  - texto plano,
  - directivas, que comienan con '%c',
  - secuencias de escape, que comienzan con una barra inclinada hacia atrás.
 Variables de entorno:
 Si una directiva especifica el argumento mediante su número (notación '%s'),
todas las directivas que consuman un argumento tienen que hacer lo mismo.
 Si no se escribe el parámetro DOMINIOTEXTO, el dominio se determina por
la variable de entorno TEXTDOMAIN. Si el catálogo de mensajes no está en
el directorio predeterminado, con la variable de entorno TEXTDOMAINDIR se
puede especificar otro lugar.
Directorio de búsqueda estándar: %s
 Si no se escribe el parámetro DOMINIOTEXTO, el dominio se determina por
la variable de entorno TEXTDOMAIN. Si el catálogo de mensajes no está en
el directorio predeterminado, con la variable de entorno TEXTDOMAINDIR se
puede especificar otro lugar.
Cuando se utiliza con la opción -s, el programa se comporta como la
instrucción 'echo', pero no se reduce a hacer simplemente una copia en
la salida estándar (stdout), sino que además traduce los mensajes que
encuentre dentro del catálogo seleccionado.
Directorio de búsqueda estándar: %s
 En modo de operación normal, se copia la entrada estándar a la salida
estándar con las referencias a las variables de entorno de la forma
$VARIABLE o ${VARIABLE} sustituidas por sus valores
correspondientes. Si se da un FORMATO-DEL-INTÉRPRETE-DE-COMANDOS, sólo
aquellas variables de entorno que estén referenciadas en el
FORMATO-DEL-INTÉRPRETE-DE-COMANDOS son sustituidas; de otra forma,
todas las referencias a las variables de entorno existentes en la
entrada estándar, son sustituidas.
 En la directiva número %zu, el número de argumento 0 no es un entero positivo. En la directiva número %zu, el carácter '%c' no es un especificador válido de conversión. En la directiva número %zu, el modificador '%c' no es válido para la conversión '%c'. Salida informativa:
 Se busca eb el directorio de catálogos dado por la variable de entorno %s o,
si no está presente, en el directorio de catálogos predeterminado.
Este binario está configurado para utilizar el directorio de catálogos
predefinido: %s
 Modo de operación:
 Opciones y argumentos:
 Produce salida con formato, aplicando la traducción en el idioma nativo de
FORMATO y FORMATO-PLURAL, dependiendo del NÚMERO, a los ARGUMENTO(s).
 Produce salida con formato, aplicando la traducción en la lengua nativa de
FORMATO a los ARGUMENTOs.
 Puede informar de fallos en el sistema de seguimiento de errores en <%s>
o por email a <%s>.
 Sustituye los valores de las variables de entorno.
 El carácter que finaliza la directiva número %zu no es un especificador válido de conversión. La secuencia de escape '%c%c' no es válida. La secuencia de escape '%c%c' no está admitida (no en POSIX). Las secuencias de escape son:

  %s      barra inclinada hacia atrás
  %s      alerta (BEL)
  %s      borra espacioa hacia atrás (BS)
  %s      página hacia delante (FF)
  %s      nueva línea (LF)
  %s      retorno de carro (CR)
  %s      tabulador horizontal (HT)
  %s      tabulador vertical (VT)
  %s    número octal de entre 1 y 3 dígitos octales
 La cadena de formato consta de
  - texto plano,
  - directivas, que comienzan con '%c',
  - secuencias de escape, que comienzan con una barra inclinada hacia atrás.
 La cadena termina a mitad de una directiva. La cadena termina a mitad de una secuencia de escape. La cadena hace referencia a argumentos a través tanto de números de argumento absolutos como de especificaciones de argumento no numeradas. La cadena de formato traducida consume %zu argumentos, mientras que la cadena de formato original consume solo %zu argumentos. La traducción de la cadena de formato se busca en el dominio de traducción
dado por la variable de entorno %s.
 Esta secuencia de escape no es válida. Pruebe '%s --help' para más información.
 Ulrich Drepper Modo de empleo: %s [OPCIÓN] FORMATO FORMATO-PLURAL NÚMERO [ARGUMENTO]...
 Modo de empleo: %s [OPCIÓN] FORMATO [ARGUMENTO]...
 Modo de empleo: %s [OPCIÓN] [FORMATO-DEL-INTÉRPRETE-DE-COMANDOS]
 Modo de empleo: %s [OPCIÓN] [DOMINIODETEXTO] MSGID MSG-PLURAL CUENTA
 Modo de empleo: %s [OPCIÓN] [[DOMINIOTEXTO] MSGID]
             o: %s [OPCIÓN] -s [MSGID]...
 Cuando se utiliza --variables, se ignora la entrada estándar, y la salida
contiene las variables de entorno que referidas en el FORMATO-DEL-
INTÉRPRETE-DE-COMANDOS, una por línea.
 Escrito por %s.
 error mientras se lee "%s" faltan argumentos faltan la cadena de formato entrada estándar demasiados argumentos aviso: se descartan los argumentos que sobran, empezando por %s error de escritura 