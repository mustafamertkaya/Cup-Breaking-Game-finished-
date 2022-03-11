#ifndef ODEV_RAFOLUSTURMA_H
#define ODEV_RAFOLUSTURMA_H

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

class rafolusturma {

public:
    int satir;
    int sutun;
    int sira = 0;
    int oyuncu1puan = 0;
    int oyuncu2puan = 0;
    int mavi = 2;
    int yesil = 1;
    int kirmizi = 3;
    
	char matris3[3][15];
    char matris2[3][10];
    char matris1[3][8] = {};
    bool devammi = true;

    string yenioyuncu1;
	string yenioyuncu2;

    char bardak[3] = {'K', 'M', 'Y'};
    int xsayisi = 0;
    int yesilsayisi = 0;
    int kirmizisayisi = 0;
    int mavisayisi = 0;
    int x;
    

     
    
    //---------------------------Matris olu�turma------------------------------
	
	int matrisolusturma(int x, char bardak[3]) { 


        if (x == 1) { //B�y�k Boy Matris Olu�turma
          
		    
		    cout<<"  1   2   3   4   5   6   7   8"<<endl;
		    
            
			for (int k = 0; k < 3; ++k) {
                for (int i = 0; i < 8; ++i) {
                    matris1[k][i] = 'x';
                    
                }

                 
            }
            
			while (yesilsayisi != 8) {
                int x = rand() % 3;
                int y = rand() % 8;
                if (matris1[x][y] != 'Y') {
                    matris1[x][y] = 'Y';
                    yesilsayisi++;
                }
                
            }
            
			while (mavisayisi != 5) {
                int x = rand() % 3;
                int y = rand() % 8;
                if (matris1[x][y] != 'Y') {
                    matris1[x][y] = 'M';
                    mavisayisi++;
                }


            }
           
		    while (kirmizisayisi != 4) {
                int x = rand() % 3;
                int y = rand() % 8;
                if (matris1[x][y] != 'M' && matris1[x][y] != 'Y') {
                    matris1[x][y] = 'K';
                    kirmizisayisi++;
                }
            }
        }
        
        
        

        if (x == 2) { // Orta Boy Matrisi Olu�turma
           
           cout<<"  1   2   3   4   5   6   7   8   9   10"<<endl;
		    
			for (int k = 0; k < 3; ++k) {
                for (int i = 0; i < 10; ++i) {
                    matris2[k][i] = 'x';
                }
            }
          
		    while (yesilsayisi != 8) {
                int a = rand() % 3;
                int b = rand() % 10;
                if (matris2[a][b] != 'Y') {
                    matris2[a][b] = 'Y';
                    yesilsayisi++;
                }
            }
           
		    while (mavisayisi != 5) {
                int a = rand() % 3;
                int b = rand() % 10;
                if (matris2[a][b] != 'Y' && matris2[a][b] != 'M') {
                    matris2[a][b] = 'M';
                    mavisayisi++;
                }
            }
           
		    while (kirmizisayisi != 4) {
                int a = rand() % 3;
                int b = rand() % 10;
                if (matris2[a][b] != 'M' && matris2[a][b] != 'Y' && matris2[a][b] != 'K') {
                    matris2[a][b] = 'K';
                    kirmizisayisi++;
                }
            }
        }
        
        
        
        
		if (x == 3) { //K���k boy Matris Olu�turma
           
           cout<<"  1   2   3   4   5   6   7   8   9  10  11  12  13  14  15"<<endl;
		    for (int k = 0; k < 3; ++k) {
                for (int i = 0; i < 15; ++i) {
                    matris3[k][i] = 'x';
                }
            }
           
		    while (yesilsayisi != 8) {
                int x = rand() % 3;
                int y = rand() % 15;
                if (matris3[x][y] != 'Y') {
                    matris3[x][y] = 'Y';
                    yesilsayisi++;
                }
            }
           
		    while (mavisayisi != 5) {
                int x = rand() % 3;
                int y = rand() % 15;
                if (matris3[x][y] != 'Y') {
                    matris3[x][y] = 'M';
                    mavisayisi++;
                }
            }
        
		    while (kirmizisayisi != 4) {
                int x = rand() % 3;
                int y = rand() % 15;
                if (matris3[x][y] != 'M' && matris1[x][y] != 'Y') {
                    matris3[x][y] = 'K';
                    kirmizisayisi++;
                }
            }

        }
        return 0;
    }



