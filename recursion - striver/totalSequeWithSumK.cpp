#include<bits/stdc++.h>
using namespace std;

// // bool flag = false;
// void printSubsequence( int in, int sum, vector<int> &ans, int arr[], int n, int k){

//     int count = 0;

//     if(in == n){
        
//         if(sum == k ){
//             // flag = true;
//             for(auto it: ans){
//                 cout<<it<<" ";
//             }
//             cout<<endl;
//         }
//         return;
//     }

//     ans.push_back(arr[in]);
//     sum += arr[in];
//     printSubsequence(in+1, sum,ans, arr, n, k);
//     ans.pop_back();
//     sum -= arr[in];
//     printSubsequence( in+1, sum, ans, arr, n, k);
// }


// if we need to print only no./count of sequence with sum k

 int subarraySum(int nums[], int k, int i, int sum, int n) {

        if(i == n){
            if(sum == k){
                return 1;
            }

            return 0;
        }

        sum += nums[i];
        int l = subarraySum(nums, k, i+1, sum, n);

        sum -= nums[i];
        int r = subarraySum(nums, k, i+1, sum, n);        

        return l + r;
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
    int sum = 0;
    

//    printSubsequence( 0, sum, ans, arr, n, k);


   cout<< subarraySum(arr, k, 0, sum, n);


    return 0;


}