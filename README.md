# Tiket-_Bioskop_Sederhana
UAS AP 2

Penjelasan Program Tiket Bioskop Sederhana

A.
#include <iostream>
#include <string.h>
#include <stdio.h>
#include "header.h"
using namespace std;

int main(){

	return 0();
}

=> sebagai library dan header untuk fungsi utama.
=> #include <string.h> berfungsi untuk dapat menjalankan fungsi seperti strcpy pada array dalam fungsi.
=> #include <stdio.h>  berfungsi untuk dapat menggunakan bahasa c dalam program seperti printf dan scanf.

B.
void pembuka(){
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"--- SELAMAT DATANG DI TIX ID -------------------------------------------- SELAMAT DATANG DI TIX ID ----------------------------------------- SELAMAT DATANG DI TIX ID ----"<<endl;
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
}

=> Pada bagian ini terdapat fungsi pembuka dengan tipe kembalian void untuk menampilkan seperti hiasan bertuliskan SELAMAT DATANG DI TIX ID dengan sedikit hiasan. Hal ini dilakukan untuk mempermudah setiap kali akan menggunakannya kita hanya perlu memanggil fungsi pembuka ini saja.

C.
struct tempat{
	string bioskop1,bioskop2;
};

=> Pada bagian ini terdapat struct dengan nama tempat yang akan menyimpan nama-nama bisokop yang menjual tiket,didalamnya terdapat 2 data bertipe string dengan nama bioskop1 dan bioskop2.

struct jadwal{
	string waktu_1,waktu_2;
};

=> Pada bagian ini terdapat struct dengan nama jadwal yang akan menyimpan waktu-waktu untuk menonton di bioskop,didalamnya terdapat 2 data bertipe string dengan nama waktu_1 dan waktu_2.

struct film{
	string judul,kategori,pemeran;
	string durasi;	
	tempat bioskop;
	jadwal waktu;
 	
};

=> Pada bagian ini terdapat struct dengan nama film yang menyimpan 4 data bertipe string dengan nama judul,kategori,pemeran,durasi, dan juga menyimpan 2 nested struct yang menyimpan 2 struct sebelumnya dengan nama bioskop untuk menyimpan struct tempat dan nama waktu untuk menyimpan struct jadwal.

D.
void output(film &pil){
=> Pada bagian ini kita memanggil fungsi struct dengan nama film diatas dan kita beri nama "pil".

    cout<<"Judul Film 	  		: "	   <<pil.judul	<<endl;
=> Pada bagian ini kita menyimpan kedalam struct dengan nama film kedalam data yang bernama judul. .

    cout<<"Opsional Tempat 1 		: "<<pil.bioskop.bioskop1<<endl;
=> Pada bagian ini kita menyimpan kedalam struct dengan nama film kedalam nested struct yang bernama bioskop dan masuk kedalam struct bioskop dan masuk kedalam struct "bioskop1".

    cout<<"Opsional Tempat 2 		: "<<pil.bioskop.bioskop2<<endl;
=> Pada bagian ini kita menyimpan kedalam struct dengan nama film kedalam nested struct yang bernama bioskop dan masuk kedalam struct bioskop dan masuk kedalam struct "bioskop2".

    cout<<"Kategori Film 			: "<<pil.kategori<<endl;
=> Pada bagian ini kita menyimpan kedalam struct dengan nama film kedalam data yang bernama "kategori".

    cout<<"Opsional Waktu Tempat 1 	: "<<pil.waktu.waktu_1<<endl;
=> Pada bagian ini kita menyimpan kedalam struct dengan nama film kedalam nested struct yang bernama waktu dan masuk kedalam struct waktu dan masuk kedalam struct "waktu_1".

    cout<<"Opsional Waktu Tempat 2 	: "<<pil.waktu.waktu_2<<endl;
=> Pada bagian ini kita menyimpan kedalam struct dengan nama film kedalam nested struct yang bernama waktu dan masuk kedalam struct waktu dan masuk kedalam struct "waktu_2".

    cout<<"Pemeran 			: "		   <<pil.pemeran<<endl;
=> Pada bagian ini kita menyimpan kedalam struct dengan nama film kedalam data yang bernama "pemeran".
  
    cout<<"Durasi 				: "	   <<pil.durasi<<endl;
}
=> Pada bagian ini kita menyimpan kedalam struct dengan nama film kedalam data yang bernama "durasi".


=> Pada bagian ini terdapat fungsi output dengan kembalian void yang akan menyimpan data berupa keterangan film yang akan diinputkan di script.


