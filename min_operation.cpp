#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//side cases are when x = 9
// and the given array is 6,3,8 so the answer should be correct but we are giving it to be wrong because as acc to the algorithm we arew subtracting 8 first insted of subtractiong 6 and 3 resoectively

int minOperations(vector<int>& nums, int x, int k) {

        int start = 0;
        int end = k-1;
        int count = 0;
        
        while(start<= end){
            
            if(nums[end] >= nums[start]){
                if(x-nums[end] < 0 ) {      
                    if(x-nums[start] < 0){
                        return -1;}
                    else {
                    x -= nums[start];
                    count ++;
                    start ++;
                    //cout<<count<<"first"<<endl;
                }
                }
                else {
                    x -= nums[end];
                    count++;
                    end--; 
                    //cout<<count<<"Second"<<endl; 
                }
            }
            
            else 
               {
                    if(x-nums[start] < 0 )     
                {   if(x-nums[end] < 0 ){
                        return -1;
                }
                else {
                    x -= nums[end];
                    count ++;
                    end --;
                    //cout<<count<<"third"<<endl;
                }}
                else {
                    x -= nums[start];
                    count++;
                    start++; 
                    //cout<<count<<"fourth"<<endl;
                
            }
            } 
            
            if(x == 0){
                return count;
            }
            //cout<<count<<"last"<<endl;
            }
      return -1;  

    }

int main(){
    vector<int>sum;
    sum.push_back(3);
    sum.push_back(2);
    sum.push_back(20);
    sum.push_back(2);
    sum.push_back(2);
    sum.push_back(3);
    cout<<"here is the output"<<endl;
    cout<<minOperations(sum,10,6);
    return 0;
}