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
class LinkList
{
    public : Node * head = NULL;
   void printList(){
        Node *temp = this->head;
        if(this->head==NULL)
        {
            cout <<"The link List is Empty ! "<<endl;
        }
        else{
            while(temp!=NULL)
            {
                if(temp==head){
                    cout<<temp->data;
                }
                else
                {
                cout <<"->"<<temp->data;
                }
                temp= temp->next;
            }
            cout <<endl;
        }
    }
};