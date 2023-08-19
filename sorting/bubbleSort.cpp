#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {8, 22, 7, 9, 31, 5, 13};

    int size = sizeof(arr)/sizeof(int);

    // for(int i =0 ; i < size-1 ; i++){

    //     for(int j =0 ; j < size - 1 ; j++){
    //         if(arr[j] > arr[j + 1]){
    //             swap(arr[j] , arr[j + 1]);
    //         }
    //     }

    // }


    // //more optimised using bool 

    bool check = false;

    for(int i =0 ; i < size-1 ; i++){

        for(int j =0 ; j < size - i - 1 ; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j] , arr[j + 1]);
                check = true;
            }
        }

        if(check == false){
            break; 
        }

    }
 

    for(int k = 0; k < size; k++){
        cout<<arr[k]<<" ";
    }
}