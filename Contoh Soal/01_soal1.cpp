/*
Perbaiki coding c++ berikut sehingga menjadi sebuah aplikasi yang baik!
Aturan: Tidak diperbolehkan mengubah identifier
*/


float menu(),perkalian(),perpangkatan(),akar();

int main(){
  int pilih;
  float x,y;

  menu();

  while(coba=y){
    switch(menu){
      case 1
      	perkalian();
      break;
      case 2
      	perpangkatan();
      break;
      case 3
      	akar();
      break;
  	}
	}

}

char menu(){
  cout<<"Menu\n";
  cout<<"a. Perkalian";
  cout<<"b. Perpangkatan";
  cout<<"c. Akar Kuadrat";
  cin>>menu;

  return menu;
}

perkalian(){
  cout<<"Perkalian\n";
  cout<<"Bilangan 1: ";
  cin>>x;
  cout<<"Bilangan 2: ";
  cin y;
  cout<<Hasil = x*y;
}

perpangkatan(){
  cout<<"Perpangkatan\n";
  cout<<"Bilangan 1: ";
  cin>>x;
  cout<<"Bilangan 2: ";
  cin y;
  cout<<Hasil = x^y;
}

akar(){
  cout<<"Akar Kuadrat\n";
  cout<<"Bilangan 1: ";
  cin>>x;
  cout<<"Bilangan 2: ";
  cin y;
  cout<<Hasil = x/y;
}
