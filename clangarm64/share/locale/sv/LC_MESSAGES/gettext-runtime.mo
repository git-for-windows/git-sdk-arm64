��    &      L  5   |      P  8   Q  B   �  A   �  6     H   F  I   �  F   �  9      7   Z  6   �  M   �  L     O   d  H   �  {   �     y  �   �  e   `  :   �    	  �  
  �  �     �     �  <   �  1   �  &   "     I  "   X  9   {  I   �  �   �     �     �     �     �     �  �  �  <   �  C   �  A   3  4   u  N   �  L   �  G   F  @   �  >   �  8     N   G  P   �  R   �  N   :  |   �       �     h     8   u  �   �  �  �  :  {     �     �  �   �  '   s  3   �     �  &   �  ?     T   E  �   �     "      2     S     c     o              !          #                                                      %                                        
                  $      	   &                 "                  -E                        (ignored for compatibility)
   -V, --version               output version information and exit
   -V, --version             display version information and exit
   -c, --context=CONTEXT     specify context for MSGID
   -d, --domain=TEXTDOMAIN   retrieve translated message from TEXTDOMAIN
   -d, --domain=TEXTDOMAIN   retrieve translated messages from TEXTDOMAIN
   -e                        enable expansion of some escape sequences
   -h, --help                  display this help and exit
   -h, --help                display this help and exit
   -n                        suppress trailing newline
   -v, --variables             output the variables occurring in SHELL-FORMAT
   COUNT                     choose singular/plural form based on this value
   MSGID MSGID-PLURAL        translate MSGID (singular) / MSGID-PLURAL (plural)
   [TEXTDOMAIN]              retrieve translated message from TEXTDOMAIN
   [TEXTDOMAIN] MSGID        retrieve translated message corresponding
                            to MSGID from TEXTDOMAIN
 Bruno Haible Copyright (C) %s Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <%s>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
 Display native language translation of a textual message whose grammatical
form depends on a number.
 Display native language translation of a textual message.
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
 Informative output:
 Operation mode:
 Report bugs in the bug tracker at <%s>
or by email to <%s>.
 Substitutes the values of environment variables.
 Try '%s --help' for more information.
 Ulrich Drepper Usage: %s [OPTION] [SHELL-FORMAT]
 Usage: %s [OPTION] [TEXTDOMAIN] MSGID MSGID-PLURAL COUNT
 Usage: %s [OPTION] [[TEXTDOMAIN] MSGID]
or:    %s [OPTION] -s [MSGID]...
 When --variables is used, standard input is ignored, and the output consists
of the environment variables that are referenced in SHELL-FORMAT, one per line.
 Written by %s.
 error while reading "%s" missing arguments standard input too many arguments Project-Id-Version: gettext-runtime 0.24-pre1
Report-Msgid-Bugs-To: bug-gettext@gnu.org
PO-Revision-Date: 2025-02-22 11:55+0100
Last-Translator: Göran Uddeborg <goeran@uddeborg.se>
Language-Team: Swedish <tp-sv@listor.tp-sv.se>
Language: sv
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
Plural-Forms: nplurals=2; plural=(n != 1);
   -E                        (ignoreras för kompatibilitet)
   -V, --version               visa versionsinformation och avsluta
   -V, --version             visa versionsinformation och avsluta
   -c, --context=KONTEXT     ange kontext för MEDID
   -d, --domain=TEXTDOMÄN    hämta ett översatt meddelande från TEXTDOMÄN
   -d, --domain=TEXTDOMÄN    hämta översatta meddelanden från TEXTDOMÄN
   -e                        aktivera expansion av några styrsekvenser
   -h, --help                  visa denna hjälptext och avsluta
   -h, --help                visa denna hjälptext och avsluta
   -n                        undertryck avslutande nyrad
   -v, --variables             skriv ut variabler som förekommer i SKALFORMAT
   ANTAL                     välj singular/plural form baserat på detta värde
   MEDID MEDID-PLURAL        översätt MEDID (singularis) / MEDID-PLURAL (plural)
   [TEXTDOMÄN]               hämta ett översatt meddelande från TEXTDOMÄN
   [TEXTDOMÄN] MEDID         hämta ett översatt meddelande motsvarande
                            MEDID från TEXTDOMÄN
 Bruno Haible Copyright © %s Free Software Foundation, Inc.
Licens GPLv3+: GNU GPL version 3 eller senare <%s>
Detta program är fri programvara.  Du kan modifiera och distribuera den.
Det finns inte NÅGON SOM HELST GARANTI, till den grad som lagen tillåter.
 Visa översättningar i det lokala språket av textmeddelanden vars grammatiska
form beror på ett tal.
 Visa lokala språkets översättning av textmeddelande.
 Om parametern TEXTDOMÄN utelämnas bestäms domänen av miljövariabeln
TEXTDOMAIN. Om meddelandekatalogen inte hittas i den normala katalogen så
kan en annan katalog anges med miljövariabeln TEXTDOMAINDIR.
Normal katalog för meddelandekataloger: %s
 Om parametern TEXTDOMÄN utelämnas bestäms domänen av miljövariabeln
TEXTDOMAIN. Om meddelandekatalogen inte hittas i den normala katalogen så
kan en annan katalog anges med miljövariabeln TEXTDOMAINDIR.
När flaggan -s ges uppträder programmet som kommandot ”echo”.
Men det kopierar inte enbart sina argument till standard ut. Istället
översätts de argument som hittas i den valda meddelandekatalogen.
Normal katalog för meddelandekataloger: %s
 I normalt körläge kopieras standard in till standard ut med referenser
till miljövariabler i form av $VARIABEL eller ${VARIABEL} ersatta med
motsvarande värden.  Om SKALFORMAT anges så ersätts bara de
miljövariabler som refereras i SKALFORMAT; annars ersätts alla miljövariabler
som hittas i standard in.
 Informativ utskrift:
 Körläge:
 Rapportera fel till feluppföljaren på <%s>
eller med e-post till <%s>.
Rapportera fel och synpunkter på översättningen
till <tp-sv@listor.tp-sv.se>.
 Ersätter värdena av miljövariabler.
 Försök med ”%s --help” för mer information.
 Ulrich Drepper Användning: %s [FLAGGA] [SKALFORMAT]
 Användning: %s [FLAGGA] [TEXTDOMÄN] MEDID MEDID-PLURAL ANTAL
 Användning: %s [FLAGGA] [[TEXTDOMÄN] MEDID]
eller       %s [FLAGGA] -s [MEDID]…
 När --variables används så ignoreras standard in och utdata består av de
miljövariabler som förekommer i SKALFORMAT, en per rad.
 Skrivet av %s.
 fel uppstod då ”%s” lästes argument saknas standard in för många argument 