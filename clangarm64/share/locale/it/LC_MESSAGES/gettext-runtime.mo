��    H      \  a   �         8   !  B   Z  A   �  7   �  6     H   N  I   �  F   �  9   (  7   b  6   �  M   �  7   	  L   W	  C   �	  *   �	  A   
  O   U
  H   �
  {   �
     j  "   �  �  �     �  �   �  e   }  :   �  �        �  y   �    9  �  S  �  2  M   �  T     N   h     �  �   �     �     �  �   �  `   H  <   �  1   �  [     &   t  9   �    �  �   �  -   t  4   �  u   �  t   M  r   �      5  &   V     }  <   �  (   �  "   �  9     I   O  �   �     7      G      `      r      �      �   4   �      �   �  �   :   �"  L   �"  J   )#  >   t#  <   �#  F   �#  G   7$  N   $  :   �$  8   	%  >   B%  P   �%  9   �%  u   &  M   �&  /   �&  K    '  N   L'  F   �'  |   �'     _(  '   z(  k  �(     -  �   -  t   	.  C   ~.  �   �.     [/  �   r/  *  �/  �  &1  �  3  K   �4  ]   !5  O   5     �5  �   �5     �6     �6  �   �6  b   �7  �   �7  1   n8  `   �8  +   9  >   -9  8  l9  �   �:  .   8;  7   g;  j   �;  f   
<  z   q<  $   �<  -   =     ?=  C   N=  )   �=  "   �=  ?   �=  I   >  �   i>     ?  !   ?     8?     K?     g?     v?  :   �?     �?        
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
PO-Revision-Date: 2025-07-10 12:25+0200
Last-Translator: Michele Locati <michele@locati.it>
Language-Team: Italian <tp@lists.linux.it>
Language: it
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=2; plural=(n != 1);
X-Bugs: Report translation errors to the Language-Team address.
   -E                        (ignorato per compatibilità)
   -V, --version               mostra le informazioni sulla versione ed esce
   -V, --version             mostra le informazioni sulla versione ed esce
   -c, --context=CONTESTO    specifica il contesto per FORMATO
   -c, --context=CONTESTO    specifica il contesto per IDMSG
   -d, --domain=DOMINIOTESTO ricava messaggio tradotto da DOMINIOTESTO
   -d, --domain=DOMINIOTESTO ricava i messaggi tradotti da DOMINIOTESTO
   -e                        abilita l'espansione di alcune sequenze di escape
   -h, --help                  mostra questo aiuto ed esce
   -h, --help                mostra questo aiuto ed esce
   -n                        sopprime il ritorno a capo finale
   -v, --variables             mostra le variabili che appaiono in FORMATO-SHELL
   ARGOMENTO                 stringa o argomento numerico
   CONTEGGIO                 seleziona la forma singolare/plurale in base a
                            questo valore
   FORMATO                   Forma singolare inglese della stringa di formato
   FORMATO                   stringa di formato
   FORMATO-PLURALE           Forma plurale inglese della stringa di formato
   IDMSG IDMSG-PLURALE       traduce IDMSG (singolare)/IDMSG-PLURALE (plurale)
   [DOMINIOTESTO]            ricava messaggio tradotto da DOMINIOTESTO
   [DOMINIOTESTO] IDMSG      ricava il messaggio tradotto corrispondente a
                            IDMSG da DOMINIOTESTO
 %s: valore numerico atteso %s: valore non convertito completamente Una direttiva che richiede un argomento
  - inizia con "%s" o "%s", dove %s è un numero intero positivo,
  - è facoltativamente seguita da uno qualsiasi dei caratteri "%c", "%c", "%c", "%c", "%c",
    ognuno dei quali funge da flag,
  - è facoltativamente seguita da una specifica di larghezza (un numero intero
    non negativo),
  - è facoltativamente seguita da "%c" e da una specifica di precisione
    (un intero non negativo opzionale),
  - è completata da un identificatore
      - "%c", che stampa un carattere,
      - "%c", che stampa una stringa,
      - "%c", "%c", che stampano un numero intero,
      - "%c", "%c", "%c", "%c", che stampano un numero intero senza
        segno (non negativo),
      - "%c", "%c", che stampano un numero in virgola mobile in notazione
        scientifica,
      - "%c", "%c", che stampano un numero in virgola mobile senza
        esponente,
      - "%c", "%c", che stampano un numero in virgola mobile in notazione
        generale,
      - "%c", "%c", che stampano un numero in virgola mobile in notazione
        esadecimale.
Inoltre, la direttiva "%s" stampa un singolo "%c".
 Bruno Haible Copyright (C) %s Free Software Foundation, Inc.
Licenza GPLv3+: GNU GPL versione 3 o successiva <%s>
Questo è software libero: siete liberi di modificarlo e ridistribuirlo.
Non c'è ALCUNA GARANZIA, nella misura consentita dalla legge.
 Mostra la traduzione di un messaggio di testo, la cui forma grammaticale
dipende da un numero, nella lingua nativa.
 Mostra la traduzione di un messaggio testuale nella lingua nativa.
 Ciascuna stringa di formato consiste in
  - testo normale,
  - direttive, che iniziano con "%c",
  - sequenze di escape, che iniziano con un backslash.
 Variabili d'ambiente:
 Se una direttiva specifica l'argomento con il suo numero (notazione "%s"),
tutte le direttive che utilizzano un argomento devono farlo.
 Se il parametro DOMINIOTESTO non è indicato, il dominio è determinato dalla
variabile d'ambiente TEXTDOMAIN.  Se il catalogo dei messaggi non si trova
nella directory normale, può essere specificata un'altra posizione con la
variabile d'ambiente TEXTDOMAINDIR.
Directory di ricerca standard: %s
 Se il parametro DOMINIOTESTO non è indicato, il dominio è determinato dalla
variabile d'ambiente TEXTDOMAIN.  Se il catalogo dei messaggi non si trova
nella directory normale, può essere specificata un'altra posizione con la
variabile d'ambiente TEXTDOMAINDIR.
Quando usato con l'opzione -s, il programma si comporta come il comando "echo"
ma, invece di copiare semplicemente gli argomenti su standard output, traduce
i messaggi trovati nel catalogo selezionato.
Directory di ricerca standard: %s
 Nella modalità operativa normale, lo standard input viene copiato sullo
standard output, con i riferimenti alle variabili d'ambiente nella forma
$VARIABILE o ${VARIABILE} sostituiti dai valori corrispondenti.
Se è indicato un FORMATO-SHELL, solo le variabili d'ambiente referenziate
in FORMATO-SHELL verranno sostituite; in caso contrario saranno sostituiti
tutti i riferimenti alle variabili d'ambiente che appaiono sullo standard
input.
 Nella direttiva numero %zu, l'argomento numero 0 non è un intero positivo. Nella direttiva numero %zu, il carattere "%c" non è uno specificatore di conversione valido. Nella direttiva numero %zu, il flag "%c" non è valido per la conversione "%c". Output informativo:
 Viene cercato nella directory dei cataloghi indicata dalla variabile di
ambiente %s o, se non presente, nella directory dei cataloghi predefinita.
Questo binario è configurato per usare la directory predefinita dei cataloghi:
%s
 Modalità operativa:
 Opzioni e argomenti:
 Produce un output formattato, applicando la traduzione in lingua madre di
FORMATO e FORMATO-PLURALE, a seconda di CONTEGGIO, agli ARGOMENTI.
 Produce un output formattato, applicando la traduzione in lingua madre di FORMATO
agli ARGOMENTI.
 Segnalare i bug nel bug tracker all'indirizzo <%s>
o tramite email a <%s>.
Segnalare gli errori di traduzione a <tp@lists.linux.it>.
 Sostituisce i valori delle variabili d'ambiente.
 Il carattere che termina la direttiva numero %zu non è uno specificatore di conversione valido. La sequenza di escape "%c%c" non è valida. La sequenza di escape "%c%c" non è supportata (non in POSIX). Le sequenze di escape sono:

  %s      backslash
  %s      allarme (BEL)
  %s      backspace (BS)
  %s      avanzamento pagina (FF)
  %s      nuova riga (LF)
  %s      ritorno a capo (CR)
  %s      tabulazione orizzontale (HT)
  %s      tabulazione verticale (VT)
  %s    numero ottale con da 1 a 3 cifre ottali
 La stringa di formato consiste in
  - testo normale,
  - direttive, che iniziano con "%c",
  - sequenze di escape, che iniziano con un backslash.
 La stringa termina nel mezzo di una direttiva. La stringa termina nel mezzo di una sequenza di escape. La stringa fa riferimento ad argomenti attraverso specifiche di argomento sia con numero che senza numero. La stringa di formato tradotta consuma %zu argomenti, mentre il formato originale ne consuma solo %zu. La traduzione della stringa di formato viene cercata nel dominio di
traduzione specificato dalla variabile d'ambiente %s.
 La sequenza di escape non è valida. Usare "%s --help" per maggiori informazioni.
 Ulrich Drepper Uso: %s [OPZIONE] FORMATO FORMATO-PLURALE CONTEGGIO [ARGOMENTO]...
 Uso: %s [OPZIONE] FORMATO [ARGOMENTO]...
 Uso: %s [OPZIONE] [FORMATO-SHELL]
 Uso: %s [OPZIONE] [DOMINIOTESTO] IDMSG IDMSG-PLURALE CONTEGGIO
 Uso: %s [OPZIONE] [[DOMINIOTESTO] IDMSG]
o:   %s [OPZIONE] -s [IDMSG]...
 Quando viene usato --variables, lo standard input viene ignorato; l'output
consiste delle variabili d'ambiente referenziate in FORMATO-SHELL, una per
riga.
 Scritto da %s.
 errore durante la lettura di "%s" argomenti mancanti stringa di formato mancante standard input troppi argomenti attenzione: argomenti in eccesso ignorati, a partire da %s errore di scrittura 