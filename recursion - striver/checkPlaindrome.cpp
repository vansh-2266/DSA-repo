#include<bits/stdc++.h>
using namespace std;

bool check(int i, string &s){
    if(i >= s.size()/2){
        return true;
    }

    if(s[i] != s[s.size()-i-1]){
        return false;
    }

    return check(i+1, s);
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string s;
    getline(cin, s);

    if(check(0, s) == 1){
        cout<<"Palindrome"<<endl; 
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }



    return 0;

}