#include<iostream>
using namespace std;

/*void Swap( int n1, int n2){
    int temp = n1; 
    n1 = n2;
    n2 =temp;
}*/

void BubbleSort(int arr[], int n){

    int counter = 1;
    while (counter < n-1){
        for (int i=0; i<n-counter; i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter ++;
    }
    
}

int main(){

    int n;
    cin>>n;
    int arr[10];

    for(int i=0; i<10; i++){
        cin>> arr[i];
        cout<< endl;
    }

    BubbleSort(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i];
        cout<<endl;
    }

}