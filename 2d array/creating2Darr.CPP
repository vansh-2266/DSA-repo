#include<bits/stdc++.h>
using namespace std;

int linearSearch (int arr[][4] , int s, int row, int col){
    
    for(int i = 0 ; i < row ; i++){
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j] == s){
                return true;
                break;
            }
        }
        
    }

    return false;
}
 
int main(){

    int arr[3][4];


    // input
    for(int i = 0 ; i < 3 ; i++){
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
        
    }

    //output
    for(int i = 0 ; i < 3 ; i++){
        for (int j = 0; j < 4; j++)
        {
            cout<< arr[i][j] <<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the Element to search in a 2D array : "<<endl;
    int s;
    cin>>s;

    if(linearSearch(arr, s, 3, 4)){
        cout<<"Element Found!"<<endl;
    }
    else{
        cout<<"Element NOT Found"<<endl;
    }
}