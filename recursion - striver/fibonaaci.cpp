#include<bits/stdc++.h>
using namespace std;

int fibo (int n){
    if(n <= 1){
        return n;
    }

    return fibo(n-1) + fibo(n-2);
}

//Time complexity is O(2^n)

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n ;
    cin>>n;

    cout<<fibo(n)<<endl;

    return 0;

}