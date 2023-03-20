#include <iostream>

using namespace std;

int main(){
    int data;
    cout<<"Input 4 digit number : ";  
    cin>>data;   //meminta inputan dari user 

    #melakukan operasi pada angka yang diinput user
    data = ((data + 8)/3)%5*5;  

    cout<<"Result : "<<data;   //menampilkan hasil dari operasi yang telah dilakukan
    
}