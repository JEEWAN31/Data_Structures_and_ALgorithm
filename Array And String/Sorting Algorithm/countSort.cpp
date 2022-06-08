#include<iostream>
using namespace std;

void countSort (int arr[], int n){

    int k = arr[0];
    for(int i=1;i<n;i++){
        k= max(arr[i],k);
    }
    int arr2[10] = {0};
    
    for(int i=0; i<n; i++){
        arr2[arr[i]]++;
    }
    cout<<"array after number of count"<<endl;
    for(int i=0 ;i<n; i++){
        cout<<arr2[i]<<endl;
    }
    for (int i=1; i<10; i++){
        arr2[i] += arr2[i-1];
    }
    cout<<"array after sum of count"<<endl;
    for(int i=0 ;i<n; i++){
        cout<<arr2[i]<<endl;
    }
    int arr3[n] ;
    for (int i=0; i<n; i++){
        arr3[i] = arr[i];
    }

    for(int i=n-1; i>=0; i--){
        arr3[--arr2[arr[i]]] = arr[i];
    }
    cout<<"Hola"<<endl;
    for (int i=0; i<n; i++){
        cout<<arr3[i]<<endl;
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    countSort(arr,n);
/*
    for (int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
*/
}