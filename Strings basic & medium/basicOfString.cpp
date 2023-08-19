#include<bits/stdc++.h>
using namespace std;

void reverseString(char name[], int l) {
        
        int n = l;
        int i = 0 ; int j = l - 1;

        while(i <= j){
            swap(name[i], name[j]);
            i++;
            j--;
        }
        
    }

int getLength(char name[]){
    int count = 0 ; 
    for(int i = 0 ; name[i] != '\0' ; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"Enter your Name "<<endl;
    cin>>name;
    cout<< "Your name is : " << name<<endl;

    cout<<"The required length of character Array is : "<<getLength(name)<<endl;

    int l = getLength(name);

    reverseString(name, l);
    cout<< "Reversed Name is : " << name;

}