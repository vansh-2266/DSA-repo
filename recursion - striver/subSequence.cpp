#include<bits/stdc++.h>
using namespace std;
  
void printSubsequence(int in, vector<int> &ans, int arr[], int n){

    if(in == n){
        for(auto it : ans){
            cout<<it<<" ";
        }

        if(ans.size() == 0){
            cout<<"{}"<<" ";
        }
        cout<<endl;
        return;
    }

    ans.push_back(arr[in]);
    printSubsequence(in+1, ans, arr, n);
    ans.pop_back();
    printSubsequence(in+1, ans, arr, n);

}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; cin>>n;
    int arr[n];

    // input loop for an array
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    vector<int> ans;

    printSubsequence(0, ans, arr, n);




    return 0;

}