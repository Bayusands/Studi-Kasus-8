#include "../base.h"
using namespace std;

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

int main ()
{
  Toko toko;
  toko.proses();
}