#include <iostream>
using namespace std;

class Toko
{
  friend istream operator>>(istream &, Toko &);
  friend ostream operator<<(ostream &, Toko &);

  public :
  void input();
  void proses();
  void output();

  private:
  string data1[10][10];
  string cari;
  int baris, kolom;
};

void Toko::input()
{
  cout<<"\nMasukkan banyak data pada baris: "; cin>>baris;
  cout<<"Masukkan banyak data pada kolom: "; cin>>kolom;
}

void Toko::proses()
{
  for (int i=0; i<baris; i++)
    {
      for (int j=0; j<kolom; j++)
        {
          cout<<"Masukkan Data pada baris ke-"<<i<<" kolom ke-"<<j<<": ";
          cin>>data1[i][j];
        }
    }
}

void Toko::output()
{
  cout<<"-------------------"<<endl;
	cout<<"||ID  Nama  Harga||"<<endl;
	cout<<"-------------------"<<endl;
  for (int i=0; i<baris; i++){
    for(int j=0; j<kolom; j++){
      cout<<data1[i][j]<<"  ";
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