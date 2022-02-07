#include<iostream>
using namespace std;
class Node
{
public : int data ;
public : Node * next;
public : Node(int val ){
    this->data=val;
    this->next = NULL;
}
};
class LinkList{
    Node *head=NULL;
    Node *tail=NULL;
    int numberofNodes=0;
     void insertAtFirst(){
        cout <<"Enter the value you want to insert at First "<<endl;
        int n;
        cin >>n;
        Node * newNode =  new Node(n);
        if(this->head==NULL){
            this->head= newNode;
            this->tail=newNode;
            cout <<"Node insert At First SucessFully !! "<<endl;
            numberofNodes++;
            return;
        }
        else{
            newNode->next=this->head;
            this->head=newNode;
            LinkList::numberofNodes++;
        }
    }

    
       
};