// reversing order of items using STACK:

#include<bits/stdc++.h>
// #include<iostream>
// #include<stack>
// #include<string>

using namespace std;

void reverseStr(string &str){
    stack<char> s;
    for(int i = 0 ; i < str.length() ; i++){
        s.push(str[i]);
    }

    for (int i = 0; i < str.length() ; i++)
    {
        str[i] = s.top();
        s.pop();
    }
    
}

int main(){

    // // Another way to reverse a string using reverse function in cpp

    // string str = "Polite";
    // reverse(str.begin(), str.end());
    // cout<<str<<endl;

    // // ************************************
    string str ;
    cin>>str;
    // string before reverse
    cout<<str<<endl;

    reverseStr(str);

    // string after reverse
    cout<<str<<endl;
}