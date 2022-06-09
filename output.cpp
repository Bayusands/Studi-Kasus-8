#include "../base.h"
using namespace std;

void Toko::output()
{
  cout<<"\nData "<<endl;
  for (int i=0; i<baris; i++){
    for(int j=0; j<kolom; j++){
      cout<<data1[i][j]<<" ";
    }
    cout<<endl;
    }
  cout<<endl;
  cout<<"Masukkan ID yang ingin dicari: "; cin>>cari;
   for(int i = 0; i <baris; i++)
  {
    for(int j=0; j<kolom; j++)
    if(data1[i][0] == cari)
    {
      cout << "ID : " << data1[i][0] << endl;
      cout << "Nama Barang : " << data1[i][1] << endl;
      cout << "Harga Barang : " << data1[i][2] << endl;
    }
  }
}

int main(){
  Toko toko;
  toko.output();
}