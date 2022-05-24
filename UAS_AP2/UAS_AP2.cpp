#include <iostream>
#include <string.h>
#include <stdio.h>
#include "header.h"
using namespace std;

int main(){
	
	pembuka();
	cout<<endl;
	
	film pilihan[4];
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
	
	for(int x=0 ; x<3 ; x++){
		cout<<"Pilihan "<<x+1<<endl;
		output(pilihan[x+1]);
		cout<<endl;
	}	
	
	pembuka();
	
	cout<<endl;
	cout<<endl;
	
	int nomor,t4,jlh;
	string w4ktu;
	float hrg;
	
	cout<<"Daftar hari  "<<endl;
    char arr[][15]={"1.Senin ","2.Selasa ","3.Rabu ","4.Kamis ","5.Jumat ","6.Sabtu ","7.Minggu \n"};
    int hari;
    for(int a=0;a<7;a++){
       cout<<arr[a]; 
       cout<<endl;
    }
    for (int b=0;b<7;b++){
    	strcpy(arr[0],"Senin");	
    	strcpy(arr[1],"Selasa");
    	strcpy(arr[2],"Rabu");
    	strcpy(arr[3],"Kamis");
    	strcpy(arr[4],"Jumat");
    	strcpy(arr[5],"Sabtu");
    	strcpy(arr[6],"Minggu");
	}
    
    z: //label z
    printf("Pilih hari anda akan menonton (1-7) : "); //c
    scanf("%i",&hari);
    printf("\n");
    if (hari>0 && hari<8){
    cout<<"Silahkan pilih film untuk hari "<<arr[hari-1];
    printf("\n");
    printf("\n");
	} else {
		goto z;
	}
	
	j: //label j
	cout<<"Pilih nomor film yang ingin dibeli : ";
	cin>>nomor;
	cout<<endl;
	cout<<endl;
	if (nomor==1){
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
	}
	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	//program pointer untuk mengetahui jumlah bytes integer
	cout<<"Ini tambahan untuk materi pointer "<<endl;
	int y=111;
    int *p= &y;
    cout<<"Nilai y = 111 "<<endl;
    cout<<"Alamat y   = "<<p<<endl;
    cout<<"Alamat y+1 = "<<p+1<<endl;
    cout<<endl;
    cout<<"Dari hal diatas dapat diketahui ketika kita menambahkan sebuah integer kedalam suatu alamat,"<<endl; 
	cout<<"maka akan bertambah sebanyak kelipatan 4 sesuai dengan tipe data integer yang berjumlah 4 bytes.";
	
 return 0;
}
