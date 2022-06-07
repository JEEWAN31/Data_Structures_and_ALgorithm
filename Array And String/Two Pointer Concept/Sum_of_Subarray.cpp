#include<iostram>
using namespace std;

void Sum(int arr[], int n, int k){
    int i=0;
    int j=1;
    int sum = arr[i]+arr[j];
    while(i<j){
        if(sum<k)
    }

}

int main(){

    int n;
    cin>>n;
    int arr[n];
    
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the Number whose sum you want to enter";
    cin>>k;
    Sum(arr,n,k);

    return 0;
}