#include<stdio.h>
#include<iostream>

using namespace std;

class Stack
{
int top;
int arr[50];
public:
    Stack()
{
       top=-1;
}

    void push();
    void pop();
    void view();
    int isEmpty();
    int isFull();
};

int Stack::isEmpty()
{
    return (top==(-1)?1:0);
}

int Stack::isFull()
{
    return ( top == 50 ? 1 : 0 );
}

void Stack::push()
{
    if(isFull())
    {
        cout<<"STACK IS FULL { OVERFLOW }"<<endl;
    }
    else
    {
        int i;
        cout<<"Enter an element :: "<<endl;
        cin>>i;
        ++top;
        arr[top]=i;
        cout<<"Insertion successful."<<endl;
    }
}

void Stack::pop()
{
    int num;
    if(isEmpty())
    {
            cout<<" STACK IS EMPTY [ UNDERFLOW ] "<<endl;
    }
    else
    {
    cout<<"Deleted item is : "<<arr[top]<<endl;
    top--;
    }
}

void Stack::view()
{
    if(isEmpty())
    {
            cout<<" STACK IS EMPTY [ UNDERFLOW ] "<<endl;
    }
    else
    {
    cout<<"STACK :"<<endl;
    for(int i=top;i>=0;i--)
    {
            cout<<arr[i]<<endl;
    }
    }
}


int main()
{
    Stack s;
    int ch;
    ch=0;
    while(ch!=4)
    {
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Quit"<<endl;
        cout<<"Enter your Choice :: "<<endl;
        cin>>ch;

        switch(ch)
        {
            case 1:
                s.push();
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.view();
                break;

            case 4:
                ch=4;
                cout<<"Press any key .. "<<endl;
                break;

            default:
                cout<<"Wrong Choice!! "<<endl;
                break;
        }
    }

    return 0;
}