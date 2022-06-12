#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<1,2>
    pair<int,string> p;  //can be containers or a datatype
    p = make_pair(2,"abc");
    p = {3,"abcd"};
    pair<int, string> p1 = p; //copy
    pair<int, string> &p1 = p; //refernce used so sam elemnts have been moved
    //used to relate between 2 elements ya array

    int a[] = {1,2,3};
    int b[] = {2,3,4};

    pair<int, int>p_array[3];
    p_array[0]  = {1,2};
    p_array[1]  = {2,3};
    p_array[2] = {3,4};

    //generally vector of pair is declared
    cin>>p.first;
    cout<<p.first<<"Second Value"<<p.second<<endl;


}