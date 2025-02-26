#include<iostream>
using namespace std;

//single linked-list

class node{
	public:
	int data;
	node *next;
	
	node(int value){
		data = value;
		next = nullptr;
	}
};

class Linkedlist{
	private:
	node *head;
	public:
	Linkedlist(){
	head = nullptr;
	}
	
	//insert from rear(end)
	
	void insert(int value){
		node *newnode = new node(value);
		if(!head){
			head = newnode;
			return;
		}
		node *temp = head;
		
		while(temp->next){
			temp = temp -> next;
		}
		temp ->next = newnode;
	}
	
	//delete node 
	void remove(int value){
		if(!head) {
			return;
		}
		if(head ->data == value){
			node *temp = head ;
			head = head->next;
			delete temp;
			return ;
		}
		node *temp = head ;
		while(temp ->next  && temp ->next->data !=value){
			temp = temp->next;
		}
		if(temp->next){
			node *deleteelement = temp ->next;
			temp->next = temp ->next->next;
			delete deleteelement;
		}
	}
	
	
	void display(){
		if(!head){
		return ;
		}
		node * temp = head;
		while(temp->next){
			cout<<temp->data<<endl;
			temp = temp ->next;
		}
	}
};

int main(){
	Linkedlist l1;
	l1.insert(10);
	l1.insert(30);
	l1.insert(20);
	l1.insert(50);
	l1.insert(80);
	l1.display();
	l1.remove(20);
	l1.display();
	l1.display();	
}





