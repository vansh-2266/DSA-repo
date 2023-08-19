 #include<bits/stdc++.h>
 using namespace std;

   // void printName(int n){
   //    if(n<=0){
   //       return;
   //    }
   //    else{
   //       cout<<"VANSH"<<endl;
   //       cout<<n<<endl;
   //       n--;
   //       printName(n);
   //    }

   // }

   void print1toN(int i, int n){

      if(i > n){
         return;
      }

      cout<<i<<endl;
      i++;
      print1toN(i, n);

   }

 int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

   int n; cin>>n;
   // printName(n);
   print1toN(1, n);


    return 0;

 }