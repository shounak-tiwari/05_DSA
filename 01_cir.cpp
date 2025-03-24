#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next,*prev;


    Node(int value){
        data = value;
    next = prev = nullptr;
    }
};

class circularlist{
    public:
    Node *head ,*tail ;

    circularlist(){
        head = nullptr;
        tail = nullptr;
    }

    void insertBegain(int value){
        Node* newnode = new Node(value);
        if (head==nullptr)
        {
            head = newnode;
            newnode ->next = head;
        }
        else{
            Node *temp = head;

            while (temp->next != head)
            {
                temp = temp ->next;
            }
            temp->next = newnode;
            newnode->next= head;
            head = newnode;
        }
        
        
    }
    void display (){
        Node* temp = head;
        do
        {
            cout<<"\nelement : "<<temp->data;
            temp = temp->next;
        }while (temp!=head);
        
        
    }
};

int main(){
    circularlist c1;
    c1.insertBegain(112);
    c1.insertBegain(113);
    c1.insertBegain(114);
    c1.insertBegain(115);
    c1.insertBegain(116);
    c1.insertBegain(117 );
    c1.display();
}