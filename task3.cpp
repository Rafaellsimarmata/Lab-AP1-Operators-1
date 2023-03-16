#include <iostream>
using namespace std;

int main(){
    int data;
    cout<<"Masukkan angka : ";    
    cin>>data;

    int p = data;
    int x = 0;

    while (p > 0){
        x += p % 10;
        p /= 10;    
    }

    cout<<"Result : "<<x;
    
    
    
}