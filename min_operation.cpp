#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minOperations(vector<int>& nums, int x, int k) {

        int start = 0;
        int end = k-1;
        int count = 0;
        
        while(start<end){
            
            if(nums[end] >= nums[start]){
                if(x-nums[end] < 0 ) {      
                    if(x-nums[start] < 0){
                        return -1;}
                else if( x-nums[start] >0){
                    x -= nums[start];
                    count ++;
                    start ++;
                    cout<<count<<endl;
                }
                }
                else {
                    x -= nums[end];
                    count++;
                    end--; 
                    cout<<count<<endl; 
                }
            }
            
            else 
            {if(nums[start]>=nums[end]){
                if(x-nums[start] < 0 )     
                {   if(x-nums[end] < 0 ){
                        return -1;
                }
                else if(x-nums[end] > 0){
                    x -= nums[end];
                    count ++;
                    end --;
                }}
                else {
                    x -= nums[start];
                    count++;
                    start++; 
                
            }
            } 
            } 
            if(x == 0){
                return count;
            }
            cout<<count<<endl;
            }
      return -1;  

    }

int main(){
    vector<int>sum;
    sum.push_back(3);
    sum.push_back(2);
    sum.push_back(20);
    sum.push_back(1);
    sum.push_back(1);
    sum.push_back(3);
    cout<<"here is the output"<<endl;
    cout<<minOperations(sum,10,6);
    return 0;
}