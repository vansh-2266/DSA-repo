#include <bits/stdc++.h> 
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //jab coloumn ki index odd h tab bottom to top otherwise even k case me top to bottom

    vector<int> answer;

    for(int i = 0 ; i < mCols; i++){
        if(i % 2 == 0){
            for(int j = 0; j < nRows ; j++ ){
                answer.push_back(arr[j][i]);
            }
        }
        else{
           for(int j = nRows - 1;  j >= 0   ; j-- ){
                answer.push_back(arr[j][i]);
            } 
        }
    }

    return answer;
}