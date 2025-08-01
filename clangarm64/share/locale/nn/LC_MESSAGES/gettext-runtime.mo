��    '      T  5   �      `  8   a  B   �  A   �  6     H   V  I   �  F   �  9   0  7   j  6   �  M   �  L   '  O   t  H   �  {        �  �   �  e   p  :   �    	  �  +
  �  
     �     �  <   �  1      &   2     Y  "   h  9   �  I   �  �        �     �     �     �     �     
  �    D   �  B   <  @     3   �  >   �  ?   3  >   s  ;   �  @   �  F   /  ;   v  T   �  N     =   V  o   �       �     X   �  #   P  �   t  �  t  c  M     �     �  �   �  %   k  *   �     �     �  9   �  F   "  �   i     �          '     8     I  
   \              !          #                     '                                %                                        
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
 error while reading "%s" missing arguments standard input too many arguments write error Project-Id-Version: gettext-runtime-0.20.2
Report-Msgid-Bugs-To: bug-gettext@gnu.org
PO-Revision-Date: 2020-05-04 19:21+0200
Last-Translator: Karl Ove Hufthammer <karl@huftis.org>
Language-Team: Norwegian Nynorsk <l10n-no@lister.huftis.org>
Language: nn
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8-bit
X-Bugs: Report translation errors to the Language-Team address.
X-Generator: Lokalize 20.04.0
Plural-Forms: nplurals=2; plural=n != 1;
   -E                        (for kompatibilitet – vert ignorert)
   -V, --version               Vis versjonsinformasjon og avslutt.
   -V, --version             Vis versjonsinformasjon og avslutt.
   -c, --context=KONTEKST    Vel kontekst for MSGID
   -d, --domain=TEKSTDOMENE  Hent omsetjinga frå TEKSTDOMENE.
   -d, --domain=TEKSTDOMENE  Hent omsetjingar frå TEKSTDOMENE.
   -e                        Utvid nokre verneteikn-sekvensar.
   -h, --help                  Vis denne hjelpa og avslutt.
   -h, --help                Vis denne hjelpeteksten og avslutt.
   -n                        Hindra ekstra linjeskift heilt til slutt.
   -v, --variables             Vis variablane i SKALFORMAT.
   NUMMER                    Vel mellom eintal og fleirtal basert på denne verdien.
   MSGID MSGID-FLEIRTAL      Set om MSGID (eintal) / MSGID-FLEIRTAL (fleirtal)
   [TEKSTDOMENE]             Hent omsetjinga frå TEKSTDOMENE
   [TEKSTDOMENE] MSGID       Hent omsetjinga som svarar til
                            MSGID frå TEKSTDOMENE.
 Bruno Haible © %s Free Software Foundation, Inc.
Lisens: GPLv3+ (GNU GPL versjon 3 eller seinare, <%s>)
Dette er fri programvare: Du må gjerne endra det eller gje det vidare.
Det er INGEN GARANTI for programmet utover det som står i lova.
 Vis omsetjinga av ein tekststreng med ei grammatisk form som er avhengig av eit nummer.
 Vis omsetjinga av ein tekststreng.
 Dersom TEKSTDOMENE-parameteren ikkje er oppgjeven, vert domenet
valt frå miljøvariabelen TEXTDOMAIN. Dersom meldingskatalogen ikkje
finst i den vanlege filmappa, kan du velja ei anna filmappe med
miljøvariabelen TEXTDOMAINDIR.
Standard søkjemappe: %s
 Dersom TEKSTDOMENE-parameteren ikkje er oppgjeven, vert domenet
valt frå miljøvariabelen TEXTDOMAIN. Dersom meldingskatalogen ikkje
finst i den vanlege filmappa, kan du velja ei anna filmappe med
miljøvariabelen TEXTDOMAINDIR.
Når du brukar valet «-s», fungerer programmet som kommandoen «echo».
Men det kopierer ikkje berre argumenta direkte til standard ut: Viss eit
argument finst som ei melding i den valde katalogen, vert det omsett.
Standard søkjemappe: %s
 I normal driftsmodus vert standard inndata kopiert til standard utdata
og referansar til miljøvariablar på forma $VARIABEL eller ${VARIABEL} vert
bytte ut med tilhøyrande verdiar. Dersom «SKALFORMAT» er oppgjeve,
vert berre miljøvariablane som er refererte til i «SKALFORMAT» bytte ut.
Elles vert alle miljøvariablar i standard inndata bytte ut.
 Informativ vising:
 Driftsmodus:
 Meld frå om feil feilrapporteringssystemet vårt
på <%s>, eller via e-post til <%s>.
Meld frå om feil i omsetjinga til <l10n-no@lister.huftis.org>.
 Byt ut verdiane til miljøvariablar.
 Prøv «%s --help» for meir informasjon.
 Ulrich Drepper Bruk: %s [VAL] [SKALFORMAT]
 Bruk: %s [VAL] [TEKSTDOMENE] MSGID MSGID-FLEIRTAL NUMMER
 Bruk:  %s [VAL] [[TEKSTDOMENE] MSGID]
eller: %s [VAL] -s [MSGID] …
 Når «--variables» er brukt, vert standard inndata ignorert og utdata
vert miljøvariablane det er referert til i «SKALFORMAT», éin per linje.
 Skrive av %s.
 feil ved lesing av «%s» manglar argument standard inndata for mange argument skrivefeil 