#include<bits/stdc++.h>
using namespace std ;

int main(){

    int n =6;
    int arr[n] = {10,4,2,5,81,3};

    //loop for no. of rounds
    for(int i = 1; i < n ; i++){
        int temp = arr[i];

        // // using for loop (M1):
        // int j;
        // for(j = i -1; j >=0; j--){
        //     if(temp < arr[j]){
        //         arr[j+1] = arr[j]; //shift operation
        //     }
        //     else{
        //         break;
        //     }
        // }


        // // using while loop (M2):

        //  int j = i-1;
        // while(j >= 0 ){
        //     if(temp < arr[j]){
        //         arr[j+1] = arr[j]; //shift operation
        //     }
        //     else{
        //         break;
        //     }

        //     j--;
        // }

         // // using while loop (M3):

         int j = i-1;
        while(j >= 0 && arr[j] > temp ){
            
                arr[j+1] = arr[j]; //shift operation
                 j--;
        }

        arr[j+1] = temp;

    }


    // loop for printing an array
    for(int i = 0 ; i < n ;i++){
        cout<<arr[i]<<" ";
    }

}