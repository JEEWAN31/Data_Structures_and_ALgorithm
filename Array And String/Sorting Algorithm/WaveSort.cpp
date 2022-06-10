/* 
Wave sort have elements not either in ascending and descending order, it makes it in a form of a wave.
*/

// eg if I am inserting 4,2,67,2,6 
// I willget an 
#include<iostream>
using namespace std;

// Swap function to swap elements 
void swap( int arr[], int n, int m){
    int temp = arr[n];
     arr[n] = arr[m];
     arr[m] = temp;
}

void wavesort(int arr[], int n){

    for(int i=1; i< n; i= i+2){
        
        if(arr[i]>arr[i-1]){
            swap(arr,i, i-1);
        }
        if(arr[i]>arr[i+1] && i<=n-2){
            swap(arr, i, i+1);
        }
    }
}

int main(){

    int n;
    cout<<"enter the number of elements you want to get entered";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    wavesort(arr,n);

    cout<<"Elementes after getting sorted"<<endl;
    for (int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}