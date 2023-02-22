#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
  string namabuah[5];
  int i=0,beli[5],harga[5],bayar=0,uang;
  float berat[5];

  cout<<"=========================\n";
  cout<<"    REJEKI ANAK SOLEH\n";
  cout<<"=========================\n";
  cout<<" 1. Jeruk      Rp 22.000\n";
  cout<<" 2. Apel       Rp 23.000\n";
  cout<<" 3. Manggis    Rp 15.000\n";
  cout<<" 4. Salak      Rp 10.000\n";
  cout<<"=========================\n\n";

  cout<<"     Input Pembelian\n";
  cout<<" input 0 bila sudah selesai\n";
  do{
      cout<<"Buah "<<i+1<<"    : ";
      cin>>beli[i];
      cout<<"Berat (kg): ";
      cin>>berat[i];

      switch (beli[i]){
        case 1:
          namabuah[i]="Jeruk";
          harga[i]=22000;
        break;
        case 2:
          namabuah[i]="Apel";
          harga[i]=23000;
        break;
        case 3:
          namabuah[i]="Manggis";
          harga[i]=15000;
        break;
        case 4:
          namabuah[i]="Salak";
          harga[i]=10000;
        break;
        default:
          cout<<"";
      }
      i++;
    }while(beli[i-1]>0);

  system("clear");

  cout<<"=================================\n";
  cout<<"\t DAFTAR BELANJA\n";
  cout<<"=================================\n";
  cout<<"Nama Buah\t Berat\t Total\n";

  for(int j=0;j<=3;j++){
    if(beli[j-1]!=0){
      cout<<namabuah[j-1]<<"\t\t "<<berat[j-1]<<" kg\t "<<"Rp "<<berat[j-1]*harga[j-1]<<endl;
      bayar=bayar+berat[j-1]*harga[j-1];
    }
  }
  cout<<"=================================\n";
  cout<<"Total Harga \t\t Rp "<<bayar<<endl;

  if(bayar>100000){
    cout<<"Diskon 10% \t\t Rp "<<0.1*bayar<<endl;
    cout<<"Yang Harus Dibayar \t Rp "<<0.9*bayar<<endl;
    cout<<"Pembayaran \t\t Rp ";
    cin>>uang;
    cout<<"Kembalian \t\t Rp "<<uang-(0.9*bayar)<<endl;
  }else{
    cout<<"Diskon 10% \t\t Rp 0"<<endl;
    cout<<"Yang Harus Dibayar \t Rp "<<bayar<<endl;
    cout<<"Pembayaran \t\t Rp ";
    cin>>uang;
    cout<<"Kembalian \t\t Rp "<<uang-bayar<<endl;
  }
  
  cout<<"=================================\n\n";
  cout<<" TERIMA KASIH TELAH BERBELANJA\n\n";

}