    //----------------------Raf ��kartma-----------------------------------
   
    void rafcikartma(int x) {
        
		if (x == 1) { //B�y�k Boy ��in
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 8; ++j) {
                    cout <<"  "<< matris1[i][j]<<" ";
                    
                }
                cout << endl;
            }
        }
        
		if (x == 2) { //Orta Boy ��in
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 10; ++j) {
                    cout <<"  "<< matris2[i][j]<<" ";
                }
                cout << endl;
            }
        }
        
		if (x == 3) { //K���k Boy ��in
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 15; ++j) {
                    cout <<"  "<< matris3[i][j]<<" ";
                }
                cout << endl;
            }
        }
     
    }

    
    
    
    //---------------------------At�� Yapma-------------------------------------
    
	void atisyapma(int x,string a,string b) {
       
	    string cikis; 
        int sans = rand() % 3 - 1;

        string vurulanrenk;
        int puan = 0;

        cout <<"At�s yapmak i�in once raf sonra s�ray� belirtin. Oyundan ��kmak i�in -1 giriniz"<< endl;
        cin  >> satir;
		
		if(satir==-1){ //-1 Girince ��kma
            
            
			cout <<endl<< "Toplam Puan:" << endl;
           
		   cout <<a <<": "<<oyuncu1puan << endl;
		   cout <<b <<": "<<oyuncu2puan<< endl;
            
			devammi=false;
            goto sonn;
        }       	
		cin  >> sutun;

			



        if (x == 1) { //B�y�k Boy ��in
           
		    if (satir > 9 || ((sutun - 1) + sans) < 0) {
                goto vuramadi;
            } 
			
			else if (matris1[satir - 1][(sutun - 1) + sans] == 'Y') {
                
				puan = puan + 1;
                int yesil = 1;
                vurulanrenk = "Yesil";
                cout << satir << ". raf�n " << sutun + sans << ". s�ras�ndaki " 
				     << vurulanrenk <<" barda�� vurarak " << yesil << " puan kazand�n�z.\n" << endl;
				if (sira % 2 == 0) {
                    oyuncu1puan = oyuncu1puan + yesil;
                } 
				else {
                    oyuncu2puan = oyuncu2puan + yesil;
                }
                sira++;
                matris1[satir - 1][(sutun - 1) + sans] = 'x';
            }
			
			else if (matris1[satir - 1][(sutun - 1) + sans] == 'M') {
                
				puan = puan + 2;
                int mavi = 2;
                vurulanrenk = "Mavi";
                cout << satir << ". raf�n " << sutun + sans << ". s�ras�ndaki " 
				     << vurulanrenk << " barda�� vurarak " << mavi << " puan kazand�n�z.\n" << endl;
			    if (sira % 2 == 0) {
                    oyuncu1puan = oyuncu1puan + mavi;
                } 
				else {
                    oyuncu2puan = oyuncu2puan + mavi;
                }
                sira++;
                matris1[satir - 1][(sutun - 1) + sans] = 'x';
            } 
			
			else if (matris1[satir - 1][(sutun - 1) + sans] == 'K') {
                puan = puan + 3;
                vurulanrenk = "K�rm�z�";
                int kirmizi = 3;
                cout << satir << ". raf�n " << sutun + sans << ". s�ras�ndaki "
                     << vurulanrenk << " barda�� vurarak " << kirmizi << " puan kazand�n�z.\n" << endl;
               
			    if (sira % 2 == 0) {
                    oyuncu1puan = oyuncu1puan + kirmizi;
                }
				else {
                    oyuncu2puan = oyuncu2puan + kirmizi;
                }
                sira++;
                matris1[satir - 1][(sutun - 1) + sans] = 'x';
            }
            
			else {
                vuramadi:
                cout << satir << ". raf�n " << sutun + sans << ". s�ras�nda bardak vuramay�p puan kazanamad�n�z\n"<< endl;
                sira++;
            }
        }
        
									        
        
        
        
         if (x == 2) {  //Orta Boy ��in
            
			if(((sutun-1)+sans)<0){
            	goto vuramadi;
			}
			 
			 
			else if (matris2[satir - 1][(sutun - 1) + sans] == 'Y') {
                puan = puan + 1;
                int yesil = 1;
                vurulanrenk = "Yesil";
                cout << satir << ". raf�n " << sutun + sans << ". s�ras�ndaki " 
				     << vurulanrenk << " barda�� vurarak " << yesil << " puan kazand�n�z.\n" << endl;
                if (sira % 2 == 0) {
                    oyuncu1puan = oyuncu1puan + yesil;
                }
				else {
                    oyuncu2puan = oyuncu2puan + yesil;
                }
                sira++;
                matris2[satir - 1][(sutun - 1) + sans] = 'x';
            } 
			
			
			else if (matris2[satir - 1][(sutun - 1) + sans] == 'M') {
                puan = puan + 2;
                int mavi = 2;
                vurulanrenk = "Mavi";
                cout << satir << ". raf�n " << sutun + sans << ". s�ras�ndaki " 
				     << vurulanrenk << " bardagi vurarak " << mavi << " puan kazand�n�z.\n" << endl;
               if (sira % 2 == 0) {
                    oyuncu1puan = oyuncu1puan + mavi;
                } 
				else {
                    oyuncu2puan = oyuncu2puan + mavi;
                }
                sira++;
                matris2[satir - 1][(sutun - 1) + sans] = 'x';
            } 
			
			
			else if (matris2[satir - 1][(sutun - 1) + sans] == 'K') {
                puan = puan + 3;
                vurulanrenk = "K�rm�z�";
                int kirmizi = 3;
                cout << satir << ". raf�n " << sutun + sans << ". s�ras�ndaki "
                     << vurulanrenk << " barda�� vurarak " << kirmizi << " puan kazand�n�z.\n" << endl;
                if (sira % 2 == 0) {
                    oyuncu1puan = oyuncu1puan + kirmizi;
                } 
				else {
                    oyuncu2puan = oyuncu2puan + kirmizi;
                }
                sira++;
                matris2[satir - 1][(sutun - 1) + sans] = 'x';
            } 
			
			
			else {
                vuramadi1:
                cout << satir << ". raf�n " << sutun + sans << ". s�ras�nda bardak vuramay�p puan kazanamad�n�z\n"<< endl;
                sira++;
            }

        }
         
		 
		 
		 
		 
		 
		 if (x == 3) { //K���k Boy ��in
              
			if (matris3[satir - 1][(sutun - 1) + sans] == 'Y') {
                puan = puan + 1;
                int yesil = 1;
                vurulanrenk = "Yesil";
                cout << satir << ". raf�n " << sutun + sans << ". s�ras�ndaki " 
				     << vurulanrenk << " barda�� vurarak " << yesil << " puan kazand�n�z.\n" << endl;
                if (sira % 2 == 0) {
                    oyuncu1puan = oyuncu1puan + yesil;
                } 
				else {
                    oyuncu2puan = oyuncu2puan + yesil;
                }
                sira++;
                matris3[satir - 1][(sutun - 1) + sans] = 'x';
            } 
			
		    else if (matris3[satir - 1][(sutun - 1) + sans] == 'M') {
                puan = puan + 2;
                int mavi = 2;
                vurulanrenk = "Mavi";
                cout << satir << ".raf�n " << sutun + sans << ". s�ras�ndaki " 
				     << vurulanrenk << " barda�� vurarak " << mavi << " puan kazand�n�z.\n" << endl;
                if (sira % 2 == 0) {
                    oyuncu1puan = oyuncu1puan + mavi;
                } 
				else {
                    oyuncu2puan = oyuncu2puan + mavi;
                }
                sira++;
                matris3[satir - 1][(sutun - 1) + sans] = 'x';
            } 
			
			else if (matris3[satir - 1][(sutun - 1) + sans] == 'K') {
                puan = puan + 3;
                vurulanrenk = "K�rm�z�";
                int kirmizi = 3;
                cout << satir << ". raf�n " << sutun + sans << ". s�ras�ndaki " 
				     << vurulanrenk << " bardagi vurarak " << kirmizi << " puan kazand�n�z.\n" << endl;
                if (sira % 2 == 0) {
                    oyuncu1puan = oyuncu1puan + kirmizi;
                } 
				else {
                    oyuncu2puan = oyuncu2puan + kirmizi;
                }
                sira++;
                matris3[satir - 1][(sutun - 1) + sans] = 'x';
            } 
			
			else {
                vuramadi2:
                cout << satir << ". raf�n " << sutun + sans << ". s�ras�nda bardak vuramay�p puan kazanamad�n�z\n"<< endl;
                sira++;
            }


        }
		sonn:;
    }


private:
};


#endif //ODEV_RAFOLUSTURMA_H

