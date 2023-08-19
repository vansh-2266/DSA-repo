// INPUT:
// 2
// N2 i&nJA?a& jnI2n
// A1b22Ba

//OUTPUT:
// Yes
// No

// Note: For checking palindrome consider alphabates and numbers only ignore symbols & Whitespaces.

#include <bits/stdc++.h> 
using namespace std;

// to make it non case sensitive.. convert it into lowercase
char toLowerCase(char ch){
    if( ch >= 'a' && ch <= 'z' ||  ch >= '0' && ch <= '9' ){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;    
    }
}

string change(string s){
     string str="";
     for(int i=0;i<s.size();i++){
         if(s[i]>='a' && s[i]<='z'){
             str.push_back(s[i]);
         }
         if(s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9'){
             char ch=toLowerCase(s[i]);
             str.push_back(ch);
         }
     }
     return str;
}

bool checkPalindrome(string s)
{
    string st = change(s);
    int b = 0;
    int e = st.size() -1 ;
    
    while(b <= e){
        if(st[b] != st[e]){
            return 0;
        }
        else{
            b++;
            e--;
        }
    }
    
    return 1;
}

int main(){
    string strr;
    cin>>strr;

    cout<<checkPalindrome(strr)<<endl;
}