#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> vec;

    vector<int> v1 (3, 40);

    vector<int> v2 (3, 60);

    vector<int> v3 (4, 10);

    vec.push_back(v1);
    
    vec.push_back(v2);
    
    vec.push_back(v3);

    // for(auto it: vec){
    //     for(auto i: it){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout << vec[0][0]<<endl;

    //basic way to acess ll elements
    for(int i = 0 ; i < vec.size(); i++){
        for(int j = 0 ; j < vec[i].size(); j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}