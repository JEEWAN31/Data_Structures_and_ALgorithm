#include<iostream>
using namespace std;

void countSort (int arr[], int n){

    int k = arr[0];
    for(int i=1;i<n;i++){
        k= max(arr[i],k);
    }
    int arr2[k] = {0};
    
    for(int i=0; i<n; i++){
        arr2[arr[i]]++;
    }
    for (int i=1; i<k; i++){
        arr2[i] += arr2[i-1];
    }
    int arr3[n] = arr;

    for(int i=n-1; i>=0; i--){
        arr[arr2[arr3[i]]] = arr3[i];
        arr2[arr3[i]]--;
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i=0; i<n; i++){
        cin>>arr[i]>>endl;
    }

    countSort(arr,n);

    for (int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

}