#include <iostream>

using namespace std;

int main(){
    int data;
    cout<<"Input 6 digit number : ";
    cin>>data;   //meminta inputan dari user 
    
    int p = data;    //menyimpan inputan user ke variabel lain
    int i = 5;       //untuk melakukan perulangan saat memasukkan ke array
    int arr[6];      // array untuk menampung hasil dari operasi

    while (p>0){
        int x = (p%10);   // untuk mengambil angka terakhir dari inputan user 
        if (x >7){   
            x = (x + 2) % 10;  // untuk mengambil digit terakhir dari penjumlahan 8,9 (ditambah 2)
        }else{
            x = x + 2;  // menambah 2 setiap digit terakhir
        }
        arr[i] = x;  // memasukkan hasil variabel x ke array
        i--;
        p = p/10;  // agar tidak terjadi infinite loop
    }

    cout<<"Result : ";
    for (int j = 0; j < 6; j++){
        cout<<arr[j];   //menampilkan result 
    }
    
    
    


    
}