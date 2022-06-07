/*Given a number n find out the number of 1 occured till the number occur from 1 to n
For eg if the number give is 12 
so the answer is 5 (1,10,11,12)
if N = 0
so the output is 0
*/
#include<iostream>
using namespace std;

//Via Recursion but of Higher time Complexity
int countDigitOne(int n) {
        if (n == 0){
            return 0;
        }
        else if(n<10 && n>0){
            return 1;
        }
        int num = 0;
        int temp = n;
        while (temp > 0){
            int x = temp % 10;
            temp = temp/10;
            if(x==1){
                num++;
            }
        }
         num = num + countDigitOne(n-1) ;
        return num;
        
    }

//using some inbuilt functiona nd converting all the given numbers to string and then fing '1' in all those particular string
int countDigitOne_part2(int n)
{
    int countr = 0;
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        countr += count(str.begin(), str.end(), '1');
    }
    return countr;
}

int countDigitOne_part3(int n)
{
    int countr = 0;
    for (long long i = 1; i <= n; i *= 10) {
        long long divider = i * 10;
        countr += (n / divider) * i + min(max(n % divider - i + 1, 0LL), i);
    }
    return countr;
}

int main(){
    int n;
    cout<<"Enter a valid number greater than 1 "<<endl;
    cin>>n;
    cout<<"Answer  Via Recursion Function"<<endl;
    cout<<countDigitOne(n)<<endl;
    cout<<"Answer via the in-built function and changing it to string "<<endl;
    cout<<countDigitOne_part2(n)<<endl;
    cout<<"Answer via another in-built function  "<<endl;
    cout<<countDigitOne_part3(n)<<endl;
    return 0;
}