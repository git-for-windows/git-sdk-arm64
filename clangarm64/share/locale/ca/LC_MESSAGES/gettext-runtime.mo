��    '      T  5   �      `  8   a  B   �  A   �  6     H   V  I   �  F   �  9   0  7   j  6   �  M   �  L   '  O   t  H   �  {        �  �   �  e   p  :   �    	  �  +
  �  
     �     �  <   �  1      &   2     Y  "   h  9   �  I   �  �        �     �     �     �     �     
  �    N   �  A     A   V  ]   �  g   �  g   ^  U   �  2     2   O  B   �  G   �  p     J   ~  F   �  �        �  �   �  l   �  =   
  )  H    r  �  w             �   7  3   �  5   �     *  '   9  F   a  X   �  �        �     �     �     �     �     �              !          #                     '                                %                                        
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
 error while reading "%s" missing arguments standard input too many arguments write error Project-Id-Version: gettext-runtime 0.22
Report-Msgid-Bugs-To: bug-gettext@gnu.org
PO-Revision-Date: 2023-07-07 09:02+0200
Last-Translator: Ivan Vilata i Balaguer <ivan@selidor.net>
Language-Team: Catalan <ca@dodds.net>
Language: ca
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
Plural-Forms: nplurals=2; plural=(n != 1);
   -E                   (No es té en compte, s’accepta per compatibilitat).
   -V, --version        Mostra informació sobre la versió i ix.
   -V, --version        Mostra informació sobre la versió i ix.
   -c, --context=CONTEXT
                       Especifica el CONTEXT del missatge amb IDMSG.
   -d, --domain=DOMINI_TEXTUAL
                       Obté del DOMINI_TEXTUAL els missatges traduïts.
   -d, --domain=DOMINI_TEXTUAL
                       Obté del DOMINI_TEXTUAL els missatges traduïts.
   -e                   Habilita l’expansió d’algunes seqüències d’escapada.
   -h, --help           Mostra aquesta ajuda i ix.
   -h, --help           Mostra aquesta ajuda i ix.
   -n                   Elimina el caràcter de nova línia final.
   -v, --variables      Mostra les variables que es troben a la CADENA.
   NOMBRE               Escull la forma singular o la plural basant‐se en
                       aquest valor.
   IDMSG IDMSG_PLURAL   Tradueix IDMSG (singular) / IDMSG_PLURAL (plural).
   [DOMINI_TEXTUAL]     Obté del DOMINI_TEXTUAL el missatge traduït.
   [DOMINI_TEXTUAL] IDMSG
                       Obté del DOMINI_TEXTUAL el missatge traduït
                       corresponent a l’IDMSG.
 Bruno Haible Copyright © %s Free Software Foundation, Inc.
GPLv3+: llicència GNU GPL ver. 3 o posterior <%s>
Aquest és programari lliure: podeu modificar‐lo i redistribuir‐lo si voleu.
No hi ha CAP GARANTIA, en la mesura que ho permeta la llei.
 Mostra la traducció a idioma natiu d’un missatge textual la forma gramatical
del qual depén del nombre.
 Mostra la traducció a idioma natiu d’un missatge textual.
 Si no s’especifica el paràmetre DOMINI_TEXTUAL, la variable d’entorn
TEXTDOMAIN determinarà el domini a emprar.  Si el catàleg de missatges no es
troba al directori habitual, es pot especificar una altra ubicació amb la
variable d’entorn TEXTDOMAINDIR.
Directori estàndard de cerca: %s
 Si no s’especifica el paràmetre DOMINI_TEXTUAL, la variable d’entorn
TEXTDOMAIN determinarà el domini a emprar.  Si el catàleg de missatges no es
troba al directori habitual, es pot especificar una altra ubicació amb la
variable d’entorn TEXTDOMAINDIR.
Quan s’empra l’opció «-s» el programa es comporta com l’ordre «echo».  Però,
no només còpia els seus arguments en l’eixida estàndard, sinò que tradueix els
missatges que troba al catàleg seleccionat.
Directori estàndard de cerca: %s
 En el mode normal de funcionament es copia l’entrada estàndard a l’eixida
estàndard, reemplaçant les referències a variables d’entorn amb la forma
«$VARIABLE» o «${VARIABLE}» per llurs valors.  Si s’especifica una CADENA,
només es substituiran les variables d’entorn referides en ella; altrament,
es substituiran totes les variables d’entorn que apareguen a l’entrada
estàndard.
 Eixida informativa:
 Mode de funcionament:
 Informeu dels errors al sistema de seguiment <%s>
o per correu electrònic a <%s>.

Informeu dels error de traducció a <ca@dodds.net>.
 Substitueix variables d’entorn pels seus valors.
 Proveu «%s --help» per a obtenir més informació.
 Ulrich Drepper Forma d’ús: %s [OPCIÓ] [CADENA]…
 Forma d’ús: %s [OPCIÓ] [DOMINI_TEXTUAL] IDMSG IDMSG_PLURAL NOMBRE
 Forma d’ús: %s [OPCIÓ] [DOMINI_TEXTUAL] IDMSG
         o: %s [OPCIÓ] -s [IDMSG]…
 En emprar l’opció «--variables», es descartarà l’entrada estàndard i l’eixida
consistirà en les variables referides en la CADENA, una per línia.
 Escrit per %s.
 error en llegir «%s» manquen arguments entrada estàndard sobren arguments error d’escriptura 