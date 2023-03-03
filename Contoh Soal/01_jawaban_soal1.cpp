#include <iostream>
#include <math.h>
using namespace std;

char menu(),pilih,coba;
float x,y,perkalian(),perpangkatan(),akar();

int main(){
 do{
   menu();
   cout<<endl;

   if(pilih=='a'||'A'){
     perkalian();
   }else if(pilih=='b'||'B'){
     perpangkatan();
   }else if(pilih=='c'||'C'){
     akar();
   }else{
     cout<<"Pilihan Salah.";
   }

    cout<<endl<<endl;
    cout<<"Coba lagi? (Y/T)";
    cin>>coba;
	} while(coba=='y'||coba=='Y');

}

char menu(){
  cout<<"MENU\n";
  cout<<"a. Perkalian\n";
  cout<<"b. Perpangkatan\n";
  cout<<"c. Akar Kuadrat\n";
  cout<<"Pilih menu: ";
  cin>>pilih;

  return pilih;
}

float perkalian(){
  cout<<"PERKALIAN\n";
  cout<<"Bilangan 1: ";
  cin>>x;
  cout<<"Bilangan 2: ";
  cin>>y;
  cout<<"Hasil = "<<x*y;

  return x*y;
}

float perpangkatan(){
  cout<<"PERPANGKATAN\n";
  cout<<"Bilangan 1: ";
  cin>>x;
  cout<<"Bilangan 2: ";
  cin>>y;
  cout<<"Hasil = "<<pow(x,y);

  return pow(x,y);
}

float akar(){
  cout<<"AKAR KUADRAT\n";
  cout<<"Bilangan: ";
  cin>>x;
  cout<<"Hasil = "<<sqrt(x);

  return sqrt(x);
}
