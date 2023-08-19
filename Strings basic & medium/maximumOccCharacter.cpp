#include<bits/stdc++.h>
using namespace std;

//Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        char arr[26] ={0};
        
        for(int i = 0; i < str.length();i++ ){
            char ch = str[i];
            
            int number = 0 ;
            number = ch-'a';
            arr[number]++;
        }
        
        int ans = 0 ; int maxi = - 1;
        for(int i = 0 ; i < 26 ; i++){
            if(maxi < arr[i]){
                ans = i;
                maxi = arr[i];
            }
        }
        
        char res = 'a' + ans ;
        return res;
    }

    int main(){
        string s;
        cin>>s;

        cout<<getMaxOccuringChar(s)<<endl;

    }