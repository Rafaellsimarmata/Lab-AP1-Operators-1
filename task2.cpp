#include <iostream>

using namespace std;

int main(){
    int data;
    cout<<"Input 6 digit number : ";
    cin>>data;
    
    int p = data;
    int i = 5;
    int arr[6];

    while (p>0){
        int x = (p%10);
        if (x >7){
            x = (x + 2) % 10;
        }else{
            x = x + 2;
        }
        arr[i] = x;
        i--;
        p = p/10;
    }

    cout<<"Result : ";
    for (int j = 0; j < 6; j++){
        cout<<arr[j];
    }
    
    
    


    
}