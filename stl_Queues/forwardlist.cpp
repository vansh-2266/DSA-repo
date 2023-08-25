#include<iostream>
#include<forward_list>

using namespace std;

int main(){
    forward_list<int> l;
    l.assign(5, 11);

    // for(auto x: l){
    //     cout<<x<<" ";
    // }

    // // or

    for(auto it = l.begin() ; it != l.end() ; it++){
        cout<<(*it)<<" ";
    }
    
}