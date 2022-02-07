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
    void deleteAtFirst(){
        if(this->head ==NULL){
            cout <<"The list already Empty !! "<<endl;
        }
        else if (this->head->next==NULL){
            Node *temp = this->head;
            this->head=NULL;
            this->tail=NULL;
            delete temp;
        }
        else{
            Node * temp = this->head;
            this->head= this->head->next;
            temp->next=NULL;
            delete temp;
            cout <<"The First Node has been deleted SucessFully !! "<<endl;
                    numberofNodes--;

        }
    }

void insertAtLast(){
        cout <<"Enter the value what you want you want to insert at Last !! "<<endl;
        int n;
        cin >>n;
       Node *newNode = new Node(n);
       Node * temp = this->head;
       if(this->head==NULL){
           this->head = newNode;
           this->tail=newNode;
           numberofNodes++;
       }
       else
       {
            this->tail->next=newNode;
            this->tail=newNode;
            numberofNodes++;
       }
       cout <<n <<" : insert SucessFully at Last !! "<<endl;
       
    }

    void deleteAtLast(){
        Node *temp =  this->head;
         Node * pre = this->head;
        if(this->head == NULL){
            cout <<"Head is Empty !! "<<endl;
        }
        else if(this->head->next==NULL){
            cout<< this-head->data<<" data delete SucessFully !!"<<endl;
            this->head=NULL;
            this->tail=NULL;
            numberofNodes--;
        } 
        else{
            while(temp->next!=NULL)
            {
                pre = temp;
                temp=temp->next;
            }
            cout<<temp->data <<" delete SucessFully !! "<<endl;
            pre->next=NULL;
            this->tail=pre;
            delete temp;
            numberofNodes--;
        }
    }

   
};