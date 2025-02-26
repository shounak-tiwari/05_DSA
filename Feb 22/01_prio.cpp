#include<iostream>
using namespace std;
class PriorityQueue{
	private:
		int arr[100];
		int size;
	public:
		PriorityQueue(){
			size = 0;
		}	
	//push functions
		void push(int data){
			if (size == 100){
				cout<<"Queue is full "<<endl;
				return ;
			}
			arr[size++] = data;
			return ;
		}
	// peek top 
		int top(){
			if(size ==0 ){
				cout<<"Queue is empty "<<endl;
				return -1;
			}
			int maxindex =0;
			for(int i =1; i<size ;i++){
				if(arr[i] > arr[maxindex]){
					maxindex = i;
				}
			}
			return arr[maxindex];	
		}
	// pop : remove first element
		void pop(){
			if(size ==0){
				cout<<"Queue is empty";
				return;
			}
			int maxindex = 0 ;
			for(int i = 1 ; i< size ; i++){
				if(arr[i] > arr[maxindex]) {
					maxindex = i;
				}
			}
			//remove max element by shifting 
			for(int i = maxindex ; i<size-1 ;i++){
				arr[i] = arr[i+1];
			}
			size --;
		}
};

int main(){
	PriorityQueue Q1;
	Q1.push(89);
	Q1.push(69);
	Q1.push(79);
	Q1.push(99);
	Q1.push(599);
	Q1.push(3);
	cout<<"most prior element : "<<Q1.top()<<endl;
	return 0;
}
