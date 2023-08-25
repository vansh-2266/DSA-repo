// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     // array<int, 5> arr = {1, 3, 4, 5, 6}; 

// 	// for(auto i = arr.begin(); i!=arr.end();i++) {
// 	// 	cout << *i << " "; 
// 	// }

//     // cout<<endl;

//     // // cout<<*(arr.begin())<<endl;

//     // for(auto i = arr.rbegin(); i != arr.rend() ; i++){
//     //     cout<<*i<<" ";
//     // }

//     // cout<<endl;

//     // for(auto i : arr ){
//     //     cout<<i<<" ";
//     // }


//     int i,j,n,t;
// }




#include <bits/stdc++.h>
using namespace std;
 
// Function to print the maximum
// non-empty subsequence sum
int FindContiguousSeq(int a[], int n)
{
    // Stores the maximum non-empty
    // subsequence sum in an array
    int sum = 0;
 
    // Stores the largest element
    // in the array
    int max = *max_element(a, a + n);
 
    if (max <= 0) {
 
        return max;
    }
 
    // Traverse the array
    for (int i = 0; i < n; i++) {
 
        // If a[i] is greater than 0
        if (a[i] > 0) {
 
            // Update sum
            sum += a[i];
        }
    }
    return sum;
}
 
// Driver Code
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
 
        cout << FindContiguousSeq(arr, n);

    }  
 
    return 0;
}