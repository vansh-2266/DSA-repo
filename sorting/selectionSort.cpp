#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {64,25,12,22,11};

    int size = sizeof(arr)/sizeof(int);

    // for(int i = 0 ; i < size ; i++ ){
    //     for(int j = i+1; j < size ; j++){
    //         if(arr[i] > arr[j]){
                
    //             swap(arr[i], arr[j]);

    //         }
    //     }
    // }

    for(int i = 0 ; i < size - 1 ; i++ ){
        int min = i;

        for( int j = i+1 ; j < size ; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
 
        swap(arr[i], arr[min]);
    }

    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" " ;
    }
}