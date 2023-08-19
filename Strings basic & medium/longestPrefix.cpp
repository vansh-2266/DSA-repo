// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".

// Input: strs = ["flower","flow","flight"]
// Output: "fl"

// logic to approch -  Here we are taking one string from vector of string then the comparing each string with that one string i.e comparing each character for getv common prefix from all strings in a vector 

#include<bits/stdc++.h>
using namespace std;

 string longestCommonPrefix(vector<string>& str) {
        if(str.size() == 0){
            return "";
        }
        string prefix;

        for(int i = 0 ; i < str[0].length(); i++){
            char ch = str[0][i];
            for(string s : str){
                if(ch == s[i]){
                    continue;
                }
                else{
                    return prefix;
                }
            }

            prefix = prefix + ch;
        }

        return prefix;
    }

    int main(){

        int n;
        cin>>n;

        string s;
        vector<string> word;

        for(int i = 0 ; i < n ; i++){
            cin>>s;
            word.push_back(s);
        }
        
        cout <<"The required prefix is : "<< longestCommonPrefix(word)<<endl;
    }