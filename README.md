#### Penggunaaan program :

#### Cara kerja :

#### Pembagian tugas :
1. Sylvia Juliana / 13515070
2. Aditya Pratama / 13515103
3. Turfa Auliarachman / 13515133

#### Pertanyaan :
1. Apa yang terjadi jika advertised window yang dikirim bernilai 0? Apa cara untuk menangani hal tersebut?
    * Keadaan ketika *advertised window* yang dikirim bernilai 0 disebut TCP *Zero          Window*, yaitu *window size* sebuah mesin bernilai 0 pada suatu waktu sehingga        *client* tidak dapat menerima informasi pada saat tersebut dan transmisi TCP          terhenti sehingga dapat memroses kembali informasi yang didapat dari *buffer*.        Hal tersebut menyebabkan *receiver* harus menunggu *space* yang tersedia setara       dengan MSS.
    * Cara penanganan :
      *Set longtime timeout* dengan menggunakan fungsi *setsockopt* pada *socket*.
      Menggunakan *thread* terpisah untuk *actual sending*
      

2. Sebutkan field data yang terdapat TCP Header serta ukurannya, ilustrasikan, dan jelaskan kegunaan dari masing-masing field data tersebut!
    * *Source port* (16 bits)
      Mengidentifikasi *sending port*.
    * *Receive port* (16 bits)
      Mengidentifikasi *receive port*.
    * *Sequence number* (32 bits)
      Ketika flag SYN adalah 1, merupakan inisial dari sequence number.
      Ketika flag SYN adalah 0, merupakan akumulasi sequence number dari byte               pertama segmen yang akan digunakan untuk session berikutnya.
    * *Acknowledgment number* (32 bits)
      Ketika ACK sudah *set*, value field tersebut merupakan value yang akan                ditunggu oleh sender. 
    * *Data offset* (4 bits)
      Menentukan ukuran *TCP Header* dalam 32 bit.
    * *Reserved* (3 bits)
      Akan digunakan ke depannya dan harus bernilai 0.
    * *Flags* (9 bits)
      NS (1 bit)
      *Concealment protection*.
      CWR (1 bit)
      *Flag* di *set* ketika menerima "TCP segment" dengan "ECE flag"                       dan direspon di *congestion control mechanism*.
      ECE (1 bit)
      Peran ECE tergantung pada *SYN flag*
      Ketika *SYN Flag* bernilai 1, pasangan TCP berkapabiltas dengan ECN.
      Ketika *SYN Flag* bernilai 0, paket dengan *Congestion Experienced flag set*          (ECN = 11) dalam IP *header* diterima selama transmisi normal.
      URG (1 bit)
      Menunjukkan *Urgent pointer field* penting.
      ACK (1 bit)
      Menunjukkan *Acknowledgement field* penting.
      PSH (1 bit)
      *Push function*.
      RST (1 bit)
      *Reset* koneksi.
      SYN (1 bit)
      Mengsinkronisasi *sequence numbers*.
      FIN (1 bit)
      Paket terakhir dari *sender*.
    * *Window size* (16 bits)
      Ukuran *window* yang diterima.
    * *Checksum* (16 bits)
      *Error checking header*.
    * *Urgent pointer* (16 bits)
      Menunjukkan *urgent data type* terakhir.
    * *Options* (0-320 bits, dibagi per 32 bits)
      *Option-Kind*
      Menunjukkan tipe opsi dan tidak bersifat opsional.
      *Option-Length*
      Menunjukkan total panjang (ukuran) dari opsi.
      *Option-Data*
      Mengandung *value* data dari opsi jika *value* tersebut valid.
    * *Padding*
      Memastikan TCP *header* berakhir dan data berukuran 32 bit.

![alt text](https://fthmb.tqn.com/FHdeC8UhfnoaTE8jvZ4KlobWu1E=/1235x693/filters:fill(auto,1)/tcp-header-56a1adc85f9b58b7d0c1a24f.png)