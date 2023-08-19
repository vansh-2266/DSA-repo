#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout<<"enter size of array : " ;
    cin>>n;
    int arr[n];
    cout<<"enter elements of array : " ;
    for(int i =0 ; i < n; i++){
        cin>>arr[i];
    }

    // let in question given maximum element in a array can be 100000

    //precomputation of hashing method
    //hash array
    int hashArr[100000+1] = {0};

    for(int i = 0; i < n; i++){
        hashArr[arr[i]]++;
    }

    int t;
    cout<<"testcases : ";
    cin>>t;

    while(t--){
        int find;
        cout<<"no. to find count  : ";
        cin>>find;

       //fetch in hashing method
        cout<<"Required count of "<<find<<"in an array is : "<<hashArr[find]<<endl;
    }

    




}