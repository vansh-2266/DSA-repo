#include <bits/stdc++.h> 
using namespace std;

string replaceSpaces(string &str){

	string ans = "";
	for(int i = 0 ;i < str.length(); i++){
		
		if(str[i] == ' '){
			ans.push_back('@');
			ans.push_back('4');
			ans.push_back('0');
		}
		else{
			ans.push_back(str[i]); 
		}	
	}

    return ans;

}
