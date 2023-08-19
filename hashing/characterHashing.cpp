#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin>>s;

    int hashArr[26] = {0};

    for(int i = 0; i < s.size(); i++){
        int ind = s[i] - 'a';
        hashArr[ind]++;
    }

    int t;
    cout<<"testcases : ";
    cin>>t;

    while(t--){
        char find;
        cout<<"char frequency to find count  : ";
        cin>>find;

        int res = find - 'a'; 

       //fetch in hashing method
        cout<<"Required count of "<<find<<" in an array is : "<<hashArr[res]<<endl;
    }

    




}