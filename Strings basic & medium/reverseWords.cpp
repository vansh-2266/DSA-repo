// Reverse word in a string

// INPUT = Hey boy Vansh Raj
// OUTPUT = Raj Vansh boy hey

// Note: words are separated by spaces

#include<bits/stdc++.h>
using namespace std;

string reverseWords (string s)
    {
        string result;
        
        int i = 0 ;
        int n = s.length();
        
        while(i < n ){
            while(i < n && s[i] == ' '){
                i++;
            }
            if(i >= n ) break;
            
            int j = i+1;
            while(j < n  && s[j] != ' '){
                j++;
            }
            
            string sub = s.substr(i, j-i);
            
            if(result.length() == 0){
                result += sub;
            }
            else{
                result = sub + " " + result;
            }
            
            i = j+1;
            
        }
        
        return result; 
    }

int main(){
    string str;
    cin>>str;

    cout<<reverseWords(str)<<endl;
}