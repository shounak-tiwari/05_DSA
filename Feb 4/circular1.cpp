#include<iostream>
#define size 5
using namespace std;

class CircularQueue{
	//index pointer create and data array
	public:
	int front =-1;
	int rear=-1;
	int arr[size];
	
	//constructor for creating index when queue is call
	CircularQueue(){
		front = rear= -1 ;
	}
	
	//is queue is empty or not 
	bool isEmpty()
	{
		if (front == rear){
			return true;
		}
		return false;
	}
	
	
	//queue is full or not
	bool isFull(){
		if (rear+1 % size == front)
		{
			return true;
		}
		return false;
	} 
	
	//enqueue
	
	void enqueue(int value){
		if(isFull()){
			cout<<"\nQueue is full";
			return ;
		}
		
		rear = (rear+1) % size;
		arr[rear] = value;
		
	}
	
	//dequeue
	
	void dequeue()
	{
		
		if(isEmpty()){
			cout<<"No element in queue";
			return ;
		}		
		front = (front +1) % size;
		
	}
	
	
	//peek 
	
	void peek(){
		if( isEmpty() ){
			cout<<"Queue is empty ";
			return;
		}
		cout<< "the peek element is : "<<arr[front];
		return ;
	}
	
	// print queue 
	void printqueue(){
		if (isEmpty()){
			cout<<"Queue is empty";
			return ;
		}
		for (int i =(front+1) ; i <rear ; i= (i+1)%size){
			cout<<"\n Element : "<<arr[i];
		}
		cout<<"\nElement : "<<arr[rear];
	}
};


int main(){
	CircularQueue Q1;
	Q1.enqueue(10);
	Q1.enqueue(20);
	Q1.enqueue(30);
	Q1.enqueue(40);
	Q1.enqueue(50);
	
	Q1.printqueue();	
}
