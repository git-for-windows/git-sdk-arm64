��    ~        �   �      �
     �
  ,   �
      �
  1        9     R  *   q  '   �     �  3   �  T     .   e  4   �  ?   �     	  �     '  �  ?   �  c     X   u  ]   �  O   ,  �  |  '   <     d  ;   w  B   �     �  b        f  #   �  5   
  m   @  ^   �  l     F   z  R   �  I     k   ^  �   �     Y  �   x  �   �     �  ,   �  *   �     #     A     ^     |  "   �  "   �  #   �       >     )   U  $        �     �  D   �     '  *   ?  ;   j     �     �     �     �          #  $   C  $   h     �     �     �     �     �          /     E  .   U  5   �  "   �     �  #   �  *        C  5   Q  ,   �  ,   �     �  F   �     ?     X     s     �     �     �     �     �     �              G   <   .   �   .   �   -   �      !  *   ,!     W!     f!  ;   v!  +   �!  *   �!  '   	"  +   1"     ]"     p"  2   �"  	   �"  +   �"  *   �"  !   #     @#     ^#  1   u#  �  �#     �%  �   �%  &   P&  J   w&  &   �&  .   �&  F   '  8   _'  =   �'  ^   �'  �   5(  �   �(  �   b)  [   !*     }*  �   �*    �+  k   �-  �   .  �   /  �   �/  �   A0     1  T   /4  $   �4  l   �4  {   5     �5  �   �5  �   R6  -   �6  t   (7  �   �7  �   S8  �   �8  }   �9  �   ,:  �   �:  �   A;  �   <  $   �<  �   !=  �  >  ,   �?  Q   �?  W    @  J   x@  9   �@  :   �@  L   8A  O   �A  ;   �A  <   B     NB  ^   ^B  a   �B  C   C  `   cC  >   �C  �   D  9   �D  b   �D  �   TE  @   �E  Q   *F  Q   |F  /   �F  $   �F  C   #G  9   gG  B   �G  .   �G  5   H  %   IH  G   oH  P   �H  *   I  (   3I     \I  J   tI  U   �I  )   J     ?J  E   \J  �   �J     JK  O   _K  g   �K  g   L  2   L  |   �L  J   /M  N   zM  2   �M  O   �M  3   LN     �N  .   �N  .   �N  2   �N  5   1O  5   gO  {   �O  _   P  p   yP  b   �P  K   MQ  X   �Q     �Q     R  ^   0R  N   �R  j   �R  l   IS  q   �S  *   (T  '   ST  m   {T     �T  Z   �T  a   QU  U   �U  4   	V  %   >V  ^   dV     '       Y   `         h   Q   9       W       v   0             V      =       ]   U   {          /   .   7      |   r   6           b   q   m          #       s   5       l           2   G       +   H      	              T   !       f   C   P   "      ~   ;      S   &   3         t   O       B   u   
   A      <       N                               n       w       X   x   F              ,   ?   z   M   R          >   [       :   D          c   p   K   }      y   -   o   e   )   i              J           1           (      $           \   I       *   Z   4   L              _   ^   g   @      j       d       %            k      8   E       a            done.
 %d translated message %d translated messages %s and %s are mutually exclusive %s and explicit file names are mutually exclusive %s is only valid with %s %s is only valid with %s or %s %s requires a "-d directory" specification %s requires a "-l locale" specification %s subprocess I/O error %s: warning: source file contains fuzzy translation %sRead %ld old + %ld reference, merged %ld, fuzzied %ld, missing %ld, obsolete %ld.
 , %d fuzzy translation , %d fuzzy translations , %d untranslated message , %d untranslated messages --join-existing cannot be used when output is written to stdout <stdin> A special builtin command called '0' outputs the translation, followed by a
null byte.  The output of "msgexec 0" is suitable as input for "xargs -0".
 Applies a command to all translations of a translation catalog.
The COMMAND can be any program that reads a translation from standard
input.  It is invoked once for each translation.  Its output becomes
msgexec's output.  msgexec's return code is the maximum return code
across all invocations.
 Applies a filter to all translations of a translation catalog.
 Charset "%s" is not a portable encoding name.
Message conversion to user's charset might not work.
 Charset "%s" is not supported. %s relies on iconv(),
and iconv() does not support "%s".
 Charset "%s" is not supported. %s relies on iconv().
This version was built without iconv().
 Charset missing in header.
Message conversion to user's charset will not work.
 Compare two Uniforum style .po files to check that both contain the same
set of msgid strings.  The def.po file is an existing PO file with the
translations.  The ref.pot file is the last created PO file, or a PO Template
file (generally created by xgettext).  This is useful for checking that
you have translated each and every message in your program.  Where an exact
match cannot be found, fuzzy matching is used to produce better diagnostics.
 Continuing anyway, expect parse errors. Continuing anyway. Convert binary message catalog to Uniforum style .po file.
 Converts a translation catalog to a different character encoding.
 Created %s.
 Creates a new PO file, initializing the meta information with values from the
user's environment.
 Empty msgid.  It is reserved by GNU gettext:
gettext("") returns the header entry with
meta information, not the empty string.
 English translations for %s package Extract translatable strings from given input files.
 Filters the messages of a translation catalog according to their attributes,
and manipulates the attributes.
 Found more than one .pot file.
Please specify the input .pot file through the --input option.
 Found no .pot file in the current directory.
Please specify the input .pot file through the --input option.
 Generate binary message catalog from textual translation description.
 Installing GNU libiconv and then reinstalling GNU gettext
would fix this problem.
 Mandatory arguments to long options are mandatory for short options too.
 Mandatory arguments to long options are mandatory for short options too.
Similarly for optional arguments.
 Output file %s already exists.
Please specify the locale through the --locale option or
the output .po file through the --output-file option.
 Print the machine's hostname.
 The FILTER can be any program that reads a translation from standard input
and writes a modified translation to standard output.
 The following msgid contains non-ASCII characters.
This will cause problems to translators who use a character encoding
different from yours. Consider using a pure ASCII msgid instead.
%s
 Usage: %s [OPTION]
 Usage: %s [OPTION] COMMAND [COMMAND-OPTION]
 Usage: %s [OPTION] FILTER [FILTER-OPTION]
 Usage: %s [OPTION] INPUTFILE
 Usage: %s [OPTION] URL FILE
 Usage: %s [OPTION] [FILE]...
 Usage: %s [OPTION] [INPUTFILE]
 Usage: %s [OPTION] [INPUTFILE]...
 Usage: %s [OPTION] def.po ref.pot
 Usage: %s [OPTION] filename.po ...
 Written by %s.
 a format specification for argument '%s' doesn't exist in '%s' at least one sed script must be specified at least two files must be specified at most one input file allowed cannot create output file "%s" compilation of Java class failed, please try --verbose or set $JAVAC could not get host name domain name "%s" not suitable as file name domain name "%s" not suitable as file name: will use prefix duplicate message definition end-of-file within string end-of-line within string error after reading "%s" error reading "%s" error reading current directory error while opening "%s" for reading error while opening "%s" for writing error while reading "%s" error while writing "%s" file error writing stdout exactly 2 input files required exactly one input file required expected two arguments failed to create "%s" fdopen() failed file "%s" contains a not NUL terminated string file "%s" contains a not NUL terminated string, at %s file "%s" is not in GNU .mo format file "%s" is truncated first plural form has nonzero index found %d fatal error found %d fatal errors iconv failure impossible selection criteria specified (%d < n < %d) incomplete multibyte sequence at end of file incomplete multibyte sequence at end of line inconsistent use of #~ input file doesn't contain a header entry with a charset specification invalid control sequence invalid multibyte sequence invalid nplurals value invalid plural expression keyword "%s" unknown memory exhausted missing command name missing filter name no input file given no input files given not a valid Java class name: %s nplurals = %lu but plural expression can produce values as large as %lu plural expression can produce division by zero plural expression can produce integer overflow plural expression can produce negative values plural form has wrong index plural handling is a GNU gettext extension standard input standard output the argument to %s should be a single punctuation character this file may not contain domain directives this message is used but not defined in %s this message should define plural forms this message should not define plural forms too many arguments too many errors, aborting two different charsets "%s" and "%s" in input file warning:  warning: PO file header missing or invalid
 warning: charset conversion will not work
 warning: this message is not used write to %s subprocess failed write to stdout failed xgettext cannot work without keywords to look for Project-Id-Version: gettext 0.11.5
Report-Msgid-Bugs-To: bug-gettext@gnu.org
PO-Revision-Date: 2002-09-04 18:51+0300
Last-Translator: Ales Nyakhaychyk <i18n@infonet.by>
Language-Team: Belarusian <i18n@tut.by>
Language: be
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
Plural-Forms: nplurals=3; plural=(n%10==1 && n%100!=11 ? 0 : n%10>=2 && n%10<=4 && (n%100<10 || n%100>=20) ? 1 : 2);
  зроблена.
 %d паведамленьне перакладзена %d паведамленьні перакладзена %d паведамленьняў перакладзена %s і %s узаема выключны %s і яўная назва файла ўзаема выключальны %s рэчаісны толькі з %s %s рэчаісны толькі з %s ці %s %s патрабуе "-d дырэкторыя" спэцыфікацыі %s патрабуе "-l locale" спэцыфікацыі падпрацэс %s, памылка ўводу-вываду %s: увага: ізыходны файл змяшчае недакладны пераклад %sПрачытана %ld старых + %ld новых, аб'яднаных %ld, недакладных %ld;
прапушчана %ld, састарэлых %ld.
 ,
%d недакладны пераклад ,
%d недакладных пераклада ,
%d недакладных перакладаў ,
%d неперакладзенае паведамленьне ,
%d неперакладзеных паведамленьні ,
%d неперакладзеных паведамленьняў --joun-existing не можа быць выкарастаны пры запісы ў stdout <stdin> Асабісты ўбудаваны загад, завецца '0', выводзіць пераклад й нулявы байт за ім.
Вывад каманды "msgexec 0" падыходзіць для ўваходу каманды "xargs -0".
 Выконвае загад над усімі перакладамі з каталёгу перакладаў. ЗАГАД можа быць
любой праграмай, якая чытае пераклад са стандартнага ўводу.  Ён заклікаецца
адзін раз для кожнага пераклада.  Яго вывад становіцца вывадам msgexec.
Праграма msgexec вяртае код - гэта найбольшы код вяртаньня паміж усіх выклікаў.
 Прымае фільтар да ўсіх перакладаў зь каталёгу перакладаў.
 Кадзіроўка "%s" не з'яўляецца перанасімай назвай кадзіроўкі.
Пераўтварэньне паведамленьняў у кадзіроўку карыстальніка можа не працаваць
 Кадзіроўка "%s" не падтрымліваецца. %s спадзяецца на iconv(),
але iconv() не падтрымлівае "%s".
 Кадзіроўка "%s" не падтрымліваецца. %s спадзяецца на iconv().
Гэта вэрсія пабудавана без iconv().
 Прапушчан набор сімвалаў ў загалоўке.
Пераўтварэньне паведамленьняў у набор сімвалаў карыстальніка працаваць не будзе.
 Параўноўвае два Uniforum .po файла, каб удакладніць, што абодва зьмяшчаюць
аднолькавыя мноствы радкоў msgid.  Файл def.po - гэта існуючы PO файл зь
перакладамі.  Файл ref.po - гэта апошні створаны PO файл, ці PO шаблён
(звычайна створаны праграмай xgettext).  Гэта карысна для праверкі, што ў
вас перакладзена кожнае паведамленьне з вашае праграмы.  Там, дзе дакладнае
супадзеньне ня будзе знойдзена, выкарыстоўвываецца недакладае - для
лепшай праверкі.
 Працяг выкананьня... чакаюцца памылкі разбору. Працяг выкананьня... Пераўтварае дваічны каталёг паведамленьняў у Uniforum .po файл.
 Пераўтварае каталёг з перакладамі ў розныя сімвальныя кадзіроўкі.
 Створан %s.
 Стварае новы PO файл, задае пачатковыя мэтададзеныя значэньнямі з асяродзьдзя
карыстальніка.
 Пусты msgid.  Зарэзэрваваны GNU gettext:
gettext("") вяртае загаловак зь
метададзенымі, а ня пусты радок.
 Беларускі пераклад для %s Атрымлівае перакладаемыя радкі з дадзеных уваходзячых файлаў.
 Фільтруе паведамленьні каталёга перакладаў суадносна іх атрыбутам, а так сама,
узьдзейнічае на іх
 Знойдзен больш чым адзін .pot файл.
Калі ласка задайце .pot файл уводу з дапамогай выбара --input.
 Ня знойдзен .pot файл у бягучай дырэкторыі.
Калі ласка задайце .pot файл уводу з дапамогай выбара --input.
 Стварае дваічны каталёг паведамленьняў зь іх тэкставага апісаньня.
 Усталяваньне GNU libiconv і пераўсталяваньне GNU gettext
павінна выправіць гэту праблему.
 Аргумэнты, абавязковыя для доўгіх выбараў, абавязковы й для кароткіх.
 Аргумэнты, абавязковыя для доўгх выбараў, абавязковы так сама
і для кароткі.  Тое саме-ж і для выбарачных аргумэнтаў.
 Файл вываду %s ужо існуе.
Калі ласка, задайце мясцовасьць з дапамогай выбару --locale
ці .po файл вываду з дапамогай выбару --output-file.
 Друкуе назву вузла.
 ФІЛЬТРАМ можа быць любая праграма, якая чытае пераклады са стандартнага ўводу
й запісвае зьмененыя пераклады ў стандартны вывад.
 Бягучы msgid зьмяшчае не ASCII сымбалі.
Гэта будзе выклікаць складанасьці ў перакладчыкаў, якія выкарыстоўвываюць
кадзіроўку, якая адрозьніваецца ад вашае. Разглядзіце магчымасьць
выкарыстаньня толькі ASCII сымбаляў у msgid
%s
 Выкарыстаньне: %s [ВЫБАР]
 Выкарыстаньне: %s [ВЫБАР] ЗАГАД [ВЫБАР_ЗАГАДА]
 Выкарыстаньне: %s [ВЫБАР] ФІЛЬТР [ВЫБАРЫ_ФІЛЬТРА]
 Выкарыстаньне: %s [ВЫБАР] УВАХОДЗЯЧЫ_ФАЙЛ
 Выкарыстаньне: %s [ВЫБАР] URL ФАЙЛ
 Выкарыстаньне: %s [ВЫБАР] [ФАЙЛ]...
 Выкарыстаньне: %s [ВЫБАР] [УВАХОДЗЯЧЫ_ФАЙЛ]
 Выкарыстаньне: %s [ВЫБАР] [УВАХОДЗЯЧЫ_ФАЙЛ]...
 Выкарыстаньне: %s [ВЫБАР] def.po ref.pot
 Выкарыстаньне: %s [ВЫБАР] файл.po ...
 Аўтар %s.
 спцэыфікацыя фармату для аргумэнта "%s" ня йснуе ў "%s" па меншай меры адзін sed-скрыпт павінен быць зададзены неабходна задаць не менш двух файлаў па большай частцы адзін уваходзячы файл зацьверджан немагчыма стварыць файл вываду "%s" памылка кампіляцыі Java кляса, калі ласка паспрабуйце --verbose,
ці ўсталяваць пераменную асяроддзя $JAVAC немагчыма атрымаць назву вузла даменная назва "%s" не падыходзіць у якасці назвы файла даменная назва "%s" не падыходзіць у якасці назвы файла;
будзе выкарыстаны прэфікс двайное вызначэньне паведамленьня сімвал канца файла знаходзіцца ўнутры радка сімвал канца радка знаходзіцца ўнутры радка памылка пасля чытаньня "%s" памылка чытаньня "%s" памылка чытаньня бягучай дырэкторыі памылка ў час чытаньня файла "%s" памылка ў час адкрыцця "%s" для запісу памылка ў час чытаньня "%s" памылка ў час запісу файла "%s" памылка запісу ў stdout патрабуецца менавіта 2 уводзячых файла патрабуецца менавіта адзін уваходзячы файл чакалісь два аргумэнты немагчыма стварыць "%s" fdopen() памылка файл "%s" змяшчае радок не завершаны нулём файл "%s" зьмяшчае радок не завершаны нулём, ля %s фармат файла "%s" не GNU .mo файл "%s" абрэзан першая форма ліку мае ненулявы індэкс знойдзена %d фатальная памылка знойдзена %d фатальныя памылкі знойдзена %d фатальных памылак памылка iconv зададзен немагчымы крытэрый выбару (%d < n < %d) няпоўная шматбайтная пасьлядоўнасьць на прыканцы файла няпоўная шматбайтная пасьлядоўнасьць на прыканцы радка несумяшчальнае ўжываньне #~ уваходзячы файл не змяшчае загаловачнага запісу аб наборы сімвалаў нерэчаісная кантралюючая паслядоўнасць нерэчаісная шматсімвальная паслядоўнасць нерэчаіснае значэньне nplurals нерэчаісны выраз формы мнножнага ліку (plural) невядомае ключавое слова "%s" памяць вычарпана прапушчана назва каманды прапушчана назва фільтра невызначан уваходзячы файл не зададзены ўводзячыя файлы нерэчаісная назва Java-класа: %s nplurals = %lu але выраз множнага ліку можа ўтвараць значэньні такія як %lu выраз множнага ліку можа ўтвараць дзяленьне на нуль выраз множнага ліку можа ўтвараць цэлалікавае перапаўненьне выраз множнага ліку можа ўтвараць адмоўнае значэньне формы множнага ліку маюць дрэнныі індэкс апрацоўка множнага ліку - гэта пашырэньне GNU gettext стандартны ўвод стандартны вывад аргумэнт %s павінен быць адзіночным знакам прыпынку гэты файл можа не змяшчаць дырэктыў дамену гэта паведамленьне выкарыстоўваецца, але не вызначана ў %s гэтае паведамленьне павінна вызначаць хормы множнага ліка гэтае паведамленьне не павінна вызначаць хормы множнага ліка вельмі шмат аргумэнтаў вельмі шмат памылак... уваходзячы файл зьмяшчае два розных набора сімвалаў "%s" і "%s" увага:  увага: загаловак PO-файла прапушчан ці нерэчаісны
 увага: пераўтварэньне кадзіровак не будзе працаваць
 увага: гэта паведамленьне не выкарыстоўваецца памылка запісу ў падпрацэс %s памылка запісу ў stdout xgettext не можа працаваць без ключавых слоў для пошуку 