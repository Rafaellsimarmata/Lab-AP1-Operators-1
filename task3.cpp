#include <iostream>
using namespace std;

int main(){
    int data;
    cout<<"Masukkan angka : ";    
    cin>>data;   //meminta inputan dari user 

    int p = data;   
    int x = 0;

    while (p > 0){
        x += p % 10;   //menjumlahkan setiap digit terakhir dari inputan
        p /= 10;       //membagi inputan agar tidak terjadi infinite loop
    }

    cout<<"Result : "<<x;  //menampilkan hasil
    
    
    
}