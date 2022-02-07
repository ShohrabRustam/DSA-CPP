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

    void insertAtFirst(){
        cout <<"Enter the value you want to insert at First "<<endl;
        int n;
        cin >>n;
        Node * newNode =  new Node(n);
        if(this->head==NULL){
            this->head= newNode;
            cout <<"Node insert At First SucessFully !! "<<endl;
            return;
        }
        else{
            newNode->next=this->head;
            this->head=newNode;
        }
    }
    
    void deleteAtFirst(){
        if(this->head ==NULL){
            cout <<"The list already Empty !! "<<endl;
        }
        else{
            Node * temp = this->head;
            this->head= this->head->next;
            temp->next=NULL;
            delete temp;
        cout <<"The First Node has been deleted SucessFully !! "<<endl;
        }
    }

    void printList(){
        Node *temp = this->head;
        if(this->head==NULL)
        {
            cout <<"The link List is Empty ! "<<endl;
        }
        else{
            cout <<"Your Link list is : !!! "<<endl;
            while(temp!=NULL)
            {
                if(temp==head){
                    cout<<temp->data;
                }
                else
                {
                cout <<"->"<<temp->data;
                }
                temp = temp->next;
            }
            cout << endl;
        }
    }

};
int main(){
        LinkList list;
        list.insertAtFirst();
        list.insertAtFirst();
        list.printList();
        list.deleteAtFirst();
        list.printList();
}