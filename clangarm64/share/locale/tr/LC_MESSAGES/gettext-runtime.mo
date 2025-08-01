��    '      T  5   �      `  8   a  B   �  A   �  6     H   V  I   �  F   �  9   0  7   j  6   �  M   �  L   '  O   t  H   �  {        �  �   �  e   p  :   �    	  �  +
  �  
     �     �  <   �  1      &   2     Y  "   h  9   �  I   �  �        �     �     �     �     �     
  �    @   �  G   -  E   u  8   �  P   �  M   E  P   �  H   �  F   -  :   t  T   �  L     O   Q  P   �  �   �     t  �   �  M   t  ,   �  �   �  �  �  �  �          4  S   C  1   �  ,   �     �  .     ;   4  R   p  �   �     u     �     �     �     �     �              !          #                     '                                %                                        
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
PO-Revision-Date: 2020-04-17 13:07+0300
Last-Translator: Mehmet Kececi <mkececi@mehmetkececi.com>
Language-Team: Turkish <gnu-tr-u12a@lists.sourceforge.net>
Language: tr
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=1; plural=0;
X-Generator: Poedit 2.3
X-Bugs: Report translation errors to the Language-Team address.
   -E                        (uyumluluk için göz ardı edildi)
   -V, --version               Sürüm bilgilerini gösterir ve çıkar
   -V, --version             sürüm bilgilerini gösterir ve çıkar
   -c, --context=CONTEXT     MSGID bağlamını belirtin
   -d, --domain=TEXTDOMAIN   TEXTDOMAIN tarafından tercüme edilmiş mesajı al
   -d, --domain=TEXTDOMAIN   tarafından çevrilmiş mesajları al TEXTDOMAIN
   -e                        bazı kaçış dizilerinin genişlemesini sağlamak
   -h, --help                  bu yardım iletisini gösterir ve çıkar
   -h, --help                bu yardım iletisini gösterir ve çıkar
   -n                        izleyen yeni satırı bastır
   -v, --variables             KABUK-BİÇİMİ içindeki değişkenleri çıktılar
   COUNT                     bu değere dayalı tekil/çoğul formları seç
   MSGID MSGID-PLURAL        tercüme et MSGID (tekil) / MSGID-PLURAL (çoğul)
   [TEXTDOMAIN]              TEXTDOMAIN tarafından tercüme edilmiş mesajı al
   [TEXTDOMAIN] MSGID        karşılık gelen çevrilmiş mesajı almak için
                            TEXTDOMAIN'ten MSGID'e
 Bruno Haible Telif Hakkı (C) %s Özgür Yazılım Vakfı Inc.
Lisans GPLv3+: GNU GPL sürüm 3 veya sonrası <%s>
Bu özgür yazılımdır: değiştirip dağıtma özgürlüğüne sahipsiniz.
Yasaların elverdiği ölçüde HİÇBİR GARANTİSİ yoktur.
 Bir sayıya bağlı olarak ilgili tekil/çoğul ileti çevirisini gösterir.
 Bir iletinin anadile çevirisini gösterir.
 PAKET parametresi verilmemişse paket ismi TEXTDOMAIN çevre değişkeninden
saptanır. İleti kataloğu olması gereken dizinde değilse bulunduğu dizin
TEXTDOMAINDIR çevre değişkeni ile belirtilebilir.
Standart arama dizini: %s
 TEXTDOMAIN parametresi belirtilmemişse, alan adı TEXTDOMAIN ortam 
değişkeninden alınır. Mesaj kataloğu geçerli dizinde bulunamazsa, farklı
bir konum TEXTDOMAINDIR ortam değişkeni kullanılarak belirtilebilir.
-s seçeneği ile kullanıldığında, program 'echo' komutu gibi çalışır. Ancak,
argümanlarını sadece stdout'a kopyalamaz. Bunun yerine, seçili katalogta
bulunan mesajlar çevrilir.
Standart arama dizini: %s
 Normal işlem kipinde, $VARIABLE veya ${VARIABLE} biçimindeki ortam
değişkenleri, karşı düşen değerlerle değiştirilerek standart girdi
standart çıktıya kopyalanır. Eğer bir KABUK-BİÇİMİ verilmişse, yalnız
onun içindeki ortam değişkenleri için bu ikame işlemi yapılır.
Aksi takdirde, standart girdideki ortam değişkenlerinin tümüne bu ikame
işlemi uygulanır.
 Bilgilendirici çıktı:
 İşlem kipi:
 Hata izleyicideki hataları <%s>'de bildirin
veya <%s> adresine e-posta gönderin.
 Ortam değişkenlerinin değerleri ikame edilir.
 Daha fazla bilgi için '%s --help' deneyin.
 Ulrich Drepper Kullanımı: %s [SEÇENEK] [KABUK-BİÇİMİ]
 Kullanımı: %s [SEÇENEK] [PAKET] MSGID MSGID-PLURAL SAYI
 Kullanımı: %s [SEÇENEK] [[PAKET] MSGID]
ya da:     %s [SEÇENEK] -s [MSGID]...
 --variables seçeneği kullanılmışsa, standart girdi görmezden gelinir ve
her satırda bir tane olmak üzere KABUK-BİÇİMİ içindeki ortam değişkenleri
çıktılanır.
 %s tarafından yazıldı.
 "%s" okunurken hata argümanlar eksik standart girdi çok fazla argüman yazma hatası 