��          �      �        B   	  9   L  M   �     �  e   �  :   G    �  �  �     /     D  1   U     �  "   �  9   �  I   �  �   =     �     �               %     8  �  D  9   �	  ?   
  O   _
     �
  g   �
  1   $    V  �  c     �       $        <  (   K  E   t  W   �  �        �     �     �     �     �                          	                                                            
                         -V, --version               output version information and exit
   -h, --help                  display this help and exit
   -v, --variables             output the variables occurring in SHELL-FORMAT
 Bruno Haible Display native language translation of a textual message whose grammatical
form depends on a number.
 Display native language translation of a textual message.
 If the TEXTDOMAIN parameter is not given, the domain is determined from the
environment variable TEXTDOMAIN.  If the message catalog is not found in the
regular directory, another location can be specified with the environment
variable TEXTDOMAINDIR.
Standard search directory: %s
 In normal operation mode, standard input is copied to standard output,
with references to environment variables of the form $VARIABLE or ${VARIABLE}
being replaced with the corresponding values.  If a SHELL-FORMAT is given,
only those environment variables that are referenced in SHELL-FORMAT are
substituted; otherwise all environment variables references occurring in
standard input are substituted.
 Informative output:
 Operation mode:
 Substitutes the values of environment variables.
 Ulrich Drepper Usage: %s [OPTION] [SHELL-FORMAT]
 Usage: %s [OPTION] [TEXTDOMAIN] MSGID MSGID-PLURAL COUNT
 Usage: %s [OPTION] [[TEXTDOMAIN] MSGID]
or:    %s [OPTION] -s [MSGID]...
 When --variables is used, standard input is ignored, and the output consists
of the environment variables that are referenced in SHELL-FORMAT, one per line.
 Written by %s.
 error while reading "%s" missing arguments standard input too many arguments write error Project-Id-Version: gettext-runtime 0.18
Report-Msgid-Bugs-To: bug-gettext@gnu.org
PO-Revision-Date: 2010-05-24 13:00+0700
Last-Translator: Arif E. Nugroho <arif_endro@yahoo.com>
Language-Team: Indonesian <translation-team-id@lists.sourceforge.net>
Language: id
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
   -V, --version               informasi versi dan keluar
   -h, --help                  tampilkan bantuan ini dan keluar
   -v, --variables             hasilkan variabel yang muncul dalam SHELL-FORMAT
 Bruno Haible Tampilkan terjemahan bahasa asli pesan tekstual yang bentuk gramatikalnya
tergantung pada suatu angka.
 Tampilkan terjemahan bahasa asli pesan tekstual.
 Jika parameter TEXTDOMAIN tidak diberikan, domain ditentukan dari
variabel lingkungan TEXTDOMAIN. Jika katalog pesan tidak ditemukan dalam
direktori reguler, lokasi lain dapat dispesifikasikan dengan variabel 
lingkungan TEXTDOMAINDIR.
Direktori pencarian standar: %s
 Dalam mode operasi normal, input standar disalinkan ke output standar,
dengan referensi ke variabel lingkungan dalam bentuk $VARIABLE atau 
${VARIABLE} digantikan dengan nilai yang bersesuaian.  Jika sebuah 
SHELL-FORMAT diberikan,
hanya variabel lingkungan yang direfer dalam SHELL-FORMAT yang diganti
; bila tidak semua variabel lingkungan yang diacu yang muncul dalam 
input standar akan diganti.
 Output informatif:
 Mode operasi:
 Gantilah nilai variabel lingkungan.
 Ulrich Drepper Penggunaan: %s [PILIHAN] [SHELL-FORMAT]
 Pemakaian: %s [PILIHAN] [TEXTDOMAIN] ID-PESAN ID-PESAN-PLURAL JUMLAH
 Pemakaian: %s [PILIHAN] [[TEXTDOMAIN] ID-PESAN]
atau:    %s [PILIHAN] -s [ID-PESAN]...
 Ketika digunakan --variables, input standar diabaikan, dan hasilnya
terdiri dari variabel lingkungan yang direfer dalam SHELL FORMAT, satu perbaris.
 Ditulis oleh %s.
 kesalahan ketika membaca "%s" Argumen hilang standard input terlalu banyak argumen kesalahan penulisan 