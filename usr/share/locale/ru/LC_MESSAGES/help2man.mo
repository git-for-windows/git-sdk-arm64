��    2      �  C   <      H     I     O     k  !   �     �     �     �  &   �          #  �   0  �   �  �   �  	   k     u     �     �     �     �     �     �  w  �     /	     5	  "   C	  �   f	     
     "
     *
  �   2
  �   �
  �   u     b  1   q     �     �     �  �   �  B   �  1   �     %  5   >     t     z     �  �  �  )   s     �     �    �     �  8   �  .   �  N   +  2   z  .   �  (   �  K     
   Q     \  -  s  V  �    �  	             /     B     Q     d  
   s  
   ~  5  �     �     �  O   �  ]  8     �     �     �  ^  �  �   "!  [  "  &   p#  9   �#     �#  
   �#  4   �#  '  -$  i   U%  K   �%      &  o   ,&     �&  /   �&     �&  �  �&  U   u/     �/     �/                       	   (                                             1   +   2   -          
      &      %   #          $                   !               0                  *   '                   "   ,           .   )            /    %B %Y %s \- manual page for %s %s %s: can't create %s (%s) %s: can't get `%s' info from %s%s %s: can't open `%s' (%s) %s: can't unlink %s (%s) %s: error writing to %s (%s) %s: no valid information found in `%s' AUTHOR AVAILABILITY Additional material may be included in the generated output with the
.B \-\-include
and
.B \-\-opt\-include
options.  The format is simple:

    [section]
    text

    /pattern/
    text
 Any
.B [NAME]
or
.B [SYNOPSIS]
sections appearing in the include file will replace what would have
automatically been produced (although you can still override the
former with
.B \-\-name
if required).
 Blocks of verbatim *roff text are inserted into the output either at
the start of the given
.BI [ section ]
(case insensitive), or after a paragraph matching
.BI / pattern /\fR.
 COPYRIGHT DESCRIPTION ENVIRONMENT EXAMPLES Environment Examples FILES Files GNU %s %s

Copyright (C) 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2009,
2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2020, 2021, 2022 Free Software
Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

Written by Brendan O'Dea <bod@debian.org>
 Games INCLUDE FILES Include file for help2man man page Lines before the first section or pattern which begin with `\-' are
processed as options.  Anything else is silently ignored and may be
used for comments, RCS keywords and the like.
 NAME OPTIONS Options Other sections are prepended to the automatically produced output for
the standard sections given above, or included at
.I other
(above) in the order they were encountered in the include file.
 Patterns use the Perl regular expression syntax and may be followed by
the
.IR i ,
.I s
or
.I m
modifiers (see
.BR perlre (1)).
 Placement of the text within the section may be explicitly requested by using
the syntax
.RI [< section ],
.RI [= section ]
or
.RI [> section ]
to place the additional text before, in place of, or after the default
output respectively.
 REPORTING BUGS Report +(?:[\w-]+ +)?bugs|Email +bug +reports +to SEE ALSO SYNOPSIS System Administration Utilities The full documentation for
.B %s
is maintained as a Texinfo manual.  If the
.B info
and
.B %s
programs are properly installed at your site, the command
.IP
.B info %s
.PP
should give you access to the complete manual.
 The latest version of this distribution is available on-line from: The section output order (for those included) is: This +is +free +software Try `--no-discard-stderr' if option outputs to stderr Usage User Commands Written +by `%s' generates a man page out of `--help' and `--version' output.

Usage: %s [OPTION]... EXECUTABLE

 -n, --name=STRING       description for the NAME paragraph
 -s, --section=SECTION   section number for manual page (1, 6, 8)
 -m, --manual=TEXT       name of manual (User Commands, ...)
 -S, --source=TEXT       source of program (FSF, Debian, ...)
 -L, --locale=STRING     select locale (default "C")
 -i, --include=FILE      include material from `FILE'
 -I, --opt-include=FILE  include material from `FILE' if it exists
 -o, --output=FILE       send output to `FILE'
 -p, --info-page=TEXT    name of Texinfo manual
 -N, --no-info           suppress pointer to Texinfo manual
 -l, --libtool           exclude the `lt-' from the program name
     --help              print this help, then exit
     --version           print version number, then exit

EXECUTABLE should accept `--help' and `--version' options and produce output on
stdout although alternatives may be specified using:

 -h, --help-option=STRING     help option string
 -v, --version-option=STRING  version option string
 --version-string=STRING      version string
 --no-discard-stderr          include stderr when parsing option output

Report bugs to <bug-help2man@gnu.org>.
 help2man \- generate a simple manual page or other Project-Id-Version: help2man 1.47.17
