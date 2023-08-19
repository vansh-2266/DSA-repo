
// Divide & Conqure Algo 

#include <bits/stdc++.h>
using namespace std;

    int partition (int arr[], int low, int high)
    {
       int pivot = arr[low];
       int i = low;
       int j = high;
       
       while(i < j){

        // // For doing in ascending
           while(arr[i] <= pivot && i <= high - 1){
               i++;
           }
           while(arr[j] > pivot && j >= low){
               j--;
           }
           
        // //For doing in Descending Order
            //    while(arr[i] >= pivot && i <= high - 1){
            //        i++;
            //    }
            //    while(arr[j] < pivot && j > low){
            //        j--;
            //    }


           if(i < j ){
               swap(arr[i], arr[j]);
           }
       }
       
       swap(arr[low], arr[j]);
       return j;
    }

    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low < high){
            
            int parti = partition (arr, low, high);
            
            quickSort(arr, low, parti - 1);
            quickSort(arr, parti + 1, high );
            
        }
    }


    int main(){
        int arr[] = {10,5,11,24,3,2};
        int low = 0;
        int high = sizeof(arr)/sizeof(int) - 1;

        quickSort(arr, low, high);

        for(auto it : arr){
            cout<<it<<" ";
        }
    }