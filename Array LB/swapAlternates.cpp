#include <bits/stdc++.h>
using namespace std;

void swapResult(int arr[], int n){
    
    for(int i = 0 ; i < n ; i += 2){
       if(i+1 <= n-1){
        swap(arr[i], arr[i+1]);
       }
    }

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
 

}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    swapResult(arr, n);

    cout<<"\n";

    int arr1[] = {1,2,3,4,5};
    int s = 5;
    swapResult(arr1, s);

}