Report-Msgid-Bugs-To: Brendan O'Dea <bug-help2man@gnu.org>
PO-Revision-Date: 2022-02-15 12:50+1100
Last-Translator: Yuri Kozlov <yuray@komyakino.ru>
Language-Team: Russian <gnu@d07.ru>
Language: ru
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
X-Generator: Lokalize 20.12.0
Plural-Forms:  nplurals=3; plural=(n%10==1 && n%100!=11 ? 0 : n%10>=2 && n%10<=4 && (n%100<10 || n%100>=20) ? 1 : 2);
 %x %s \- справочная страница для %s %s %s: не удалось создать %s (%s) %s: не удалось получить информацию «%s» из %s%s %s: не удалось открыть «%s» (%s) %s: не удалось удалить %s (%s) %s: ошибка записи в %s (%s) %s: не найдено допустимой информации в «%s» АВТОР ДОСТУПНОСТЬ В генерируемый результат может быть включён дополнительный материал
с помощью параметра
.B \-\-include
и
.BR \-\-opt\-include .
Формат прост:

    [раздел]
    текст

    /шаблон/
    текст
 Любые появляющиеся во включаемом файле разделы
.B [ИМЯ]
или
.B [ОБЗОР]
будут заменены на автоматически создаваемые
(хотя вы всё равно можете перезаписать первый
с помощью параметра
.B \-\-name
).
 Блоки *roff текста вставляются в результат дословно или в
начало заданного
.BI [ раздела ]
(регистр неважен), или после параграфа, подходящего под
.BI / шаблон /\fR.
 COPYRIGHT ОПИСАНИЕ ОКРУЖЕНИЕ ПРИМЕРЫ Окружение Примеры ФАЙЛЫ Файлы GNU %s %s

Copyright (C) 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2009,
2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2020, 2021, 2022 Free Software
Foundation, Inc.
Это свободное ПО; условия копирования см. в исходном коде.
Нет НИКАКИХ ГАРАНТИЙ; даже подразумеваемыми гарантиями
КОММЕРЧЕСКОЙ ЦЕННОСТИ и ПРИГОДНОСТИ ДЛЯ КОНКРЕТНОЙ ЦЕЛИ.

Автор: Брэндон О'Ди (Brendan O'Dea) <bod@debian.org>
 Игры ВКЛЮЧЁННЫЕ ФАЙЛЫ Включаемый файл в справочную страницу help2man Строки перед первым разделом или шаблоном, который начинается с «\-»
обрабатываются как параметры. Всё остальное просто игнорируется и может
быть использованы как комментарии, ключи RCS и т.д.
 ИМЯ ПАРАМЕТРЫ Параметры Другие разделы добавляются к автоматически созданным
стандартным разделам, указанным ранее, или включаются на место
.I другого
(выше) в порядке, в котором они расположены во включаемом файле.
 В шаблонах используется синтаксис регулярных выражений Perl, и они могут
указываться после модификаторов
.IR i ,
.I s
или
.I m
(см.
.BR perlre (1)).
 Текст можно размещать внутри раздела с помощью:
.RI [< раздел ],
.RI [= раздел ]
или
.RI [> раздел ]
(для размещения дополнительного текста перед, вместо или после
вывода по умолчанию, соответственно).
 СООБЩЕНИЯ ОБ ОШИБКАХ Об ошибках сообщайте по адресу: СМОТРИТЕ ТАКЖЕ ОБЗОР Утилиты управления системой Полная документация на
.B %s
ведётся в справочнике Texinfo. Если программы
.B info
и
.B %s
установлены, то по команде
.IP
.B info %s
.PP
можно получить доступ к полному справочнику.
 Последняя версия этого дистрибутива доступна под адресу: Порядок вывода разделов (для включённых): Это +свободное +ПО Попробуйте --no-discard-stderr, если параметр выводит результат в stderr Использование Пользовательские команды Автор: %s генерирует справочную страницу исходя из результатов --help и --version.

Использование: %s [ПАРАМЕТР]... ИСПОЛНЯЕМЫЙ_ФАЙЛ

 -n, --name=СТРОКА       описание для параграфа ИМЯ
 -s, --section=РАЗДЕЛ    номер раздела справочной страницы (1, 6, 8)
 -m, --manual=ТЕКСТ      имя справочника (Пользовательские команды, ...)
 -S, --source=ТЕКСТ      источник программы (FSF, Debian, ...)
 -L, --locale=СТРОКА     задать локаль (по умолчанию «C»)
 -i, --include=ФАЙЛ      включить материал из ФАЙЛА
 -I, --opt-include=ФАЙЛ  включить материал из ФАЙЛА, если он есть
 -o, --output=ФАЙЛ       записать результат в ФАЙЛ
 -p, --info-page=ТЕКСТ   имя справочника Texinfo
 -N, --no-info           не выдавать указатель на справочник Texinfo
 -l, --libtool           исключить lt- из имени программы
     --help              показать эту справку и закончить работу
     --version           показать номер версии и закончить работу

ИСПОЛНЯЕМЫЙ_ФАЙЛ должен принимать параметры --help и --version и выдавать
результат в стандартный вывод, но можно указать альтернативные параметры:

 -h, --help-option=СТРОКА     строка параметра для получения справки
 -v, --version-option=СТРОКА  строка параметра для получения версии
 --version-string=СТРОКА      строка версии
 --no-discard-stderr          анализировать stderr при разборе
                              результатов параметра

Об ошибках сообщайте по адресу: <bug-help2man@gnu.org>.
 help2man \- генерирует простую справочную страницу или другой 