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
    
   
};