��   �   0   X  �   �
     �             4  �   5  7    -   ?  F   m     �     �  7   �  �     �   �  I   �  �     N  �  �   �  H   ~     �  �   G  >   �  9   #  �   ]  �   �  �   u  �   �  �   �  �   \          :  .   L  6   {     �     �     �     �  !   �  !     '   8     `     �     �  /   �  %   �       /   '  ,   W     �  4   �  $   �     �           .      F      _       |       �      �   :   �   &   !  $   3!     X!  2   s!     �!  $   �!  /   �!     "     ,"  3   B"  =   v"  6   �"  d   �"      P#     q#     w#     ~#      �#  O   �#     �#     �#     $  
   $     $  .   !$  /   P$     �$     �$  A   �$  0   �$  .   %     N%  0   [%  )   �%     �%     �%     �%     �%     �%  ;   &  <   N&  8   �&  6   �&     �&     '     '     $'     :'     A'  (   V'  I   '  !   �'     �'     �'  9   (     =(     X(     m(     �(  0   �(     �(     �(     �(     �(     �(      )  Z   )  �   b)  -   *     3*     E*     L*     \*  @   e*  8   �*  P   �*  >   0+  /   o+  7   �+  D   �+  &   ,  	   C,     M,     U,  
   b,     m,     �,     �,  
   �,  
   �,  
   �,  
   �,  
   �,  	   �,  	   �,  	   �,  	   �,  	   -  	   -  	   -  "   #-  *   F-     q-  A   �-  Q   �-  *   .     D.  !   \.     ~.  �  �.  �   #0  �  !1  6   �4  P   �4     65     T5  6   k5  �   �5  �   �6  O   �7  �   �7  �  o8  �   �9  s   �:  �   ;  �   �;  M   E<  @   �<  �   �<  �   �=  �   6>    �>  �   �?  �   �@  %   �A     �A  %   �A  H   �A     'B     ;B     RB     WB  "   qB  #   �B  %   �B  %   �B  $   C     )C  A   GC  1   �C     �C  :   �C  2   D     8D  <   RD  )   �D     �D  !   �D     �D     E     6E  !   PE  (   rE     �E  K   �E  *   �E  :   (F     cF  2   �F  #   �F  .   �F  1   G     :G      PG  /   qG  P   �G  C   �G  s   6H     �H     �H     �H     �H  %   �H  N   I     UI     ]I  	   fI     pI     }I  2   �I  2   �I  "   �I     J  I   .J  =   xJ  F   �J     �J  L   K  9   ZK     �K     �K     �K     �K     �K  ?   L  B   LL  C   �L  >   �L     M     1M     =M     DM     VM     _M  -   }M  X   �M  .   N  	   3N     =N  F   MN  &   �N     �N  ,   �N     O  A   O     PO     TO  %   dO     �O     �O     �O  q   �O  �   P  :   �P     �P     
Q     Q  
   !Q  K   ,Q  ?   xQ  Y   �Q  E   R  3   XR  3   �R  V   �R  (   S     @S  
   LS     WS     gS     wS     �S     �S     �S     �S     �S     �S     �S     �S     �S     �S     �S     �S     �S     �S  (   �S  :   T     UT  S   pT  v   �T  -   ;U  ,   iU  '   �U     �U     �   @         
   G   e   t   �                     �   T   "   K   :   �   s       2   �      b   -   i      h   z   {       8   _           F       4          �   J       =       �   �   w          Z      9   7       c              <       	   |   �   �   y   v          $   \   m   Q           C   I       `   +      >                  P          }           o   1   �   #   l       u   V       �   k   g      �      �       r   W      �   .       q   '   A           0   3   �   /   5       Y       B           �   ~   ]   D                  �          �      U               �   n   �      �   )   S   �   �      ?   R   ^   d   �      j   �   ,               X   �          �               f   �      �           x   !           �          �   N   [   a   O   6   �      E   �   �              %      &   H   �   M   L   �   (       *   ;       �   p      �U       �U         
   �����U  	       #   ���� 
  --delta[=OPTS]      Delta filter; valid OPTS (valid values; default):
                        dist=NUM   distance between bytes being subtracted
                                   from each other (1-256; 1) 
  --lzma1[=OPTS]      LZMA1 or LZMA2; OPTS is a comma-separated list of zero or
  --lzma2[=OPTS]      more of the following options (valid values; default):
                        preset=PRE reset options to a preset (0-9[e])
                        dict=NUM   dictionary size (4KiB - 1536MiB; 8MiB)
                        lc=NUM     number of literal context bits (0-4; 3)
                        lp=NUM     number of literal position bits (0-4; 0)
                        pb=NUM     number of position bits (0-4; 2)
                        mode=MODE  compression mode (fast, normal; normal)
                        nice=NUM   nice length of a match (2-273; 64)
                        mf=NAME    match finder (hc3, hc4, bt2, bt3, bt4; bt4)
                        depth=NUM  maximum search depth; 0=automatic (default) 
 Basic file format and compression options:
 
 Custom filter chain for compression (alternative for using presets): 
 Operation modifiers:
 
 Other options:
 
With no FILE, or when FILE is -, read standard input.
       --block-size=SIZE
                      start a new .xz block after every SIZE bytes of input;
                      use this to set the block size for threaded compression       --flush-timeout=TIMEOUT
                      when compressing, if more than TIMEOUT milliseconds has
                      passed since the previous flush and reading more input
                      would block, all pending data is flushed out       --ignore-check  don't verify the integrity check when decompressing       --info-memory   display the total amount of RAM and the currently active
                      memory usage limits, and exit       --memlimit-compress=LIMIT
      --memlimit-decompress=LIMIT
      --memlimit-mt-decompress=LIMIT
  -M, --memlimit=LIMIT
                      set memory usage limit for compression, decompression,
                      threaded decompression, or all of these; LIMIT is in
                      bytes, % of RAM, or 0 for defaults       --no-adjust     if compression settings exceed the memory usage limit,
                      give an error instead of adjusting the settings downwards       --robot         use machine-parsable messages (useful for scripts)       --single-stream decompress only the first stream, and silently
                      ignore possible remaining input data   -0 ... -9           compression preset; default is 6; take compressor *and*
                      decompressor memory usage into account before using 7-9!   -Q, --no-warn       make warnings not affect the exit status   -V, --version       display the version number and exit   -e, --extreme       try to improve compression ratio by using more CPU time;
                      does not affect decompressor memory requirements   -h, --help          display the short help (lists only the basic options)
  -H, --long-help     display this long help and exit   -h, --help          display this short help and exit
  -H, --long-help     display the long help (lists also the advanced options)   -k, --keep          keep (don't delete) input files
  -f, --force         force overwrite of output file and (de)compress links
  -c, --stdout        write to standard output and don't delete input files   -q, --quiet         suppress warnings; specify twice to suppress errors too
  -v, --verbose       be verbose; specify twice for even more verbose   -z, --compress      force compression
  -d, --decompress    force decompression
  -t, --test          test compressed file integrity
  -l, --list          list information about .xz files   Minimum XZ Utils version: %s
  Operation mode:
 %s MiB of memory is required. The limit is %s. %s MiB of memory is required. The limiter is disabled. %s file
 %s files
 %s home page: <%s>
 %s:  %s: Cannot remove: %s %s: Cannot set the file group: %s %s: Cannot set the file owner: %s %s: Cannot set the file permissions: %s %s: Closing the file failed: %s %s: Error reading filenames: %s %s: Error seeking the file: %s %s: File has setuid or setgid bit set, skipping %s: File has sticky bit set, skipping %s: File is empty %s: File seems to have been moved, not removing %s: Filename has an unknown suffix, skipping %s: Filter chain: %s
 %s: Input file has more than one hard link, skipping %s: Invalid argument to --block-list %s: Invalid filename suffix %s: Invalid multiplier suffix %s: Invalid option name %s: Invalid option value %s: Is a directory, skipping %s: Is a symbolic link, skipping %s: Not a regular file, skipping %s: Read error: %s %s: Seeking failed when trying to create a sparse file: %s %s: Too many arguments to --block-list %s: Too small to be a valid .xz file %s: Unexpected end of file %s: Unexpected end of input when reading filenames %s: Unknown file format type %s: Unsupported integrity check type %s: Value is not a non-negative decimal integer %s: Write error: %s %s: poll() failed: %s --list does not support reading from standard input --list works only on .xz files (--format=xz or --format=auto) 0 can only be used as the last element in --block-list Adjusted LZMA%c dictionary size from %s MiB to %s MiB to not exceed the memory usage limit of %s MiB Amount of physical memory (RAM): Block Blocks Blocks: Cannot establish signal handlers Cannot read data from standard input when reading filenames from standard input Check Check: CheckVal CompOffset CompSize Compressed data cannot be read from a terminal Compressed data cannot be written to a terminal Compressed data is corrupt Compressed size: Compression and decompression with --robot are not supported yet. Compression of lzip files (.lz) is not supported Compression support was disabled at build time Compression: Decompression support was disabled at build time Decompression will need %s MiB of memory. Decompression: Default for -T0: Disabled Empty filename, skipping Error creating a pipe: %s Error getting the file status flags from standard input: %s Error getting the file status flags from standard output: %s Error restoring the O_APPEND flag to standard output: %s Error restoring the status flags to standard input: %s File format not recognized Filters Flags Hardware information: Header Internal error (bug) LZMA1 cannot be used with the .xz format Mandatory arguments to long options are mandatory for short options too.
 Maximum number of filters is four MemUsage Memory needed: Memory usage limit is too low for the given filter setup. Memory usage limit reached Memory usage limits: Multi-threaded decompression: No No integrity check; not verifying file integrity None Number of files: Number of processor threads: Padding Ratio Ratio: Reduced the number of threads from %s to %s to not exceed the memory usage limit of %s MiB Reduced the number of threads from %s to one. The automatic memory usage limit of %s MiB is still being exceeded. %s MiB of memory is required. Continuing anyway. Report bugs to <%s> (in English or Finnish).
 Sizes in headers: Stream Stream Padding: Streams: Strms  Blocks   Compressed Uncompressed  Ratio  Check   Filename Switching to single-threaded mode due to --flush-timeout Switching to single-threaded mode to not exceed the memory usage limit of %s MiB THIS IS A DEVELOPMENT VERSION NOT INTENDED FOR PRODUCTION USE. The .lzma format supports only the LZMA1 filter The environment variable %s contains too many arguments The exact options of the presets may vary between software versions. The sum of lc and lp must not exceed 4 TotalSize Totals: UncompOffset UncompSize Uncompressed size: Unexpected end of input Unknown error Unknown-11 Unknown-12 Unknown-13 Unknown-14 Unknown-15 Unknown-2 Unknown-3 Unknown-5 Unknown-6 Unknown-7 Unknown-8 Unknown-9 Unsupported LZMA1/LZMA2 preset: %s Unsupported filter chain or filter options Unsupported options Unsupported type of integrity check; not verifying file integrity Usage: %s [OPTION]... [FILE]...
Compress or decompress FILEs in the .xz format.

 Using a preset in raw mode is discouraged. Using up to %u threads. Writing to standard output failed Yes Project-Id-Version: xz 5.4.0-pre2
Report-Msgid-Bugs-To: xz@tukaani.org
PO-Revision-Date: 2022-12-05 19:00+0300
Last-Translator: Emir SARI <emir_sari@icloud.com>
Language-Team: Turkish <gnome-turk@gnome.org>
Language: tr
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
Plural-Forms: nplurals=2; plural=(n > 1);
 
  --delta[=SÇNKLR]    Delta süzgeci; geçerli SÇNKLR (geçerli değerler;
                        öntanımlı):
                        dist=NUM   birbirinden çırakılar baytlar arasındaki
                                     uzaklık (1-256; 1) 
  --lzma1[=SÇNKLR]    LZMA1 veya LZMA2; OPTS, sıfır veya aşağıdaki
  --lzma2[=SÇNKLR]    seçeneklerin virgülle ayrılmış değerleridir (geçerli
                      değerler; öntanımlı):
                        preset=ÖNA seçenekleri bir önayara sıfırla (0-9[e])
                        dict=NUM   sözlük boyutu (4KiB - 1536MiB; 8MiB)
                        lc=NUM     düz bağlam bitlerinin sayısı (0-4; 3)
                        lp=NUM     düz konum bitlerinin sayısı (0-4; 0)
                        pb=NUM     konum bitlerinin sayısı (0-4; 2)
                        mode=KİP   sıkıştırma kipi (fast, normal; normal)
                        nice=NUM   bir eşleşmenin öncelik uzunluğu (2-273; 64)
                        mf=AD      eşleşme bul (hc3, hc4, bt2, bt3, bt4; bt4)
                        depth=NUM  en büyük arama derinliği; 0=oto (öntanımlı) 
 Temel dosya biçimi ve sıkıştırma seçenekleri:
 
 Sıkıştırma için özel süzgeç zinciri (önayar kullanımı alternatifi): 
 İşlem değiştiricileri:
 
 Diğer seçenekler:
 
DSYA olmadan veya DSYA - iken standart girdi'yi oku.
       --block-size=BOYUT
                      her BOYUT bayt girdiden sonra yeni bir .xz bloku başlat;
                        iş parçacığı kullanan sıkıştırma için blok boyutunu
                        ayarlamak için bunu kullanın       --flush-timeout=ZAMANAŞIMI
                      sıkıştırırken, bir önceki floştan bu yana ZAMANAŞIMI
                        milisaniye geçmişse ve daha çok girdi okuma bloklarsa
                        tüm bekleyen veri floşlanır       --ignore-check  sıkıştırma açarken bütünlük denetimini doğrulama       --info-memory   toplam RAM miktarını ve şu anki bellek kullanımı
                        sınırlarını görüntüle ve çık       --memlimit-compress=LİMİT
      --memlimit-decompress=LİMİT
      --memlimit-mt-decompress=LİMİT
  -M, --memlimit=LİMİT
                      sıkıştırma, sıkıştırma açma, iş parçacıklı sıkıştırma
                        açma veya tümü için bellek kullanımı sınırını ayarla;
                        LİMİT, bayt, RAM % veya öntanımlılar için 0'dır       --no-adjust     sıkıştırma ayarları bellek kullanımı sınırını aşarsa
                        ayarı aşağı doğru düzeltmek yerine bir hata ver       --robot         makine-ayrıştırılabilir iletiler kullan (betikler için
                        yararlı)       --single-stream yalnızca ilk akışın sıkıştırmasını aç ve sessizce
                        kalan girdi verisini yok say   -0 ... -9           sıkıştırma önayarı; öntanımlı 6; 7-9 kullanmadan önce
                        sıkıştırma açıcı bellek kullanımını hesaba katın!   -Q, --no-warn       uyarıların çıkış durumunu etkilemesine izin verme   -V, --version       sürüm numarasını görüntüle ve çık   -e, --extreme       daha çok CPU zamanı kullanarak sıkıştırma oranını
                        iyileştirmeye çalış; sıkıştırma açıcı bellek
                        gereksinimlerini etkilemez   -h, --help          kısa yardımı görüntüle (temel seçenekleri listeler)
  -H, --long-help     bu uzun yardımı görüntüle ve çık   -h, --help          bu kısa yardımı görüntüle ve çık
  -H, --long-help     uzun yardımı görüntüle (gelişmiş seçenekleri listeler)   -k, --keep          girdi dosyalarını tut (silme)
  -f, --force         çıktı dosyası üzerine yazmayı zorla ve bağlantıları
                        sıkıştır/sıkıştırmayı aç
  -c, --stdout        standart çıktıya yaz ve girdi dosyalarını silme   -q, --quiet         uyarıları sustur; hataları da susturmak için iki kez
                        belirt
  -v, --verbose       ayrıntılı ol; daha da çok ayrıntı için iki kez belirt   -z, --compress      sıkıştırmayı zorla
  -d, --decompress    sıkıştırma açmayı zorla
  -t, --test          sıkıştırılmış dosya bütünlüğünü sına
  -l, --list          .xz dosyaları hakkında bilgi listele   En düşük XZ Utils sürümü: %s
  İşlem kipi:
 %s MiB bellek gerekiyor. Sınır, %s. %s MiB bellek gerekiyor. Sınırlandırıcı devre dışı bırakıldı. %s dosya
 %s dosya
 %s ana sayfası: <%s>
 %s:  %s: Kaldırılamıyor: %s %s: Dosya grubu ayarlanamıyor: %s %s: Dosya sahibi ayarlanamıyor: %s %s: Dosya izinleri ayarlanamıyor: %s %s: Dosyayı kapatma başarısız: %s %s: Dosya adları okunurken hata: %s %s: Dosyayı ararken hata: %s %s: Dosyanın setuid'si veya setgid biti ayarlanmış, atlanıyor %s: Dosyanın yapışkan bit seti var, atlanıyor %s: Dosya boş %s: Dosya taşınmış gibi görünüyor, kaldırılmıyor %s: Dosya adında bilinmeyen sonek var, atlanıyor %s: Süzgeç zinciri: %s
 %s: Girdi dosyasında birden çok sabit bağ var, atlanıyor %s: --block-list için geçersiz argüman %s: Geçersiz dosya adı soneki %s: Geçersiz çoklayıcı soneki %s: Geçersiz seçenek adı %s: Geçersiz seçenek değeri %s: Bir dizin, atlanıyor %s: Bir sembolik bağ, atlanıyor %s: Olağan bir dosya değil, atlanıyor %s: Okuma hatası: %s %s: Bir aralıklı dosya oluşturmaya çalışırken arama başarısız: %s %s: --block-list için çok fazla argüman %s: Geçerli bir .xz dosyası olabilmek için pek küçük %s: Dosyanın beklenmedik sonu %s: Dosya adları okunurken beklenmedik girdi sonu %s: Bilinmeyen dosya biçimi türü %s: Desteklenmeyen bütünlük denetimi türü %s: Değer, bir negatif olmayan ondalık tamsayı %s: Yazma hatası: %s %s: poll() başarısız oldu: %s --list, standart girdi'den okumayı desteklemez --list, yalnızca .xz dosyalarında çalışır (--format=xz veya --format=auto) 0, yalnızca --block-list içindeki son öge olarak kullanılabilir %4$s MiB bellek kullanımı sınırını aşmamak için LZMA%1$c sözlük boyutu %2$s MiB'tan %3$s MiB'a ayarlandı Fiziksel bellek miktarı (RAM): Blok Bloklar Bloklar: Sinyal işleyicileri tesis edilemiyor Standart girdi'den dosya adları okunurken standart girdi'den veri okunamıyor Denetim Denetim: DğrDentm SkştrOfseti SkştrBoyut Bir uçbirimden sıkıştırılmış veri okunamaz Bir uçbirime sıkıştırılmış veri yazılamaz Sıkıştırılmış veri hasarlı Sıkıştırılmış boyut: --robot ile sıkıştırma ve sıkıştırma açma henüz desteklenmiyor. lzip dosyalarının (.lz) sıkıştırılması desteklenmiyor Sıkıştırma desteği, yapım sırasında devre dışı bırakıldı Sıkıştırma: Sıkıştırma açma desteği, yapım sırasında devre dışı bırakıldı Sıkıştırma açma, %s MiB belleğe gereksinim duyacak. Sıkıştırma açma: -T0 için öntanımlı: Devre dışı Boş dosya adı, atlanıyor Veriyolu oluştururken hata: %s Standart girdi'den dosya durum bayrakları alınırken hata: %s Standart çıktı'dan dosya durum bayrakları alınırken hata: %s Standart çıktı'dan O_APPEND bayrağı geri yüklenirken hata: %s Standart girdi'ye durum bayrakları geri yüklenirken hata: %s Dosya biçimi tanımlanamıyor Süzgeçler Bayrak Donanım bilgisi: Üstveri İç hata (yazılım hatası) LZMA1, .xz biçimi ile birlikte kullanılamaz Uzun seçenekler için zorunlu olan argümanlar kısa seçenekler için de geçerlidir.
 Olabilecek en çok süzgeç sayısı dörttür BelKullnm Gereken bellek: Verilen süzgeç ayarı için bellek kullanım sınırı pek düşük. Bellek kullanım sınırına erişildi Bellek kullanım sınırları: Çok iş parçacıklı sıkıştırma açma: Hayır Bütünlülük denetimi yok; dosya bütünlüğü doğrulanmıyor Yok Dosya sayısı: İşlemci iş parçacığı sayısı: Dolgu Oran Oran: %3$s MiB bellek kullanımı sınırını aşmamak için iş parçacığı sayısı %1$s -> %2$s olarak ayarlandı İş parçacıklarının sayısı %s -> 1 olarak azaltıldı. %s MiB otomatik bellek sınırı hâlâ aşılıyor. %s MiB belleğe gereksinim var. Yine de sürdürülüyor. Hataları <%s> adresine bildirin (İngilizce veya Fince).
 Üstbilgideki boyut: Akış Akış dolgusu: Akışlar:  Akış    Blok  Sıkıştırıl. Sıkıştırmas.   Oran  Denetim Dosya ad --flush-timeout nedeniyle tek iş parçacıklı kipe geçiliyor %s MiB bellek kullanım sınırını aşmamak için tek iş parçacıklı kipe geçiliyor BU, NORMAL KULLANIM İÇİN OLMAYAN BİR GELİŞTİRME SÜRÜMÜDÜR. .lzma biçimi, yalnızca LZMA1 süzgecini destekler Çevre değişkeni %s, pek fazla argüman içeriyor Önayarların kesin seçenekleri yazılım sürümleri arasında ayrım gösterebilir. lc ve lp'nin toplamı 4'ü geçmemelidir ToplamBoyut Toplamlar: SkştrmmşOfset SkştrmmşBoyut Sıkıştırılmamış boyut: Beklenmedik girdi sonu Bilinmeyen hata ?-11 ?-12 ?-13 ?-14 ?-15 ?-2 ?-3 ?-5 ?-6 ?-7 ?-8 ?-9 Desteklenmeyen LZMA1/LZMA2 önayarı: %s Desteklenmeyen süzgeç zinciri veya süzgeç seçenekleri Desteklenmeyen seçenekler Desteklenmeyen bütünlülük denetimi türü; dosya bütünlüğü doğrulanmıyor Kullanım: %s [SEÇENEK]... [DOSYA]...
.xz biçimindeki dosyaları sıkıştırın veya sıkıştırmasını açın.

 Ham kipte bir önayar kullanımı önerilmez. En çok %u iş parçacığı kullanılıyor. Standart çıktı'ya yazma başarısız Evet PRIu32 Using up to % threads. En çok % iş parçacığı kullanılıyor. 