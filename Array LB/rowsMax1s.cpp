// Question //Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.

// Input: 
// N = 4 , M = 4
// Arr[][] = {{0, 1, 1, 1},
//            {0, 0, 1, 1},
//            {1, 1, 1, 1},
//            {0, 0, 0, 0}}
// Output: 2

//code:

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int m; cin>>m;
    vector<vector<int>> vec ;

    // taking input for 2D vector
    for(int i = 0; i < n ; i++){
        
        vector<int> v;
        for(int  j =0; j < m ;j++){
            int num; cin>>num;
            v.push_back(num);    
        }

        vec.push_back(v);
    }

    // // priting of 2D vector
    // for(int i = 0 ; i < n ; i++){
    //     for(int j =0 ; j < m ; j++){
    //         cout<<vec[i][j]<<" ";
    //     }

    //     cout<<"\n";
    // }


// // To Check maximum number of 1's.
    int ans = -1;
    int maxCounter = 0 ;

    for(int i = 0 ; i < n ; i++ ){
        int ones = 0;
        for(int j = 0 ; j < m ; j++ ){
            if(vec[i][j] == 1){
                ones++;
            }
        } 

        if(ones > maxCounter){
            maxCounter = ones;
            ans = i;
        }
    }

    cout<<"Required Answer = "<<ans;
}