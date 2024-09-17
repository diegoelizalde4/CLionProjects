#include <iostream>
using namespace std;

int main(){
    //Notacion O(n)
    int entrada = 10;
    for(int i=0; i<=entrada; i++){  
        cout<<i<<endl;

    }
    //Notacion O(1)
    int arr[5] = {6,7,8,9,10};
    cout<<arr[3]<<endl;

    //Notacion O(n 2)
    for(int i=0; i<4; i++){
        cout<<"Vuelta"<<i+1;
        for(int i=0; i<2; i++){
            cout<<"Hola"<<i+1;
        }
    }


    
}