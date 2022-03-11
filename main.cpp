#include <iostream>
#include "rafolusturma.h"

#include <cstdlib>
#include <time.h>
#include <locale.h>

using namespace std;

int oyundevami(rafolusturma x,int y);//Fonksiyon Prototipi
string yenioyuncu1,yenioyuncu2;
int oyunu1puan,oyuncu2puan;

int main() {
	
   
   setlocale(LC_ALL,"Turkish");//T�rk�e Karakter Kullan�m� ��in
   
   int secim;
   
   cout<<"*********Bardak K�rma Oyununa Ho�geldiniz*********"<<endl<<endl<<endl;
   
   programbasi:
	cout<<"Oyuna ba�lamak i�in 1'e kurallar� okumak i�in 2'ye bas�n�z: "; //Men�
	cin>>secim; //Men� SE�im De�eri
	
	
	rafolusturma x; 
	if(secim == 1){ //Oyuna Ba�lama Men�s�
	
	
		cout<<endl<<"Oyuna Ba�lamak ��in �simlerinizi Giriniz"<<endl;
		
		
		
    	cout<<endl<<"Oyuncu1 i�in isim giriniz: ";
		cin>>yenioyuncu1;
		
		cout<<"Oyuncu2 i�in isim giriniz: ";
		cin>>yenioyuncu2;
		cout<<endl<<endl;
    	
	
    
   
		
		
    srand(time(NULL));
    cout << "Bardak boyutunu giriniz:(B�y�k bardak i�in 1, Orta bardak i�in 2, K���k bardak i�in 3): ";
   
    int a;

    cin >> a;
    
    char bardak[4]={'K', 'M', 'Y'};
    
    
	
    x.matrisolusturma(a,x.bardak);
    x.rafcikartma(a);
    x.atisyapma(a,yenioyuncu1,yenioyuncu2);
    	
    oyundevami(x,a);  
   
    }


    else if(secim == 2){ //Kurallar Men�s�
		
			cout<<endl<<"Oyun ba��nda sizden B�y�k,Orta ve K���k olmak �art�yla bardak boyutlar� al�nacak ve bu boyuta\n";
			cout<<"g�re raflara belli say�da bardaklar dizilecektir. Raflara B�y�k boy i�in 8,Orta boy i�in 10 \n";
			cout<<"ve K���k boy i�in 15 tane bardak dizilecektir. Daha sonra iki oyuncu s�rayla at��lar yapacak \n";
			cout<<"ve bu at��lardan vurduklar� bardaklara g�re puan alacaklard�r. Oyunda 3 �e�it bardak vard�r. \n";
			cout<<"Ye�il bardak vurulursa 1 puan,Mavi bardak vurulursa 2 puan,K�rm�z� bardak vurulursa 3 puan \n";
			cout<<"kazan�lacakt�r. Vurulan bardaklara g�re toplam puan� en fazla olan oyuncu oyunu kazan�r. \n";
			cout<<"                                                    ******�yi E�lenceler******"<<endl<<endl<<endl;
			goto programbasi; 
    }




   
    return 0;
}

int oyundevami(rafolusturma x,int y) { //Fonksiyon Tan�m�

   
   
    while (x.devammi) {
        
        cout << "At�� s�ras�: ";
        if(x.sira%2==0){
            cout << yenioyuncu1 << endl<<endl;
        }
        else{
            cout << yenioyuncu2 << endl<<endl;
        }
        cout << "Toplam Puan:" << endl;
        cout <<yenioyuncu1<< ": " <<x.oyuncu1puan << endl;
        cout <<yenioyuncu2<< ": " << x.oyuncu2puan<< endl<<endl;
        cout << "Kalan Bardaklar:" << endl;
        
		if(y==1){
			 cout<<"  1   2   3   4   5   6   7   8"<<endl;
		}
        else if(y==2){
        	cout<<"  1   2   3   4   5   6   7   8   9   10"<<endl;
		}
        else if(y==3){
        	cout<<"  1   2   3   4   5   6   7   8   9  10  11  12  13  14  15"<<endl;
		}
        
		x.rafcikartma(y);
        x.atisyapma(y,yenioyuncu1,yenioyuncu2);


    }
    return 0;
}
