#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int a[3] = {3,1,2};
    // int b[3] = {'g','e','k'};
    
    // pair<int, char> p1 (a[0],b[0]);
    // pair<int, char> p2 (a[1],b[1]);
    // pair<int, char> p3 (a[2],b[2]);
    
    // pair<int,char> arr[3] = {p1,p2,p3};
    // sort(arr,arr+3);
    
    
    // for(int i = 0 ; i < 3 ; i++){
    //     cout<<arr[i].second<<" ";
    // }
    
     int a[3] = {3,1,2};
     char b[3] = {'g','e','k'};
    
    pair<int, char> pa[3];
    
    
    for(int i = 0 ; i < 3 ; i++){
        pa[i] = {a[i],b[i]};   
    }
    
    sort(pa, pa+3);
    
    for(int i = 0 ; i < 3 ; i++){
        cout<<pa[i].second<<" ";   
    }
    return 0;
    return 0;
}