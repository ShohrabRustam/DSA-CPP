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
    public :  int numberofNodes;
    LinkList(){
            this->numberofNodes =0;
    }
    public : Node * head = NULL;

    void insertAtFirst(){
        cout <<"Enter the value you want to insert at First "<<endl;
        int n;
        cin >>n;
        Node * newNode =  new Node(n);
        if(this->head==NULL){
            this->head= newNode;
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
           numberofNodes++;
       }
       else
       {
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next=newNode;
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
            delete temp;
            numberofNodes--;
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
    int isEmpty(){
         if(this->head==NULL){
             return 1;
         }
         else{
             return 0;
         }
     }
     
     void insertAtGivenPosition(){
         int pos;
         cout <<"Enter the position where you want to insert "<<endl;
         cin >>pos;
         int data;
         cout <<"Enter the value you want to insert "<<endl;
         cin >>data;
         Node *newNode = new Node(data);
         if(pos<1 || pos>numberofNodes+1){
             cout <<pos<<" position is not correct "<<endl;
         }
         if(pos==1){
             newNode->next=this->head;
             this->head=newNode;
         }
         else{
                Node *temp= this->head;
                for(int i=1;i<pos-1;i++){
                    temp=temp->next;
                } 
                newNode->next=temp->next;
                temp->next=newNode;
         }
         numberofNodes++;

     }

void deleteAtGivenPosition(){
    int pos;
    cout <<"Enter the position where you want to delete : "<<endl;
    cin >>pos;
    if(pos<1 || pos>numberofNodes){
        cout <<"The position : "<< pos<<": you entered is incorrect because the length of your list is : "<<numberofNodes;
    }
    else if(pos==1){
        deleteAtFirst();
    }
    else{
            Node *temp = this->head;
            for(int i=1;i<pos;i++){
                temp=temp->next;
            }
            Node *deleteNode=temp->next;
            temp->next=temp->next->next;
            cout <<deleteNode->data<<" deleted Sucessfully !! "<<endl;
            delete deleteNode;
    }
}
    void updateAtGivenPosition(){
        int pos;
        cout <<"Enter the position where you want to update : "<<endl;
        cin>>pos;
        int data;
        cout <<"Enter the value you want to update "<<endl;
        cin >>data;
        if(pos<1 || pos > numberofNodes){
            cout <<"The position you entered is incorrect because the length of the list is "<<numberofNodes<<endl; 
        }

        else{
            Node *temp=this->head;
            for(int i=1;i<pos-1;i++){
                    temp=temp->next;
            }
            temp->data=data;
        }
    }
     int count(){
            return numberofNodes;
          }

    void middleElement(){
        Node *middle=this->head;
        Node *last=this->head;
        if(this->head==NULL){
            cout <<"The link List is empty "<<endl;
        }
        else{
            while(last!=NULL){
                middle=middle->next;
                last=last->next->next;
            }
        }
        cout <<"The middle Element is : "<<" "<<middle->data<<" !!!!"<<endl;
    }
};
int main(){
        LinkList list;
        
        list.insertAtFirst();
        // cout <<list.count()<<endl;
        list.insertAtFirst();
        // cout<<list.count()<<endl;
        list.printList();
        // list.deleteAtFirst();
        // cout <<list.count()<<endl;
        list.printList();
        list.insertAtLast();
        // cout<<list.count()<<endl;
        list.printList();
        list.insertAtGivenPosition();
        list.printList();
        // list.deleteAtGivenPosition();
        // list.printList();
        list.middleElement();
        list.printList();

}