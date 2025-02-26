#include<iostream>
using namespace std;


// pointer of structure 
struct node{
    int data;
    node *left;
    node *right;

    node(int value){
        data = value;
        left  = nullptr;
        right = nullptr;
    }
};

class linklist{
    public:
    linklist(int values){
        node *pointer  = new node(values);
    }

};
int main(){
    //for creating pointer structure 

    linklist l1(100);

}
