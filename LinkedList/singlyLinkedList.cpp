#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
        int data;
        Node* next;

    //constuctor

    Node (int data){
        this ->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;

        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }

        cout<<"memory free for node with data "<<value<<endl;
    }

};

// to print the linked List
void printLL(Node* &head){

    Node* temp = head;
     while(temp != NULL){
         cout<<temp->data<<' ';
         temp = temp->next;
     }
     cout<<endl;
}

// to insert new node at the start / Head of the singly LL
void insertAtHead(Node* &head, int d){
    
     Node* temp= new Node(d);
     temp->next = head;
     head =  temp;
}

// to insert new node at the end / Tail of the singly LL
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

//to insert new node at any given position
void insertAtPosition(Node* &tail, Node* &head, int position, int d){

    //to insert at the beginnning of LL
    if(position == 1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < position - 1){
        temp = temp->next;
        count++;
    }

    //to insert at the end
    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }

    //create a new node to insert
    Node* nodeToInsert = new Node (d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert; 


}

// delete node according to given position
void deleteNode(Node* &head , int position){

    //delete first node 
    if(position == 1){
        Node* temp = head;
        head = head ->next;

        //memory free 
        temp -> next = NULL;
        delete temp;
    }

    //delete any position or last node
    Node* prev = NULL;
    Node* curr = head;

    int cnt = 1;

    while(cnt < position ){
        prev = curr;
        curr = curr->next;
        cnt++; 
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;

}

int main (){

    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node* head = node1;
    Node* tail = node1;

    printLL(head);

    // insertAtHead(head, 11);
    insertAtTail(tail, 11);

    printLL(head);

    // insertAtHead(head, 15);
    insertAtTail(tail, 15);

    printLL(head);

    insertAtPosition(tail,head, 3, 123);
     printLL(head);

    deleteNode(head, 3);

    printLL(head);

    return 0;
}