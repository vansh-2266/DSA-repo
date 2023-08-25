#include<bits/stdc++.h>
using namespace std;

int main(){
    list <int> l = {10,15,15,13,20,20,20,10};

    l.unique();

    for(auto x: l){
        cout<<x<<" ";
    }
}