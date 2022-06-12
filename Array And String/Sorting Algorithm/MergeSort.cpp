#include<iostream>
using namespace std;

void Merge(int arr[], int n, int mid, int l){
    int arr1[mid];
    int arr2[n-mid];
    int j=0;
    int k=0;

    for(int i=0; i<n; i++){
        
        if(i<mid){
            arr1[j] = arr[i];
            j++;
        }
        else {
            arr1[k] = arr[i];
            k++;
        }
    }
    int i=0; 
    j=0;
    k=0;
    while (i<mid && j<n-mid-1){
        if(arr1[i]<arr2[j]){
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else{
            arr[k]= arr2[j];
            j++;
            k++;
        }
    }
    while(i<mid){
        arr[k]= arr1[i];
        i++; k++;
    }
    while(j<n-mid-1){
        arr[k] = arr1[j];
        j++;
        k++;
    }

}

void MergeSort(int arr[], int n, int l){

   
    
        if (l < n){
            int mid = (n+l)/2;
            MergeSort(arr,mid,0);
            MergeSort(arr,n,mid+1);
            Merge(arr, n,mid,l);
        }
    

}


int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
        cout<<endl;
    }

    MergeSort(arr,n,0);

    for (int i=0; i< n ;i++){
        cout<<arr[i]<<endl;
    }


}