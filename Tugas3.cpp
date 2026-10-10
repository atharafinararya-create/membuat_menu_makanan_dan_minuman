

#include <iostream>
using namespace std;
int main() {
    string menu_makanan[2]={"pecel"};
    string menu_minuman[2]={"teh","kopi"};
    int harga_makanan[2]={10000};
    int harga_minuman[2]={3000,5000};
    int total;
    int porsi[2];
    int i;
    for (i=0;i<2;i++)
        {
            cout<<"SELAMAT DATANG DAN SILAHKAN PILIH MENU ANDA\n";
            cout<<"menu makanan : ";
            cout<<menu_makanan[i]<<endl;
            cout<<"menu minuman : ";
            cout<<menu_minuman[i]<<endl;
            cout<<"harga makanan : ";
            cout<<harga_makanan[i]<<endl;
            cout<<"harga minuman : ";
            cout<<harga_minuman[i]<<endl;
            cout<<"masukan porsinya : ";
            cin>>porsi[i];
        total=harga_makanan[i]+harga_minuman[i]*porsi[i];
            cout<<"totalnya adalah : ";
            cout<<total<<endl;
            cout<<"_________________________\n";
            
            
        }
        
    return 0;
}
