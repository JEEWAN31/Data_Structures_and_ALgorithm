#include<iostream>
using namespace std;

void DNFSort(int arr[], int n){
    int mid =0;
    int init = 0;
    int end = n-1;

    while (mid<=end){
        if (mid ==0){
            int temp = arr[mid];
            arr[mid]= arr[init];
            arr[init] = temp;
            mid++;
            init ++;
        }
        
        else if(mid ==1){
            mid ++;
        }
        else {
            int temp = arr[mid];
            arr[mid]= arr[end];
            arr[end] = temp;
            end --;
        }
    }
}
 
int main(){
    int n;
    cout<<"enter the numbers"<<endl;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    DNFSort(arr,n);

    cout<<"Array after getting sorted"<<endl;
    for (int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}