E.
film pilihan[4];

=> Pada bagian ini kita menginisiasikan bahwa struct film dengan nama pilihan akan berjumlah sebanyak 4 kumpulan data didalamnya.
=> Untuk mengisi setiap bagian dari kumpulan data dapat dilakukan dengan 
	nama_struct[indeks_struct_(DIMULAI DARI 0)].nama_data_di_dalam_struct_yang_kedalamnya_akan_kita_simpan_data_yang_akan_kita_masukkan = "ISI DATA";

	pilihan[1].judul               ="Doctor Strange in the Multiverse of Madness";
	pilihan[1].bioskop.bioskop1    ="CINEMA XXI SUN PLAZA";
	pilihan[1].bioskop.bioskop2    ="CINEMA XXI LIPPO PLAZA";
	pilihan[1].kategori            ="Action, Adventure, Fantasy";
	pilihan[1].waktu.waktu_1        ="Jadwal CINEMA XXI SUN PLAZA 13:20   16:00  18:00";
	pilihan[1].waktu.waktu_2        ="Jadwal CINEMA XXI LIPPO PLAZA 11:20   14:00  15:45";
	pilihan[1].pemeran             ="Benedict Cumberbatch, Elizabeth Olsen, Rachel McAdams, Chiwetel Ejiofor, Benedict Wong, Xochitl Gomez";
	pilihan[1].durasi              ="126 menit";
	
	pilihan[2].judul               ="KKN di Desa Penari";
	pilihan[2].bioskop.bioskop1    ="CINEMA XXI SUN PLAZA";
	pilihan[2].bioskop.bioskop2    ="CINEMA XXI LIPPO PLAZA";
	pilihan[2].kategori            ="Horror";
	pilihan[2].waktu.waktu_1        ="Jadwal CINEMA XXI SUN PLAZA 12:45   16:00  18:00";
	pilihan[2].waktu.waktu_2        ="Jadwal CINEMA XXI LIPPO PLAZA 10:30   13:20  16:10";
	pilihan[2].pemeran             ="Tissa Biani, Adinda Thomas, Achmad Megantara, Aghniny Haque, Calvin Jeremy, M Fajar Nugraha, Kiki Narendra, Aulia Sarah, Aty Cancer";
	pilihan[2].durasi              ="130 menit";
	
	pilihan[3].judul           	   ="Memory";
	pilihan[3].bioskop.bioskop1	   ="CINEMA XXI SUN PLAZA";
	pilihan[3].bioskop.bioskop2    ="CINEMA XXI LIPPO PLAZA";
	pilihan[3].kategori            ="Action,Thriller";
	pilihan[3].waktu.waktu_1    	   ="Jadwal CINEMA XXI SUN PLAZA 09:45   12:30  17:00";
	pilihan[3].waktu.waktu_2        ="Jadwal CINEMA XXI LIPPO PLAZA 11:30   13:50  16:40";
	pilihan[3].pemeran             ="Monica Bellucci, Liam Neeson, Guy Pearce, Ray Stevenson, Louis Mandylor, Ray Fearon, Antonio Jaramillo, Lee Boardman, Natalie Anderson";
	pilihan[3].durasi              ="113 menit";
	cout<<endl;

F.
for(int x=0 ; x<3 ; x++){
	cout<<"Pilihan "<<x+1<<endl;
	=> Karena indeks dimulai dari 0 dan kita ingin menampilkan mulai dari 1,maka kita buat x+1 yang akan bernilai = 0+1 = 1.

	output(pilihan[x+1]);
	cout<<endl;
}	

=> Pada bagian ini terdapat fungsi perulangan yang akan menampilkan struct film dengan nama pilihan yang sudah kita inputkan sebelumnya pada bagan E.

