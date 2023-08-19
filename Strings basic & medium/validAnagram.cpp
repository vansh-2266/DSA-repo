// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

// Input: s = "anagram", t = "nagaram"
// Output: true
 

// **** Approch **** -> first sort both the string after that after that compare each character in a string if its equal then return true else false ..... but initially check id ==f bith the string are of same length is same length the proceed else just return false as if length is not equal of both string then anagram is not possible 

#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
        
        if(s.size() != t.size()){
            return false;
        }

       sort(s.begin(), s.end()); //O(NlogN)
       sort(t.begin(), t.end());

       for(int i = 0; i < s.size() ; i++ ){     //O(s.length())
           if(s[i] == t[i]) continue;
           else return false;
       }
        
        return true;
    }

int main(){

    string s1, s2;
    cin>>s1>>s2;

    cout<<"Anagram ? -> "<<isAnagram(s1,s2);

}