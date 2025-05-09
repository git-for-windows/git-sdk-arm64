��    /      �  C           C     9   ]  o   �  B     m   J  ?   �  \   �  ;   U  P   �  [   �     >  @   A  N   �  J   �  D     d   a  �   �  :   a	     �	     �	     �	  0   �	     �	  5   
  	   ;
     E
  �   Z
  )     "   .  1   Q  <   �  &   �  A   �  ;   )     e  /   u  7   �  3   �  :     ;   L  $   �     �     �     �     �  2     �  :  F     <   R  y   �  G   	  n   Q  L   �  [     9   i  K   �  Y   �     I  B   L  M   �  I   �  C   '  \   k  �   �  2   `     �     �     �  2   �     �  9   
  
   D     O  �   f  /     &   @  7   g  �   �  ,   B  I   o  A   �     �  5     9   A  :   {  <   �  >   �  )   2  !   \      ~     �     �  >   �           -                	   .          '                  
   !   ,                       )          &               #                         "           /                            %          (                $      *   +                --byte-subst=FORMATSTRING   substitution for unconvertible bytes
   --help                      display this help and exit
   --unicode-subst=FORMATSTRING
                              substitution for unconvertible Unicode characters
   --version                   output version information and exit
   --widechar-subst=FORMATSTRING
                              substitution for unconvertible wide characters
   -c                          discard unconvertible characters
   -f ENCODING, --from-code=ENCODING
                              the encoding of the input
   -l, --list                  list the supported encodings
   -s, --silent                suppress error messages about conversion problems
   -t ENCODING, --to-code=ENCODING
                              the encoding of the output
 %s %s argument: A format directive with a size is not allowed here. %s argument: A format directive with a variable precision is not allowed here. %s argument: A format directive with a variable width is not allowed here. %s argument: The character '%c' is not a valid conversion specifier. %s argument: The character that terminates the format directive is not a valid conversion specifier. %s argument: The format string consumes more than one argument: %u argument. %s argument: The format string consumes more than one argument: %u arguments. %s argument: The string ends in the middle of a directive. %s: I/O error %s:%u:%u %s:%u:%u: cannot convert %s:%u:%u: incomplete character or shift sequence (stdin) Converts text from one encoding to another encoding.
 I/O error Informative output:
 License GPLv3+: GNU GPL version 3 or later <%s>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
 Options controlling conversion problems:
 Options controlling error output:
 Options controlling the input and output format:
 Report bugs in the bug tracker at <%s>
or by email to <%s>.
 Try '%s --help' for more information.
 Usage: %s [OPTION...] [-f ENCODING] [-t ENCODING] [INPUTFILE...]
 Usage: iconv [-c] [-s] [-f fromcode] [-t tocode] [file ...] Written by %s.
 cannot convert byte substitution to Unicode: %s cannot convert byte substitution to target encoding: %s cannot convert byte substitution to wide string: %s cannot convert unicode substitution to target encoding: %s cannot convert widechar substitution to target encoding: %s conversion from %s to %s unsupported conversion from %s unsupported conversion to %s unsupported or:    %s -l
 or:    iconv -l try '%s -l' to get the list of supported encodings Project-Id-Version: libiconv 1.17-pre1
Report-Msgid-Bugs-To: bug-gnu-libiconv@gnu.org
PO-Revision-Date: 2022-02-13 12:57+0100
Last-Translator: Luna Jernberg <droidbittin@gmail.com>
Language-Team: Swedish <tp-sv@listor.tp-sv.se>
Language: sv
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=2; plural=(n != 1);
X-Bugs: Report translation errors to the Language-Team address.
X-Generator: Poedit 2.2.1
   --byte-subst=FORMATSTRÄNG   ersättning av inte konverterbara byte
   --help                      visa denna hjälp och avsluta
   --unicode-subst=FORMATSTRÄNG
                              ersättning av Unicode-tecken som inte går att konvertera
   --version                   skriv ut versionsinformation och avsluta
   --widechar-subst=FORMATSTRÄNG
                              ersättning av inte konverterbara breda tecken
   -c                          förkasta tecken som inte går att konvertera
   -f KODNING,  --from-code=KODNING
                              kodningen på inmatningen
   -l, --list                  lista kodningar som stöds
   -s, --silent                tysta felmeddelanden om konverteringsproblem
   -t KODNING,  --to-code=KODNING
                              kodningen på utmatningen
 %s Argument %s: Ett formatdirektiv med en storlek tillåts inte här. Argument %s: Ett formatdirektiv med en variabel precision tillåts inte här. Argument %s: Ett formatdirektiv med en variabel bredd tillåts inte här. Argument %s: Tecknet "%c" är inte en giltig konverteringsangivare. Argument %s: Tecknet som avslutar formatdirektivet är inte en giltig konverteringsangivare. Argument %s: Formatsträngen konsumerar fler än ett argument: %u argument. Argument %s: Formatsträngen konsumerar fler än ett argument: %u argument. Argument %s: Strängen slutar mitt i ett direktiv. %s: In-/Ut-fel %s:%u:%u %s:%u:%u: kan inte konvertera %s:%u:%u: ofullständigt tecken eller skiftsekvens (standard in) Konverterar text från en kodning till en annan kodning.
 In-/Ut-fel Informativ utmatning:
 Licens GPLv3+: GNU GPL version 3 eller senare <%s>
Det här är fri programvara: du kan ändra och distribuera den.
Det finns INGEN GARANTI, så långt lagen tillåter.
 Flaggor som kontrollerar konverteringsproblem:
 Flaggor som kontrollerar felutskrift:
 Flaggor som styr formatet på inmatning och utmatning:
 Rapportera fel i felrapporteringssystemet på <%s>
eller via e-post till <%s>.
Rapportera fel eller synpunkter på översättningen till <tp-sv@listor.tp-sv.se>.
 Prova ”%s --help” för mer information.
 Användning: %s [FLAGGA…] [-f KODNING] [-t KODNING] [INMATNINGSFIL…]
 Användning: iconv [-c] [-s] [-f frånkod] [-t tillkod] [fil …] Skrivet av %s.
 kan inte konvertera byte-ersättning till Unicode: %s kan inte konvertera byte-ersättning till målkodning: %s kan inte konvertera byte-ersättning till bred sträng: %s kan inte konvertera unicode-ersättning till målkodning: %s kan inte konvertera bredteckenersättning till målkodning: %s konvertering från %s till %s stöds inte konvertering från %s stöds inte konvertering till %s stöds inte eller:      %s -l
 eller:      iconv -l prova ”%s -l” för att få listan på kodningar som stöds 