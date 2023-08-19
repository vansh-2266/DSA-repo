#include<bits/stdc++.h>
using namespace std;

//LL node
class Node{
    public:
        int data ;
        Node* next;
};

void pushFront(Node* &head, int newValue){
    Node* newNode = new Node();

    newNode->data = newValue;
    newNode->next = head;

    head = newNode;
}

void printLL(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//to fint length of LL
int getLength(Node* &head){
    Node* temp = head;
    int count = 1;
    while(temp->next != NULL){
        count++;
        temp = temp->next ;
    }

    return count;
}

int main(){

    //empty LL
    Node* head = NULL;

    pushFront(head, 15);
    pushFront(head, 14);
    pushFront(head, 13);
    pushFront(head, 12);
    pushFront(head, 11);
    pushFront(head, 10);

    cout<<"This is our Linked List"<<endl;
    printLL(head);
    cout<<"Length of Our LL :" <<endl;
    cout<<getLength(head);
}