G.
    cout<<"Daftar hari  "<<endl;
    char arr[][15]={"1.Senin ","2.Selasa ","3.Rabu ","4.Kamis ","5.Jumat ","6.Sabtu ","7.Minggu \n"};
    => Pada bagian ini terdapat array bernama arr dengan tipe data char yang berisikan 15 char sebagai batas maksimal untuk setiap bagian dan jumlah bagiannya tidak dibatasi. 
    => Char ini akan menyimpan daftar hari.



    int hari;
    for(int a=0;a<7;a++){
       cout<<arr[a]; 
       cout<<endl;
    }
    => Pada bagian ini dilakukan perulangan untuk menampilkan setiap array arr dari indeks 0 sampai 7.


    for (int b=0;b<7;b++){
    	strcpy(arr[0],"Senin");	
	=> Cara nuntuk melakukan strcpy adalah sebagai berikut
	=> strcpy(nama_array[indeks_array[dimulai_dari_0)],"ISI YANG AKAN KITA SALIN KEDALAM ARRAY SEBELUMNYA"); 

    	strcpy(arr[1],"Selasa");
    	strcpy(arr[2],"Rabu");
    	strcpy(arr[3],"Kamis");
    	strcpy(arr[4],"Jumat");
    	strcpy(arr[5],"Sabtu");
    	strcpy(arr[6],"Minggu");
	}
	=> Pada bagian ini kita ingin mengubah atau menghilangkan setiap nomor yang disimpan dalam setiap array arr yang menyimpan daftar hari kita yang sebelumnya mempermudah user untuk menginputkan angka 1-7 yang menunjukkan hari.
    	=> Dan kita ingin menampilkan hari tanpa adanya angka 1-7 tersebut.
	=> Maka kita memerlukan fungsi strcpy yang akan mengubah isi dari masing-masing array arr sesuai yang kita inginkan dengan tidak lupa menambahkan #include <string.h> pada header kita.

    z: 
    => Pada bagian ini kita memberi label z untuk mengantisipasi user yang memasukkan angka diluar pilihan yang kita berikan.
    
    printf("Pilih hari anda akan menonton (1-7) : "); 
    scanf("%i",&hari);
    printf("\n");

    if (hari>0 && hari<8){
    cout<<"Silahkan pilih film untuk hari "<<arr[hari-1];
    => Pada bagian ini kita menggunakan indeks angka dari hari yang kita masukkan dikurangi 1 agar sesuai dengan yang kita inginkan.
    => Misal kita memilih angka 3, dimana pada daftar hari yang tersimpan dalam array arr itu adalah hari rabu, namun hari tersebut akan terbaca sebagain indeks yang dimana hari rabu dibaca sebagain indeks 4, dimana terdapat perbedaan dan kita perlu melakukan penyesuaian tersebut.

    printf("\n");
    printf("\n");
	} else {
		goto z;
	}

	=> Pada bagian ini terdapat kondisi dimana jika user memasukkan hari dari 1-7 maka akan menampilkan array dari arr sesuai dengan hari yang dipilih user

