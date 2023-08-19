// You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists.
// A substring is a contiguous sequence of characters within a string.

// Example 1:
// Input: num = "52"
// Output: "5"

// Example 2:
// Input: num = "4206"
// Output: ""

// Example 3:
// Input: num = "35427"
// Output: "35427"

// Approch ->  as we know no. whose last digit is not divisible by 2 is an odd no. .... so with this logic we will take a pointer variable pointing last element of  string i.e. last digit of no. and traverse through it backward as when we get element/digit is not divisble by 2 then we store that index and break the loop and return the substring of number from actual string till that number.

#include<bits/stdc++.h>
using namespace std;

string largestOddNumber(string s) {

        int n=s.length();
        int j=-1;
        for(int i=n-1;i>=0;i--)
        {
            int num=(int)(s[i]);
            if(num%2!=0)
            {
                j=i;
                break;
            }
        }
        if(j==-1)
            return "";
        string t="";
        for(int i=0;i<=j;i++)
            t.push_back(s[i]);
        return t;
    }

int main(){
    string s;
    cin>>s;

    string result = largestOddNumber(s);

    for(auto e: result){
        cout<<e;
    }

}