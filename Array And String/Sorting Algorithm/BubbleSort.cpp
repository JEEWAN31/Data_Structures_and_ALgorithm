#include<iostream>
using namespace std;

void Swap( int n1, int n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void BubbleSort( int arr, int n){
    
    
}

int main(){

    int n;
    cin>>n;
    int arr[n];

    for (int i=0; i<n; i++){
        cin>>arr[i]>>endl;
    }

    BubbleSort(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i];
        cout<<endl;
    }

}