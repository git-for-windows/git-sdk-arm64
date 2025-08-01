��    '      T  5   �      `  8   a  B   �  A   �  6     H   V  I   �  F   �  9   0  7   j  6   �  M   �  L   '  O   t  H   �  {        �  �   �  e   p  :   �    	  �  +
  �  
     �     �  <   �  1      &   2     Y  "   h  9   �  I   �  �        �     �     �     �     �     
  �    >   �  E     C   Q  8   �  H   �  J     H   b  ?   �  =   �  4   )  M   ^  V   �  M     H   Q  y   �       �   !  X     /   _  �   �  �  �  �  X     �     �  �     ,   �  '   �     �  $   �  ;     N   Y  �   �     K     [     t     �     �  
   �              !          #                     '                                %                                        
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
 error while reading "%s" missing arguments standard input too many arguments write error Project-Id-Version: gettext-runtime 0.20.2
Report-Msgid-Bugs-To: bug-gettext@gnu.org
PO-Revision-Date: 2020-05-30 15:55-0300
Last-Translator: Felipe Castro <fefcas@gmail.com>
Language-Team: Esperanto <translation-team-eo@lists.sourceforge.net>
Language: eo
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
X-Generator: Poedit 2.3.1
   -E                        (preteratentite pro retrokongruo)
   -V, --version               eligi informon pri la versio kaj eliri
   -V, --version             eligi informon pri la versio kaj eliri
   -c, --context=KUNTEKSTO   indiki kuntekston por MSGID
   -d, --domain=TEKSTDOMAJNO elpreni tradukitan mesaĝon el TEKSTDOMAJNO
   -d, --domain=TEKSTDOMAJNO elpreni tradukitajn mesaĵojn el TEKSTDOMAJNO
   -e                        ebligi disvolvigon de kelkaj eskapaj sekvoj
   -h, --help                  montri ĉi tiun helpon kaj eligi
   -h, --help                montri ĉi tiun helpon kaj eligi
   -n                        forigi vostan novlinion
   -v, --variables             eligi la variablojn aperantajn en ŜEL-FORMATO
   NOMBRO                    elekti ununuran/pluralan formon surbaze de tiu ĉi valoro
   MSGID MSGID-PLURAL        traduki MSGID (ununura) / MSGID-PLURAL (plurala)
   [TEKSTDOMAJNO]            elpreni tradukitan mesaĝon el TEKSTDOMAJNO
   [TEKSTDOMAJNO] MSGID      elpreni tradukitan mesaĝon korespondan
                            al MSGID el TEKSTDOMAJNO
 Bruno Haible Kopirajto © %s Free Software Foundation, Inc.
Rajtigilo GPLv3+: GNU GPL, versio 3 aŭ posta <%s>
Ĉi tio estas libera programo; vi estas libera ŝanĝi kaj redistribui ĝin.
Estas NENIA GARANTIO, ĝis la grado leĝe permesata.
 Montri lokalingvan tradukon de teksta mesaĝo, kies gramatika formo
dependas de nombro.
 Montru lokalingvan tradukon de teksta mesaĝo.
 Se la parametro TEXTDOMAIN ne estas donita, la media variable TEXTDOMAIN
estas uzata. Se la mesaĝkatalogo ne estas trovita en la kutima dosierujo,
alia dosierujo povas esti specifita per la media variablo TEXTDOMAINDIR.
Normala serĉdosierujo: %s
 Se la parametro TEXTDOMAIN ne estas donita, la media variable TEXTDOMAIN
estas uzata. Se la mesaĝkatalogo ne estas trovita en la kutima dosierujo,
alia dosierujo povas esti specifita per la media variablo TEXTDOMAINDIR.
Uzate kun la modifilo -s, la programo kondutas kiel la komando 'echo'.
Tamen, ĝi ne simple kopias siajn argumentojn al la normala eligo;
anstataŭe, tiuj mesaĝoj trovitaj en la elektita katalogo estas tradukataj.
Normala serĉdosierujo: %s
 En normala funkciado, la normala enigo estas kopiata al la normala eligo,
kun referencoj al mediaj variabloj kun la formo $VARIABLO aŭ ${VARIABLO}
anstataŭigitaj per la respondaj valoroj. Se SHELL-FORMAT estas specifita,
nur tiuj mediaj variabloj, kiuj estas referencitaj en SHELL-FORMAT, estas
substituataj; alia ĉiuj referencoj al mediaj variabloj aperantaj en la
normala enigo estas substituataj.
 Informa eligo:
 Funkcia reĝimo:
 Raportu misojn al la sekvilo ĉe <%s>
aŭ per retpoŝto al <%s.
Raportu traduk-misojn al <translation-team-eo@lists.sourceforge.net>
 Substituas la valorojn de mediaj variabloj.
 Provu '%s --help' por pli da informoj.
 Ulrich Drepper Uzado: %s [MODIFILO] [ŜEL-FORMATO]
 Uzado: %s [MODIFILO] [TEXTDOMAIN] MSGID MSGID-PLURAL COUNT
 Uzado: %s [MODIFILO] [[TEXTDOMAIN] MSGID]
aŭ:    %s [MODIFILO] -s [MSGID]...
 Kiam --variables estas specifita, la normala enigo estas ignorata, kaj la
eligo konsistas el la mediaj variabloj referencitaj en SHELL-FORMAT,
unu en ĉiu linio.
 Verkita de %s.
 eraro dum legado de "%s" argumentoj mankas normala enigo tro da argumentoj skriberaro 