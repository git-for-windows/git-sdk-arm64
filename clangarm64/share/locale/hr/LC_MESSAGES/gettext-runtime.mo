��    H      \  a   �         8   !  B   Z  A   �  7   �  6     H   N  I   �  F   �  9   (  7   b  6   �  M   �  7   	  L   W	  C   �	  *   �	  A   
  O   U
  H   �
  {   �
     j  "   �  �  �     �  �   �  e   }  :   �  �        �  y   �    9  �  S  �  2  M   �  T     N   h     �  �   �     �     �  �   �  `   H  <   �  1   �  [     &   t  9   �    �  �   �  -   t  4   �  u   �  t   M  r   �      5  &   V     }  <   �  (   �  "   �  9     I   O  �   �     7      G      `      r      �      �   4   �      �     �   >   #  J   B#  H   �#  >   �#  =   $  D   S$  C   �$  Q   �$  :   .%  8   i%  G   �%  Q   �%  ;   <&  I   x&  D   �&  +   '  B   3'  M   v'  D   �'  �   	(  '   �(  1   �(  =  �(     $-  �   1-  F   �-  !   E.  �   g.     /  �   0/    �/  �  �0  �  �2  E   X4  I   �4  G   �4     05  �   E5     6     /6  s   D6  L   �6  E   7  -   K7  M   y7  .   �7  =   �7  �  48  �   �9  '   o:  6   �:  |   �:  l   K;  _   �;  (   <  9   A<     {<  C   �<  *   �<  %   �<  @   =  N   `=  �   �=     M>     Z>     x>     �>     �>     �>  9   �>     �>        
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
PO-Revision-Date: 2025-07-04 21:59-0700
Last-Translator: Božidar Putanec <bozidarp@yahoo.com>
Language-Team: Croatian <lokalizacija@linux.hr>
Language: hr
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=3; plural=(n%10==1 && n%100!=11 ? 0 : n%10>=2 && n%10<=4 && (n%100<10 || n%100>=20) ? 1 : 2);
X-Bugs: Report translation errors to the Language-Team address.
X-Generator: Vim9.1
   -E                        (zanemareno zbog kompatibilnosti)
   -V, --version               informira o inačici ovog programa i iziđe
   -V, --version             informira o inačici ovog programa i iziđe
   -c, --context=KONTEKST    specifikacija konteksta za FORMAT
   -c, --context=KONTEKST    specifikacija konteksta za MSGID
   -d, --domain=TEKSTDOMENA  preuzme prevedene poruke iz TEKSTDOMENE
   -d, --domain=TEKSTDOMENA  traži prevedene poruke iz TEKSTDOMENE
   -e                        omogući ekspanziju nekih maskiranih (escape) nizova
   -h, --help                  pokaže ovu pomoć i iziđe
   -h, --help                pokaže ovu pomoć i iziđe
   -n                        ne ostavlja prazni redak na kraju datoteke
   -v, --variables             ispiše varijable koje se javljaju u FORMAT-LJUSKE
   ARGUMENT                  string ili numerički argument
   KOLIČINA                  odabere singular ili plural prema KOLIČINI
   FORMAT                    Singular stringa za format na engleskom
   FORMAT                    string formata
   FORMAT-PLURAL             Plural stringa za format na engleskom
   MSGID MSGID-PLURAL        prevede MSGID (singular) / MSGID-PLURAL (plural)
   [TEKSTDOMENA]             preuzme prevedene poruke iz TEKSTDOMENE
   [TEKSTDOMENA] MSGID       preuzme prevedenu poruku koja odgovara
                              navedenom MSGID-u iz TEKSTDOMENE
 %s: očekivana je numerička vrijednost %s: ova vrijednost nije u potpunosti konvertirana Direktiva koja koristi argument
  - počinje s ‘%s’ ili ‘%s’ gdje je %s pozitivni cijeli broj,
  - zatim, opcionalno slijede bilo koji od znakova ‘%c’, ‘%c’, ‘%c’, ‘%c’, ‘%c’,
    a svaki od njih djeluje kao flag,
  - zatim, opcionalno slijedi specifikacija širine (nenegativni cijeli broj),
  - zatim, opcionalno slijede ‘%c’ i specifikacijom preciznosti (neobavezni
    nenegativni cijeli broj),
  - a završi sa  specifikatorom
      - ‘%c’, ispiše znak,
      - ‘%c’, ispiše string,
      - ‘%c’, ‘%c’, ispiše cijeli broj,
      - ‘%c’, ‘%c’, ‘%c’, ‘%c’, ispiše neoznačeni (nenegativni) cijeli broj,
      - ‘%c’, ‘%c’, ispiše broj s plutajućim zarezom u znanstvenoj notaciji,
      - ‘%c’, ‘%c’, ispiše broj s plutajućim zarezom bez esponenta,
      - ‘%c’, ‘%c’, ispiše broj s plutajućim zarezom u standardnoj notaciji,
      - ‘%c’, ‘%c’, ispiše broj s plutajućim zarezom u heksadekadskoj notaciji.
Osim toga, postoji direktiva '%s', koja ispiše samo jedan ‘%c’.
 Bruno Haible Copyright (C) %s Free Software Foundation, Inc.
Licenca GPLv3+: GNU GPL inačica 3 ili novija <%s>
Ovo je slobodan softver: slobodno ga mijenjajte i dijelite.
NEMA JAMSTVA do granica dopuštenih zakonom.
 Ispiše prijevod tekstne poruke čiji gramatički oblik ovisi o broju
 Ispiše prijevod tekstne poruke.
 Svaki format string sastoji se od
  - obični tekst,
  - direktiva, koja počinjue s ‘%c’,
  - maskirani (escape) nizovi, koji započinju s obrnutom kosom crtom, backslash.
 Varijable okruženja:
 Ako jedna direktiva specificira argument sa svojim brojem (‘%s’ notacija),
onda sve direktive koje koriste argument moraju tako postupiti.
 Ako parametar TEKSTDOMENA nije naveden, domenu određuje varijabla okruženja
TEXTDOMAIN. Ako katalog poruka nije pronađen u uobičajenom direktoriju,
alternativna lokacija može se zadati varijablom okruženja TEXTDOMAINDIR.

Uobičajeni direktorij za pretragu je: %s
 Ako parametar TEKSTDOMENA nije naveden, domenu određuje varijabla okruženja
TEXTDOMAIN. Ako katalog poruka nije pronađen u uobičajenom direktoriju,
alternativna lokacija može se zadati varijablom okruženja TEXTDOMAINDIR.

Kad se koristi opcija -s, program se ponaša kao naredba ‘echo’;
ali umjesto jednostavnog ispisa svih svojih argumenata, program ispiše
njihove prijevode ako ih nađe u odabranom katalogu (TEKSTDOMENA).

Uobičajeni direktorij za pretragu je: %s
 U običnom načinu rada standardni ulaz kopira se na standardni izlaz,
s time da se referencije na varijable okruženja u formatu $VARIJABLA ili
${VARIJABLA} zamijene odgovarajućim vrijednostima. Ako je navedeni argument
FORMAT-LJUSKE, onda će samo one varijable okruženja s referencijom u
FORMAT-LJUSKE biti zamijenjene; u suprotnom, sve varijable okruženja koje se
pojavljuju na standardnom ulazu bit će zamijenjene.
 U direktivi broj %zu, argument s brojem 0 nije pozitivni cijeli broj. U direktivi broj %zu, znak ‘%c’ nije valjani specifikator konverzije. U direktivi broj %zu, flag ‘%c’ nije valjan za konverziju ‘%c’. Informativni izlaz:
 Traži se u direktoriju kataloga koji je određen varijablom okruženja
%s ili, a ako ga nema, onda u zadanom direktoriju kataloga.
Ova binarna datoteka konfigurirana je da koristi zadani direktorij kataloga:
%s
 Način rada (mode):
 Opcije i argumenti:
 Generira formirani izlaz podataka primijenom prijevoda FORMATA
i FORMAT-PLURALA, ovisno o KOLIČINI, na ARGUMENTE.
 Generira formirani izlaz podataka primijenom prijevoda FORMATA na ARGUMENTE
 Greške prijavite u ‘bug tracker’ na <%s>
ili e-poštom na <%s>.
 Zamjenjuje vrijednosti varijabli okruženja.
 Znak kojim završava direktiva broj %zu nije valjani specifikator konverzije. Maskirani (escape) niz ‘%c%c’ nije valjan. Maskirani (escape) niz ‘%c%c’ nije podržan (ne u POSIX). Maskirani (escape) nizovi su:

  %s      backslash, obrnuta kosa crta
  %s      alert (BEL), upozorenje
  %s      backspace (BS), briše znak ispred
  %s      form feed (FF)
  %s      new line (LF), znak novog retka
  %s      carriage return (CR)
  %s      horizontal tab (HT), horizontalni tabulator
  %s      vertical tab (VT), vertikalni tabulator
  %s    oktalni broj s 1 do 3 oktalne znamenke
 Format string sastoji se od
  - obični tekst,
  - direktiva, koja počinjue s ‘%c’,
  - maskirani (escape) nizovi, koji započinju s obrnutom kosom crtom, backslash.
 String je završio u sredini direktive. String je završio u sredini maskiranog (escape) niza. String referira na argumente istovremeno putem apsolutnih brojeva argumenata i putem specifikacija nenumeriranih argumenata. Prevedeni string formata zahtijeva %zu argumenata, dok izvorni string formata zahtijeva samo %zu argumenata. Prijevod stringa formata tražit će se u domeni prijevodaodređenoj varijablom okruženja %s.
 Ovaj maskirani (escape) niz nije valjan. Utipkajte ‘%s --help’ za pomoć i više informacija.
 Ulrich Drepper Uporaba: %s [OPCIJA] FORMAT FORMAT-PLURALA KOLIČINA [ARGUMENT]...
 Uporaba: %s [OPCIJA] FORMAT [ARGUMENT]...
 Uporaba: %s [OPCIJA] [FORMAT-LJUSKE]
 Uporaba: %s [OPCIJA] [TEKSTDOMENA] MSGID MSGID-PLURAL KOLIČINA
 Uporaba: %s [OPCIJA] [[TEKSTDOMENA] MSGID]
    ili: %s [OPCIJA] -s [MSGID]...
 Ako se koristi --variables, standardni ulaz je zanemaren, a izlaz se
sastoji od onih varijabli okruženja s referencijom u FORMAT-LJUSKE,
po jedna po retku.
 Napisao %s.
 greška pri čitanju „%s’ nema argumenata nedostaje string formata standardni ulaz previše argumenata upozorenje: ignoriramo suvišne argumente, počevši s %s greška pri pisanju 