H.
j: //label j
	cout<<"Pilih nomor film yang ingin dibeli : ";
	cin>>nomor;
	cout<<endl;
	cout<<endl;

	int nomor,t4,jlh;
    	string w4ktu;
    	float hrg;
	if (nomor==1){

	=> Pada bagian ini terdapat percabangan dimana jika nomor yang user input sama dengan 1 maka, akan menampilkan keterangan film yang tersimpan dalam fungsi void bernama pilihan yang sudah diinputkan sebelumnya discript.


		output(pilihan[1]);
		cout<<endl;
		m:
		cout<<"Pilih tempat anda menonton film : ";
		cin>>t4;
		if(t4=1){
			cout<<"Pilih waktu yang tepat untuk anda menonton : ";
			cin>>w4ktu;	
			cout<<"Masukkan jumlah tiket yang ingin dibeli : ";
			cin>>jlh;
			hrg=jlh*45000;
			cout<<endl;
			pembuka();
			cout<<endl;
			cout<<"Anda akan menonton film Doctor Strange in the Multiverse of Madness di CINEMA XXI SUN PLAZA pada pukul "<<w4ktu<<" WIB"<<endl;
			cout<<endl;
			cout<<"Total harga = Rp"<<hrg;
			cout<<endl;
			cout<<"Silahkan lakukan pembayaran untuk konfirmasi pembelian tiket...";
		}else if (t4=2){
			cout<<"Pilih waktu yang tepat untuk anda menonton : ";
			cin>>w4ktu;	
			cout<<"Masukkan jumlah tiket yang ingin dibeli : ";
			cin>>jlh;
			hrg=jlh*45000;
			cout<<endl;
			pembuka();
			cout<<endl;
			cout<<"Anda akan menonton film Doctor Strange in the Multiverse of Madness di CINEMA XXI LIPPO PLAZA pada pukul "<<w4ktu<<" WIB"<<endl;
			cout<<endl;
			cout<<"Total harga = Rp"<<hrg;
			cout<<endl;
			cout<<endl;
			cout<<"Silahkan lakukan pembayaran untuk konfirmasi pembelian tiket...";			
		}
	}
	else if (nomor==2){
		output(pilihan[2]);
		cout<<endl;
		cout<<"Pilih tempat anda menonton film : ";
		cin>>t4;
		if(t4=1){
			cout<<"Pilih waktu yang tepat untuk anda menonton : ";
			cin>>w4ktu;	
			cout<<"Masukkan jumlah tiket yang ingin dibeli : ";
			cin>>jlh;
			hrg=jlh*45000;
			cout<<endl;
			pembuka();
			cout<<endl;
			cout<<"Anda akan menonton film KKN di Desa Penari di CINEMA XXI SUN PLAZA pada pukul "<<w4ktu<<" WIB"<<endl;
			cout<<endl;
			cout<<"Total harga = Rp"<<hrg;
			cout<<endl;
			cout<<"Silahkan lakukan pembayaran untuk konfirmasi pembelian tiket...";
		}else if (t4=2){
			cout<<"Pilih waktu yang tepat untuk anda menonton : ";
			cin>>w4ktu;	
			cout<<"Masukkan jumlah tiket yang ingin dibeli : ";
			cin>>jlh;
			hrg=jlh*45000;
			cout<<endl;
			pembuka();
			cout<<endl;
			cout<<"Anda akan menonton film KKN di Desa Penari di CINEMA XXI LIPPO PLAZA pada pukul "<<w4ktu<<" WIB"<<endl;
			cout<<endl;
			cout<<"Total harga = Rp"<<hrg;
			cout<<endl;
			cout<<endl;
			cout<<"Silahkan lakukan pembayaran untuk konfirmasi pembelian tiket...";			
		}
	}
	else if (nomor==3){
		output(pilihan[3]);
		cout<<endl;
		cout<<"Pilih tempat anda menonton film : ";
		cin>>t4;
		if(t4=1){
			cout<<"Pilih waktu yang tepat untuk anda menonton : ";
			cin>>w4ktu;	
			cout<<"Masukkan jumlah tiket yang ingin dibeli : ";
			cin>>jlh;
			hrg=jlh*45000;
			cout<<endl;
			pembuka();
			cout<<endl;
			cout<<"Anda akan menonton film Memory di CINEMA XXI SUN PLAZA pada pukul "<<w4ktu<<" WIB"<<endl;
			cout<<endl;
			cout<<"Total harga = Rp"<<hrg;
			cout<<endl;
			cout<<endl;
			cout<<"Silahkan lakukan pembayaran untuk konfirmasi pembelian tiket...";
		}else if (t4=2){
			cout<<"Pilih waktu yang tepat untuk anda menonton : ";
			cin>>w4ktu;	
			cout<<"Masukkan jumlah tiket yang ingin dibeli : ";
			cin>>jlh;
			hrg=jlh*45000;
			cout<<endl;
			pembuka();
			cout<<endl;
			cout<<"Anda akan menonton film Memory di CINEMA XXI LIPPO PLAZA pada pukul "<<w4ktu<<" WIB"<<endl;
			cout<<endl;
			cout<<"Total harga = Rp"<<hrg;
			cout<<endl;
			cout<<endl;
			cout<<"Silahkan lakukan pembayaran untuk konfirmasi pembelian tiket...";			
		}
	}else {
		cout<<"Silahkan masukkan pilihan film anda dengan benar"<<endl;
		goto j;
		=> Pada bagian ini terdapat label j yang mengantisipasi user memasukkan pilihan nomor film yang salah dan akan kembali ke label j dimana akan menampilkan ulang untuk user dapat memilih ulang sampai nomor yang dimasukkan sesuai dengan nomor pilihan film yang tersedia.
	}

I.
cout<<"Ini tambahan untuk materi pointer "<<endl;
    int y=111;
    int *p= &y;
    => Untuk menginisiasikan bahwa sesuatu adalah pointer dapat dilakukan dengan menambahkan tanda "*" didepan nama pointer.
    => Pointer pada dasarnya berfungsi untuk menyimpan alamat dari suatu memori.

    cout<<"Nilai y = 111 "<<endl;
    cout<<"Alamat y   = "<<p<<endl;
    cout<<"Alamat y+1 = "<<p+1<<endl;
    cout<<endl;
    cout<<"Dari hal diatas dapat diketahui ketika kita menambahkan sebuah integer kedalam suatu alamat,"<<endl; 
    cout<<"maka akan bertambah sebanyak kelipatan 4 sesuai dengan tipe data integer yang berjumlah 4 bytes.";

