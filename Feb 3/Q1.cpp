// header files 
#include<iostream>
#define SIZE 5
using namespace std;

class Queue{

    int front=-1,rear=-1;
    int queue[SIZE];

    public:

    // queue EMPTY condition
    bool IsEmpty(){
        if ((front== -1 && rear== -1) || (front<SIZE-1))
        {
            return true;
        }
        return false;
    }


    // enqueue 
    void Enqueue(int data){
        if(!IsEmpty()){
            cout<<"Queue is not empty";
            return;
        }

        queue[++front] = data;
    }
    //dequeue
    // display 
    void Display(){
        for (int i = 0; i < SIZE; i++)
        {
            cout<<"\nDisplay : "<<queue[i];
        }
    }

};

int main(){
    Queue Q1;
    Q1.Enqueue(10);
    Q1.Enqueue(20);
    Q1.Enqueue(30);
    Q1.Enqueue(40);
    Q1.Enqueue(50);
    Q1.Enqueue(50);
    Q1.Display();

}