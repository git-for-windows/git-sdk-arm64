��    H      \  a   �         8   !  B   Z  A   �  7   �  6     H   N  I   �  F   �  9   (  7   b  6   �  M   �  7   	  L   W	  C   �	  *   �	  A   
  O   U
  H   �
  {   �
     j  "   �  �  �     �  �   �  e   }  :   �  �        �  y   �    9  �  S  �  2  M   �  T     N   h     �  �   �     �     �  �   �  `   H  <   �  1   �  [     &   t  9   �    �  �   �  -   t  4   �  u   �  t   M  r   �      5  &   V     }  <   �  (   �  "   �  9     I   O  �   �     7      G      `      r      �      �   4   �      �   �  �   _   �"  f   $#  d   �#  Z   �#  Q   K$  �   �$  �   +%  �   �%  a   A&  _   �&  e   '  m   i'  ^   �'  ~   6(  u   �(  F   +)  ~   r)  f   �)  �   X*  �   �*  L   �+  A   �+  �  ?,     �2  �  �2  �   �4  U   j5  7  �5  #   �6  �   7    �7  \   :  �  ]=  v   �?  �   V@  �   �@  '   qA  �  �A     *C  *   DC  �   oC  �   DD  �   �D  E   �E  �   �E  S   tF  �   �F    IG  ,  RI  F   J  g   �J  �   .K  �   L  �   �L  O   �M  W   N     [N  �   jN  S   �N  ?   AO  h   �O  �   �O  �   rP  "   oQ  )   �Q  #   �Q  6   �Q     R  ,   7R  l   dR     �R        
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
PO-Revision-Date: 2025-07-04 19:21+0300
Last-Translator: Yuri Chornoivan <yurchor@ukr.net>
Language-Team: Ukrainian <trans-uk@lists.fedoraproject.org>
Language: uk
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
X-Generator: Lokalize 23.04.3
Plural-Forms: nplurals=1; plural=0;
   -E                        (буде проігноровано, для сумісності)
   -V, --version               вивести інформацію про версію та вийти
   -V, --version             вивести інформацію про версію та вийти
   -c, --context=КОНТЕКСТ    вказати контекст для ФОРМАТУ
   -c, --context=КОНТЕКСТ    вказати контекст для MSGID
   -d, --domain=TEXTDOMAIN   отримати перекладене повідомлення з текстового домену TEXTDOMAIN
   -d, --domain=TEXTDOMAIN   отримати перекладені повідомлення з текстового домену TEXTDOMAIN
   -e                        увімкнути розгортання деяких послідовностей екранування
   -h, --help                  вивести довідку та завершити роботу
   -h, --help                вивести довідку та завершити роботу
   -n                        придушити кінцевий символ нового рядка
   -v, --variables             виводити змінні, що зустрічаються у SHELL-FORMAT
   АРГУМЕНТ                  рядковий або числовий аргумент
   КІЛЬКІСТЬ                 вибрати однину/множину на основі цього значення
   ФОРМАТ                    форма однини рядка форматування англійською
   ФОРМАТ                    рядок форматування
   ФОРМАТ-МНОЖИНИ            форма множини рядка форматування англійською
   MSGID MSGID-PLURAL        перекласти MSGID (однина) / MSGID-PLURAL (множина)
   [TEXTDOMAIN]              отримати перекладене повідомлення з текстового домену TEXTDOMAIN
   [TEXTDOMAIN] MSGID        отримати перекладене повідомлення відповідно до
                            MSGID з текстового домену TEXTDOMAIN
 %s: мало бути використано числове значення %s: значення перетворене не повністю Інструкція, що використовує аргумент
  - починається з «%s» або «%s», де %s є додатним цілим числом,
  - з можливими наступними символами: «%c», «%c», «%c», «%c», «%c»,
    кожен з яких працює як прапорець,
  - з можливою наступною специфікацією ширини (невід'ємним цілим числом),
  - з можливим наступним «%c» та специфікацією точності (необов'язковим
    невід'ємним числом),
  - завершується специфікатором
      - «%c», що виводить символ,
      - «%c», що виводить рядок,
      - «%c», «%c», що виводить ціле число,
      - «%c», «%c», «%c», «%c», що виводить ціле число без знаку (невід'ємне),
      - «%c», «%c», що виводить число з рухомою крапкою в інженерному позначенні,
      - «%c», «%c», що виводить число з рухомою крапкою без показникової частини,
      - «%c», «%c», що виводить число з рухомою крапкою у загальному позначенні,
      - «%c», «%c», що виводить число з рухомою крапкою у шістнадцятковому позначенні.
Крім того передбачено інструкцію «%s», що виводить одинарний «%c».
 Bruno Haible Авторські права належать Free Software Foundation, Inc., %s
Умови ліцензування викладено у GPLv3+: GNU GPL версії 3 або новішій, <%s>
Це вільне програмне забезпечення: ви можете вільно змінювати і поширювати його.
Вам не надається ЖОДНИХ ГАРАНТІЙ, окрім гарантій передбачених законодавством.
 Відображає переклад текстового повідомлення, граматична форма якого залежить
від числа.
 Відображає переклад текстового повідомлення.
 Кожен рядок форматування складається з
  - простого тексту,
  - інструкцій, що починаються з «%c»,
  - екранованих послідовностей, які починаються зі зворотної похилої риски.
 Змінні середовища:
 Інструкція задає аргумент за його номером (позначення «%s»),
так має бути в усіх інструкціях, де використовується аргумент.
 Якщо параметр ДОМЕН_ТЕКСТУ не вказаний, використовується домен, визначений у
змінній середовища TEXTDOMAIN. Якщо файл з перекладеними повідомленнями
відсутній у стандартному каталозі, можна вказати інший каталог за допомогою
змінної середовища TEXTDOMAINDIR.
Стандартний каталог пошуку: %s
 Якщо не вказаний параметр ДОМЕН_ТЕКСТУ, використовується домен, встановлений
у змінній середовища TEXTDOMAIN. Якщо файл з перекладеними повідомленнями
відсутній у типовому каталозі, можна вказати інший каталог за допомогою
змінної середовища TEXTDOMAINDIR.
При використанні з ключем -s, поведінка програми схожа на поведінку програми
«echo». Але замість простого копіювання аргументів у стандартний вивід,
виводяться їх переклади з вказаного домену.
Стандартний каталог пошуку: %s
 У звичайному режимі роботи, стандартний ввід копіюється на стандартний вивід,
де посилання на змінні середовища у формі $VARIABLE або ${VARIABLE}, 
замінюються відповідними значеннями. Якщо вказано SHELL-FORMAT,
будуть замінюватись лише змінні, що вказані у SHELL-FORMAT; у іншому
випадку будуть замінюватись усі змінні середовища, що зустрічаються у
стандартному вводі.
 В директиві з номером %zu, аргумент з номером 0 не є додатнім цілим. У директиві з номером %zu, символ «%c» не є допустимою специфікацією перетворення. У директиві з номером %zu прапорець «%c» є некоректним для перетворення «%c». Інформативний вивід:
 Пошук відбуватиметься у каталозі каталогів, що задається змінною середовища
%s або, якщо змінну не задано, у типовому каталозі каталогів.
Цей виконуваний файл налаштовано на використання типового каталогу каталогів:
%s
 Режим роботи:
 Параметри і аргументи:
 Виводить форматовані дані, застосовуючи переклад ФОРМАТУ
та ФОРМАТУ-МНОЖИНИ, залежно від КІЛЬКОСТІ, до АРГУМЕНТІВ.
 Виводить форматовані дані, застосовуючи переклад ФОРМАТУ
до АРГУМЕНТІВ.
 Про вади слід повідомляти за допомогою системи стеження за вадами: <%s>
або електронною поштою на адресу <%s>.
 Замінює значення змінних середовища.
 Символ, що завершує директиву з номером %zu не є допустимою специфікацією перетворення. Екранована послідовність «%c%c» є некоректною. Підтримки екранованої послідовності «%c%c» не передбачено (немає у POSIX). Екранованими послідовностями є такі:

  %s      зворотна похила риска
  %s      дзвінок (BEL)
  %s      забій (BS)
  %s      заповнення форми (FF)
  %s      розрив рядка (LF)
  %s      повернення каретки (CR)
  %s      горизонтальна табуляція (HT)
  %s      вертикальна табуляція (VT)
  %s    вісімкове число з від 1 до 3 вісімкових цифр
 Рядок форматування складається з
  - простого тексту,
  - інструкцій, що починаються з «%c»,
  - екранованих послідовностей, які починаються зі зворотної похилої риски.
 Рядок закінчується посеред директиви. Рядок завершився посередині екранованої послідовності. Рядок посилається на аргументи як через абсолютні номери аргументів, так і через не нумеровані специфікації аргументів. Для рядка форматування у перекладі потрібні %zu аргументів, а у початковому рядку форматування потрібно лише %zu аргументів. Пошук перекладу рядка форматування відбуватиметься у домені перекладу,
що задається змінною середовища %s.
 Ця екранована послідовність є некоректною. Віддайте команду «%s --help», щоб дізнатися більше.
 Ulrich Drepper Користування: %s [ПАРАМЕТР] ФОРМАТ ФОРМАТ-МНОЖИНИ КІЛЬКІСТЬ [АРГУМЕНТ]...
 Користування: %s [ПАРАМЕТР] ФОРМАТ [АРГУМЕНТ]...
 Використання: %s [ПАРАМЕТР] [SHELL-FORMAT]
 Використання: %s [ПАРАМЕТР] [ДОМЕН_ТЕКСТУ] MSGID MSGID-PLURAL ЧИСЛО
 Використання: %s [ПАРАМЕТР] [[ДОМЕН_ТЕКСТУ] MSGID]
або:          %s [ПАРАМЕТР] -s [MSGID]...
 При використанні --variables, стандартний ввід ігнорується, а вивід
складається зі змінних середовища, які вказані у SHELL-FORMAT, по одній на рядок.
 Автор програми - %s.
 помилка при читанні "%s" відсутні аргументи пропущено рядок форматування стандартний ввід надто багато аргументів попередження: зайві аргументи проігноровані, починаючи з %s помилка запису 