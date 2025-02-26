#include<iostream>
using namespace std;


class Dequeue{
    private:
        int *arr;
        int front ,rear, size,capacity;
    public:
        Dequeue(int cap){
            arr = new int [cap];
            capacity = cap;
            front=rear = -1;
            size = 0;
        }
        // iffull 
        bool isFull(){
            return size == capacity;
        }
        //is empty
        bool isEmpty(){
            return size ==0;
        }
        //isert from front
        void pushFront(int data){
            if (isFull())
            {
                cout<<"Queue Full"<<endl;
                return ;
            }
            if (isEmpty())
            {
                rear=front = 0;
            }
            else
            {
                    front = ((front-1) + capacity) % capacity;
            }
            arr[front] = data;
            size++;
        }
        void popFront(){
            if(isEmpty()){
                cout<<"queue is empty" <<endl;
                return ;
            }
            front = (front+1)%capacity;
            size --;
            if (size==0)
            {
                front=rear =-1;
            }
        }
        void pushRear(int data){
            if (isFull())
            {
                cout<<"Queue Full"<<endl;
                return ;
            }
            if (isEmpty())
            {
                front = rear = 0;
            }
            
            else
            {
                rear = (rear+1) % capacity;
            }
            
            arr[rear] = data;
            size++;            
        }
        void poprear(){
            if(isEmpty()){
                cout<<"queue is empty" <<endl;
                return ;
            }
            rear = (rear - 1)%capacity;
            size --;
            if (size==0)
            {
                front=rear =-1;
            }
        }
        //elements getfrom front 
        int getfront(){
            if (isEmpty())
            {
                cout<<"Queue is empty "<<endl;
                return -1;
            }
            return arr[front];
        }
        //elements getfrom rear 
        int getrear(){
            if (isEmpty())
            {
                cout<<"Queue is empty "<<endl;
                return -1;
            }
            return arr[rear];
        }
        // print the element of queue 
        void display(){
            if (isEmpty())
            {
                cout<<"Dequeue is empty "<<endl;
                return ;
            }
            cout<<"Dequeue elements : ";

            for (int i = 0; i < size; i++)
            {
                cout<<arr[(front + i ) % capacity] << " ";
            }
            cout<<endl;
        }
        // destructor 
        ~Dequeue(){
            delete [] arr;
        }
};

int main(){
    Dequeue Q1(5);

    Q1.pushFront(10);
    Q1.pushRear(20);
    Q1.pushFront(30);
    Q1.pushRear(50);
    Q1.pushFront(60);

    Q1.display();
}