#include<bits/stdc++.h>
using namespace std;

vector<int> rowWiseSum(int arr[][3] , int n, int m ){

    vector<int> ans ; 
    int sum = 0;

    for(int i = 0 ; i < 3 ; i++){
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];  
        }
        ans.push_back(sum);
        sum = 0;
    }
    return ans;
} 

int main(){

    int arr[3][3];

    // input
    cout<<"Enter all the elements of 2D array :"<<endl;

    for(int i = 0 ; i < 3 ; i++){
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
        
    }

    vector<int> answer = rowWiseSum(arr, 3, 3);

    cout<<"Required Sum of Every row of 2D array : "<<endl;

    for(auto e : answer){
        cout<<e<<" ";
    }


}    