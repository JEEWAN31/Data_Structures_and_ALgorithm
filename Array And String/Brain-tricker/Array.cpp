#include<iostream>
using namespace std;

int main(){
    int arr[5] = {0, 1, 2, 3, 4};
    int arr1[5] = {0,};
    int *ptr;
    ptr = new int[5] ;
    for (int i=0; i<5; i++){
        cout<<arr[i]<<endl;
        
    }
    cout<<"First array";
    for (int i=0; i<5; i++){
        cout<<arr1[i]<<endl;
        
    }
    cout<<"Second array";
    for (int i=0; i<5; i++){
        cout<<ptr[i]<<endl;
       
    }
     cout<<"Third Array"<<endl;
}