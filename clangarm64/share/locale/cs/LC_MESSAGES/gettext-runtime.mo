��    H      \  a   �         8   !  B   Z  A   �  7   �  6     H   N  I   �  F   �  9   (  7   b  6   �  M   �  7   	  L   W	  C   �	  *   �	  A   
  O   U
  H   �
  {   �
     j  "   �  �  �     �  �   �  e   }  :   �  �        �  y   �    9  �  S  �  2  M   �  T     N   h     �  �   �     �     �  �   �  `   H  <   �  1   �  [     &   t  9   �    �  �   �  -   t  4   �  u   �  t   M  r   �      5  &   V     }  <   �  (   �  "   �  9     I   O  �   �     7      G      `      r      �      �   4   �      �   �  �   B   �"  B   #  C   S#  ;   �#  :   �#  Q   $  Q   `$  P   �$  B   %  C   F%  @   �%  T   �%  E    &  V   f&  X   �&  8   '  X   O'  �   �'  Q   =(  �   �(  #   )  #   A)  �  e)     I.  �   V.  ^   H/  8   �/  �   �/     �0  �   �0    G1  �  b2  �  ^4  I   6  M   Z6  ]   �6     7  �   7     �7     8  �   8  h   �8  �   !9  *   �9  R   �9  1   @:  A   r:  W  �:  �   <  '   �<  6   �<  q   %=  u   �=  j   >  *   x>  7   �>     �>  J   �>  2   5?  .   h?  V   �?  k   �?  �   Z@     A     (A     DA     UA     tA     �A  :   �A     �A        
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
PO-Revision-Date: 2025-07-05 14:19+02:00
Last-Translator: Petr Pisar <petr.pisar@atlas.cz>
Language-Team: Czech <translation-team-cs@lists.sourceforge.net>
Language: cs
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
Plural-Forms: nplurals=3; plural=(n==1) ? 0 : (n>=2 && n<=4) ? 1 : 2;
   -E                           (ignorován kvůli kompatibilitě)
   -V, --version               vypsat informace o verzi a skončit
   -V, --version                vypíše údaje o verzi a skončí
   -c, --context=KONTEXT        určuje kontext pro FORMÁT
   -c, --context=KONTEXT        určuje kontext ID_ZPRÁVY
   -d, --domain=TEXTOVÁ_DOMÉNA  získá přeloženou zprávu z TEXTOVÉ_DOMÉNY
   -d, --domain=TEXTOVÁ_DOMÉNA  získá přeložené zprávy z TEXTOVÉ_DOMÉNY
   -e                           umožní rozvoj některých posloupností escape
   -h, --help                  zobrazit tuto nápovědu a skončit
   -h, --help                   zobrazí tuto nápovědu a skončí
   -n                           potlačí nové řádky na konci
   -v, --variables             vypsat proměnné vyskytující se ve FORMÁTU_SHELLU
   ARGUMENT                     řetězcový nebo číselný argument
   POČET                        zvolí jednotné/množné číslo podle této hodnoty
   FORMÁT                       formátovací řetězec pro anglické jednotné číslo
   FORMÁT                       formátovací řetězec
   FORMÁT_PLURÁLU               formátovací řetězec pro anglické množné číslo
   ID_ZPRÁVY ID_PLURÁLU_ZPRÁVY  přeloží ID_ZPRÁVY (jednotné číslo) /
                               ID_PLURÁLU_ZPRÁVY (množné číslo)
   [TEXTOVÁ_DOMÉNA]             získá přeloženou zprávu z TEXTOVÉ_DOMÉNY
   [TEXTOVÁ_DOMÉNA] ID_ZPRÁVY   vypíše přeloženou zprávu odpovídající
                               ID_ZPRÁVY z TEXTOVÉ_DOMÉNY
 %s: očekávána číselná hodnota %s: hodnota nebyla zcela převedena Direktiva, která spotřebovává argument
  - začíná s „%s“ nebo „%s“, kde %s je kladné celé číslo,
  - je volitelně následována některým ze znaků „%c“, „%c“, „%c“, „%c“ a „%c“,
    každý se chová jako příznak,
  - je volitelně následována určením šířky (nezáporné celé číslo),
  - je volitelně následována „%c“ a určením přesnosti (volitelné nezáporné
    číslo),
  - je zakončena formátovacím znakem
      - „%c“, který tiskne znak,
      - „%c“, který tiskne řetězec,
      - „%c“, „%c“, který tiskne celé číslo,
      - „%c“, „%c“, „%c“, „%c“, které tisknou bezznaménkové (nezáporné)
        celé číslo,
      - „%c“, „%c“, které tisknou číslo s pohyblivou desetinou čárkou ve
        vědeckém tvaru,
      - „%c“, „%c“, které tisknou číslo s pohyblivou desetinou čárkou bez
        exponentu,
      - „%c“, „%c“, které tisknou číslo s pohyblivou desetinou čárkou
        v obecném tvaru,
      - „%c“, „%c“, které tisknou číslo s pohyblivou desetinou čárkou
        v šestnáctkové soustavě.
K tomu existuje direktiva „%s“, která tiskne jedno „%c“.
 Bruno Haible Copyright © %s Free Software Foundation, Inc.
Licence GPLv3+: GNU GPL verze 3 nebo novější <%s>
Jedná se o svobodný software: můžete jej svobodně měnit a šířit.
Nejsou poskytovány ŽÁDNÉ ZÁRUKY, mimo těch daných zákonem.
 Zobrazí v národním jazyce překlad textové zprávy, která gramaticky závisí na počtu.
 Zobrazí v národním jazyce překlad textové zprávy.
 Každý formátovací řetězec se skládá z
  - obyčejného textu,
  - direktiv, které začínají znakem „%c“,
  - escapovacích posloupností, které začínají zpětným lomítkem.
 Proměnné prostředí:
 Pokud direktiva určuje argument pomocí čísla (zápis „%s“,
musí tak činit všechny direktivy, které spotřebovávají argument.
 Není-li zadán argument TEXTOVÁ_DOMÉNA, je doména určena z proměnné
prostředí TEXTDOMAIN. Jestliže katalog se zprávami není nalezen
v obvyklém adresáři, hledá se v umístění určeném proměnnou prostředí
TEXTDOMAINDIR.
Standardně prohledávaný adresář: %s
 Není-li zadán argument TEXTOVÁ_DOMÉNA, je doména určena z proměnné
prostředí TEXTDOMAIN. Jestliže katalog se zprávami není nalezen
v obvyklém adresáři, hledá se v umístění určeném proměnnou prostředí
TEXTDOMAINDIR.
Je-li použit přepínač -s, chová se program podobně jako příkaz „echo“. Ale
namísto toto, aby pouze zkopíroval svoje argumenty na standardní výstup,
zprávy nalezené ve vybraném katalogu napřed přeloží.
Standardně prohledávaný adresář: %s
 V normálním operačním režimu je standardní vstup kopírován na standardní
výstup s tím, že odkazy na proměnné prostředí ve formě $PROMĚNNÁ nebo
${PROMĚNNÁ} jsou nahrazeny odpovídajícími hodnotami. Pokud je zadán
FORMÁT-SHELLU, jsou dosazovány jen ty proměnné, na které odkazuje;
v opačném případě jsou dosazovány všechny odkazy na proměnné prostředí,
které se objeví na standardním vstupu.
 V direktivě číslo %zu argument číslo 0 není kladné celé číslo. V direktivě číslo %zu znak „%c“ není platným formátovacím znakem. V directive číslo %zu příznak „%c“ nelze použít s formátovacím znakem „%c“. Informační výstup:
 Vyhledává se v adresáři s katalogy určeném proměnnou prostředí
%s nebo, není-li přítomna, ve výchozím adresáři s katalogy.
Tento program má nastaven jako výchozí adresář s katalogy:
%s
 Operační režim:
 Přepínače a argumenty:
 Dává formátovaný výstup za použití FORMÁTU přeloženého do přirozeného jazyka
nebo FORMÁTU_PLURÁLU v závislosti na POČTU na ARGUMENTY.
 Vrací formátovaný výstup za použití FORMÁTU přeloženého do přirozeného
jazyka na ARGUMENTY.
 Chyby hlaste anglicky do systému pro sledování chyb na
<%s> nebo e-mailem na
<%s>. Chyby v překladu česky na
<translation-team-cs@lists.sourceforge.net>.
 Dosadí hodnoty proměnných prostředí.
 Znak, který ukončuje direktivu číslo %zu není platným formátovacím znakem. Escapovací posloupnost „%c%c“ není platná. Escapovací posloupnost „%c%c“ není (v POSIXU) podporována. Escapovací posloupnosti jsou:

  %s      zpětné lomítko
  %s      zvonek (BEL)
  %s      backspace (BS)
  %s      posunutí formuláře (FF)
  %s      nový řádek (LF)
  %s      návrat vozíku (CR)
  %s      vodorovný tabulátor (HT)
  %s      svislý tabulátor (VT)
  %s      osmičkové číslo s 1 až 3 osmičkovými číslicemi
 Formátovací řetězec se skládá z
  - obyčejného textu,
  - direktiv, které začínají znakem „%c“,
  - escapovacích posloupností, které začínají zpětným lomítkem.
 Řetězec končí uprostřed direktivy, Řetězec končí uprostřed escapovací posloupnosti. Řetězec odkazuje na argumenty jak absolutním pořadím argumentů, tak nečíslovanými určeními argumentů. Přeložený formátovací řetězec spotřebovává %zu argumentů, ale původní formátovací řetězec pouze %zu. Překlad formátovacího řetězce se hledá v překladové doméně určené proměnnou
prostředí %s.
 Tato escapovací posloupnost je neplatná. Více informací získáte příkazem „%s --help“.
 Ulrich Drepper Použití: %s [PŘEPÍNAČ] FORMÁT FORMÁT_PLURÁLU POČET [ARGUMENT]…
 Použití: %s [PŘEPÍNAČ] FORMÁT [ARGUMENT]…
 Použití: %s [PŘEPÍNAČE] [FORMÁT_SHELLU]
 Použití: %s [PŘEPÍNAČE] [TEXTOVÁ_DOMÉNA] ID_ZPRÁVY ID_PLURÁLU_ZPRÁVY POČET
 Použití: %s [PŘEPÍNAČE] [[TEXTOVÁ_DOMÉNA] ID_ZPRÁVY]
nebo:    %s [PŘEPÍNAČE] -s [ID_ZPRÁVY]…
 Když je použit přepínač --variables, je standardní vstup ignorován a výpis
sestává z proměnných prostředí, které jsou odkazovány z FORMÁTU-SHELLU, jedna
proměnná co řádek.
 Napsal %s.
 chyba při čtení „%s“ chybí argumenty chybí formátovací řetězec standardní vstup příliš mnoho argumentů pozor: přebytečné argumenty se ignorují, počínaje %s chyba při zápisu 