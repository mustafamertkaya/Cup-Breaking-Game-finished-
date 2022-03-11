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
	
   
   setlocale(LC_ALL,"Turkish");//Türkçe Karakter Kullanýmý Ýçin
   
   int secim;
   
   cout<<"*********Bardak Kýrma Oyununa Hoþgeldiniz*********"<<endl<<endl<<endl;
   
   programbasi:
	cout<<"Oyuna baþlamak için 1'e kurallarý okumak için 2'ye basýnýz: "; //Menü
	cin>>secim; //Menü SEçim Deðeri
	
	
	rafolusturma x; 
	if(secim == 1){ //Oyuna Baþlama Menüsü
	
	
		cout<<endl<<"Oyuna Baþlamak Ýçin Ýsimlerinizi Giriniz"<<endl;
		
		
		
    	cout<<endl<<"Oyuncu1 için isim giriniz: ";
		cin>>yenioyuncu1;
		
		cout<<"Oyuncu2 için isim giriniz: ";
		cin>>yenioyuncu2;
		cout<<endl<<endl;
    	
	
    
   
		
		
    srand(time(NULL));
    cout << "Bardak boyutunu giriniz:(Büyük bardak için 1, Orta bardak için 2, Küçük bardak için 3): ";
   
    int a;

    cin >> a;
    
    char bardak[4]={'K', 'M', 'Y'};
    
    
	
    x.matrisolusturma(a,x.bardak);
    x.rafcikartma(a);
    x.atisyapma(a,yenioyuncu1,yenioyuncu2);
    	
    oyundevami(x,a);  
   
    }


    else if(secim == 2){ //Kurallar Menüsü
		
			cout<<endl<<"Oyun baþýnda sizden Büyük,Orta ve Küçük olmak þartýyla bardak boyutlarý alýnacak ve bu boyuta\n";
			cout<<"göre raflara belli sayýda bardaklar dizilecektir. Raflara Büyük boy için 8,Orta boy için 10 \n";
			cout<<"ve Küçük boy için 15 tane bardak dizilecektir. Daha sonra iki oyuncu sýrayla atýþlar yapacak \n";
			cout<<"ve bu atýþlardan vurduklarý bardaklara göre puan alacaklardýr. Oyunda 3 çeþit bardak vardýr. \n";
			cout<<"Yeþil bardak vurulursa 1 puan,Mavi bardak vurulursa 2 puan,Kýrmýzý bardak vurulursa 3 puan \n";
			cout<<"kazanýlacaktýr. Vurulan bardaklara göre toplam puaný en fazla olan oyuncu oyunu kazanýr. \n";
			cout<<"                                                    ******Ýyi Eðlenceler******"<<endl<<endl<<endl;
			goto programbasi; 
    }




   
    return 0;
}

int oyundevami(rafolusturma x,int y) { //Fonksiyon Tanýmý

   
   
    while (x.devammi) {
        
        cout << "Atýþ sýrasý: ";
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
