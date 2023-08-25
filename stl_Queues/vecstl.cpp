#include<bits/stdc++.h>
using namespace std;

int main (){

    vector<int> vec1 = {1,4,2,5,11} ;
    // vec1.push_back(1);
    // vec1.push_back(4);
    // vec1.push_back(2);
    // vec1.push_back(5);
    // vec1.push_back(11);

    for(auto it: vec1){
        cout<<it<<" ";
    }

    cout<<endl;

    // if we want to take just first three element of vec1 into new vector vec2
    vector<int> vec2(vec1.begin() , vec1.begin() + 3);

    for(auto i: vec2){
        cout<< i <<" ";
    }
    
}