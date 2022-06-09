#include "../base.h"
using namespace std;

void Toko::input()
{
  cout<<"\nMasukkan banyak data pada baris: "; cin>>baris;
  cout<<"Masukkan banyak data pada kolom: "; cin>>kolom;
}
int main()
{
  Toko toko;
  toko.input();
}