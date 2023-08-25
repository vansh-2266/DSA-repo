#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;

    vector<int> vec = {8,100,20,40,3,7};

    for(auto i: vec){
        if(i < k){
            cout<<i<<" ";
        }
    }

   return 0;
}