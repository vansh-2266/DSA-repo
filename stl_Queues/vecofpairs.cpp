#include <bits/stdc++.h>
using namespace std;

void Sortstud(int roll[], int marks[], int n){

    vector<pair<int,int>> ans;

    for(int i = 0 ; i < n ; i++){
        ans.push_back({marks[i], roll[i]});
    }

    sort(ans.begin(), ans.end(), greater<pair<int,int>>()); // here greater fxn just reverse the order of the sorted vector.
 
    for(int i = 0 ; i < n ; i++){
        cout<<ans[i].first <<" --> "<<ans[i].second<<endl;
    }

}

int main(){

    int n = 6;
    int roll[n] = {101,104,105,102,103,111};
    int marks[n] = {10,90,100,25,63,80};

    Sortstud(roll, marks, n);
     

}