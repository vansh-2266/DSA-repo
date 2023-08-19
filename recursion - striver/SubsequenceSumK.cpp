#include<bits/stdc++.h>
using namespace std;

// some how complete but not completely correct o/p wise!


void printSubsequence( int in, int sum, vector<int> &ans, int arr[], int n, int k){

    int count = 0;

    if(in == n){
        
        if(sum == k){
            count++;
            cout<<count<<endl;
        }
        return;
    }

    ans.push_back(arr[in]);
    sum += arr[in];
    printSubsequence(in+1, sum,ans, arr, n, k);
    ans.pop_back();
    sum -= arr[in];
    printSubsequence( in+1, sum, ans, arr, n, k);

}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; cin>>n;
    int arr[n];

    int k; cin>>k;

    // input loop for an array
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    vector<int> ans;
    // int count = 0;
    int sum = 0;
    

   printSubsequence( 0, sum, ans, arr, n, k);


    return 0;

}