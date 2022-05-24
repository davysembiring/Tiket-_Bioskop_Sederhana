#include <iostream>
using namespace std;

void pembuka(){
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"--- SELAMAT DATANG DI TIX ID -------------------------------------------- SELAMAT DATANG DI TIX ID ----------------------------------------- SELAMAT DATANG DI TIX ID ----"<<endl;
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
}

struct tempat{
	string bioskop1,bioskop2;
};

struct jadwal{
	string waktu_1,waktu_2;
};

struct film{
	string judul,kategori,pemeran;
	string durasi;	
	tempat bioskop;
	jadwal waktu;
 	
};

void output(film &pil){
    cout<<"Judul Film 	  		: "	   <<pil.judul	<<endl;
    cout<<"Opsional Tempat 1 		: "<<pil.bioskop.bioskop1<<endl;
    cout<<"Opsional Tempat 2 		: "<<pil.bioskop.bioskop2<<endl;
    cout<<"Kategori Film 			: "<<pil.kategori<<endl;
    cout<<"Opsional Waktu Tempat 1 	: "<<pil.waktu.waktu_1<<endl;
    cout<<"Opsional Waktu Tempat 2 	: "<<pil.waktu.waktu_2<<endl;
    cout<<"Pemeran 			: "		   <<pil.pemeran<<endl;
    cout<<"Durasi 				: "	   <<pil.durasi<<endl;
}
