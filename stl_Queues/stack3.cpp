// stock span problem & its variation
#include<bits/stdc++.h>
using namespace std;

void SpanOn (int arr[], int n);

int main (){
    int n;
    cin>>n;

    int arr[n];
    for(int i =0; i < n ; i++){
        cin>>arr[i];
    }

    

    // for(int i =0; i < n; i++){
    //     int span = 1;
    //     for(int j = i-1 ; j >= 0 ; j-- ){
    //         if(arr[j]<= arr[i] ){
    //             span++;
    //         }
    //         else{
    //             break;
    //         }
    //     }

    //     cout<<span<<" ";
    // }

    // cout<<"\n";

    SpanOn (arr, n);

}


//effecient code function:

void SpanOn (int arr[], int n){
    stack<int> s;
    s.push(0);

    for(int i = 0; i < n ; i++){
        while(s.empty() == false && s.top() <= arr[i]){
            s.pop();
        }

        int span;

        if(s.empty() == true){
            span = i+1;
        }else{
            span = i - s.top();
        }

        cout<<span<<" ";
        s.push(i);
    }
}