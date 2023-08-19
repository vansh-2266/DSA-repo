#include<bits/stdc++.h>
using namespace std;

// //method one
// void reverse(int l, int r, int arr[], int n){

//     if(l >= r){
//         return;
//     }

//     swap(arr[l] , arr[r]);
//     reverse(l+1, r-1, arr, n );

// }

// method two
void reverse2(int i, int arr[], int n){
    if(i >= n/2){
        return;
    }

    swap(arr[i], arr[n-i-1] );
    reverse2(i+1, arr, n);
}

  
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; cin>>n;
    int arr[n];

    //loop to take input
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }

    int first = 0;
    int last = n-1;

    // methon one call 
    // reverse(first, last, arr, n);

    //method two call
    reverse2(0, arr, n);

    //loop to print array
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }


    return 0;

}