#include <iostream>

using namespace std;

int main(){
    int data;
    cout<<"Input 4 digit number : ";
    cin>>data;

    data = ((data + 8)/3)%5*5;

    cout<<"Result : "<<data;
    
}