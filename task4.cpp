#include <iostream>
#include <string>
using namespace std;

void toTime(int data){

    string detik = to_string(data % 60);  //membuat hasil ke dalam string
    int sisaDetik = data % 60;   // untuk menampilkan sisa detik 
    data = data /60;    //mengubah dari detik ke menit
    string menit = to_string(data % 60); // membuat hasil ke dalam string
    int sisaMenit = data % 60;  // menampilkan sisa menit 
    data = data /60;  // mengubah dari menit ke jam
    string jam = to_string(data); // membuat hasil ke dalam string
    int sisaJam = data; // menyimpan value jam

    string zero = "0" ;   //agar dapat menampilkan bentuk 00:00

    if (sisaDetik < 10 ){
        detik = zero + detik;   // jika sisa detik <10, maka detik akan didahului 0
    }

    if (sisaMenit < 10 ){
        menit = zero + menit;  // jika sisa menit <10, maka menit akan didahului 0
    }

    if (sisaJam < 10 ){
        jam = zero + jam; // jika sisa jam <10, maka jam akan didahului 0
    }
    
    cout<<jam<<":"<<menit<<":"<<detik;  //menampilkan jam 
    
}

int main(){
    int data;
    cout<<"Masukkan jumlah detik : ";    
    cin>>data;    //meminta inputan dari user 

    toTime(data);    //menjalankan fungsi totime

    
    
    
}