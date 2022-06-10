#include<bits/stdc++.h>
using namespace std;

int main(){
     map< char ,int > m;
        m.insert({'I',1});
        m.insert({'V',5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C', 100});
        m.insert({'D', 500});
        m.insert({'M', 1000});
    cout<<m.first<<m.second;
    return 0;
}