#include <iostream>
#include <string>
using namespace std;

void toTime(int data){

    string detik = to_string(data % 60);
    int sisaDetik = data % 60;
    data = data /60;
    string menit = to_string(data % 60);
    int sisaMenit = data % 60;
    data = data /60;
    string jam = to_string(data);
    int sisaJam = data;

    string zero = "0" ;

    if (sisaDetik < 10 ){
        detik = zero + detik;
    }

    if (sisaMenit < 10 ){
        menit = zero + menit;
    }

    if (sisaJam < 10 ){
        jam = zero + jam;
    }
    
    cout<<jam<<":"<<menit<<":"<<detik;
    
}

int main(){
    int data;
    cout<<"Masukkan jumlah detik : ";    
    cin>>data;

    toTime(data);

    
    
    
}