 #include<bits/stdc++.h>
 using namespace std;

//  // print 1 to N using Backtracking

 void print1toN(int i , int n){
    if(i < 1){
        return;
    }

    print1toN(i-1, n);
    cout<<i<<endl;
 }


// // print N to 1 using backtracking

// void printNto1(int i , int n){
//     if(i > n){
//         return;
//     }

//     printNto1(i+1, n );
//     cout<<i<<endl;
// }
  
  
 int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

   int n; cin>>n;
  
   int i = n;
   print1toN(i, n); 

//  int i = 1;
// printNto1(i, n);


    return 0;

 }