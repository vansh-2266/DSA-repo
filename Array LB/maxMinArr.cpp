#include<bits/stdc++.h>
using namespace std;

////code to print minimum & maximum element in an array/ vector using "STL *min_element() & *max_element() fumction". 

// int main(){
//     vector<int> v(5, 0);
//     for(int i = 0; i < 5 ; i++){
//         cin>>v[i];
//     }
//     cout<<endl;
//     for(int i = 0; i < 5 ; i++){
//         cout<<v[i];
//     }
//     cout<<endl;
//     int maxi = *max_element(v.begin(), v.end());
//     int mini = *min_element(v.begin(), v.end());
//     cout<<maxi<<endl;
//     cout<<mini<<endl;
// }



//// naive solution to find min & max element in an array

int main(){

    int arr[] = {10,8,12,4,5,4,7,10,52,41};
    int size = sizeof(arr)/sizeof(int);
    int min =arr[0], max =arr[0];

    for(int i = 1 ; i < size ;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    for(int i = 1 ; i < size ;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout<<"Maximum = "<<max<<endl;
    cout<<"Minimum = "<<min<<endl;

}
