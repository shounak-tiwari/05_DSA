#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node *next;
    node *prev;
    node(int value){
        data = value;
        next= nullptr;
        prev= nullptr;
    }
};
class Linkedlist{
    private:
        node *head;
        node *tail;
    public:
        Linkedlist(){
            head = nullptr;
            tail = nullptr;
        }
        // insert node from tail 
        void insertTail(int value){
            node *newnode = new node(value);
            if (!head)
            {
                head = newnode;
                tail = newnode;
                return;
            }
            // insert the end
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
            return;
        }
        // remove function
        void remove(int value){
            //head is not exists
            if (!head)
            {
                return;
            }
            //check the value of head data is data which we want to remove 
            if (head->data==value)
            {
                //create temp node for delete head node 

                node *temp = head;
                
                //if head of next is not null the if execute 
                if(head ->next){
                    // it store head of next 
                    head = head->next;

                    head->prev = nullptr;
                }
                else{
                    head= nullptr;
                    tail = nullptr;
                }
                delete temp;
                return ;
            }

            node *temp = head->next;
            while (temp && temp->data != value)
            {
                temp = temp ->next;
            }
            if (temp)
            {
                if (temp->next)
                {
                    temp ->next->prev = temp ->prev;

                }
                else{
                    tail = temp ->prev;
                }
                if (temp->prev)
                {
                    temp ->prev->next = temp ->next;
                }
                delete temp;
            }
        }
        void display(){
            if (!head)
            {
                cout<<"List empty  "<<endl;
                return ;
            }
            node * temp = head ;
            while (temp ){
                cout<<temp->data <<" ";
                temp = temp -> next;
            }
            cout <<endl;
        }





        // insertBefore function
        void insertBefore(int value, int newvalue){
            //head is not exists
            if (!head)
            {
                return;
            }
            //check the value of head data is data which we want to remove 
            if (head->data==value)
            {
                //create temp node for delete head node 

                node *temp = head;
    
                node *newnode = new node(newvalue);

                head = newnode;
                newnode->next= temp;
                newnode->prev = nullptr;

                //if head of next is not null the if execute 
                if(head ->next){
                    // it store head of next 
                    head = head->next;

                    head->prev = nullptr;
                }
                else{
                    head= nullptr;
                    tail = nullptr;
                }
                return ;
            }

            node *temp = head->next;
            while (temp && temp->data != value)
            {
                temp = temp ->next;
            }
            if (temp)
            {
                if (temp->next)
                {
                    temp ->next->prev = temp ->prev;

                }
                else{
                    tail = temp ->prev;
                }
                if (temp->prev)
                {
                    temp ->prev->next = temp ->next;
                }
                delete temp;
            }
        }
};

int main(){
    Linkedlist l1;
    l1.insertTail(12);
    l1.insertTail(13);
    l1.insertTail(14);
    l1.insertTail(15);
    l1.insertTail(16);
    l1.display();
    l1.remove(14);
    l1.display();
}