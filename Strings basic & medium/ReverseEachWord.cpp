// Reverse Each word in a string

// INPUT = Hey.my.name.is.Vansh
// OUTPUT = yeH.ym.eman.si.hsnaV
// Note: words are separated by dot 

#include<bits/stdc++.h>
using namespace std;

string reverseWords (string s)
    {
        string res;
        stack<int> stk;
        
        for( auto e : s){
            if(e != '.'){
                stk.push(e);
            }
            else{
                while(!stk.empty()){
                    res.push_back(stk.top());
                    stk.pop();
                }
                
                res.push_back('.');
            }
        }
        
        while(!stk.empty()){
                    res.push_back(stk.top());
                    stk.pop();
        }
        
        return res; 
    }

int main(){
    string str;
    cin>>str;

    cout<<reverseWords(str)<<endl;
}