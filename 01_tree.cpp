#include<iostream>
using namespace std;
class Treenode{
    public:
    int data;
    Treenode* left;
    Treenode * right;

    Treenode(int value){
        data = value;
        left= right= nullptr;
    }
};

class BinaryTree{
    public:

    Treenode *root;

    BinaryTree(){
        root = nullptr;
    }

    Treenode* insert(Treenode* node,int value){
        if(node == nullptr){
            cout<<"Value is inserted "<<value<<endl;

            return new Treenode(value);
        }
        if(value < node-> data){
            node->left = insert(node->left,value);
           
        }
        else{
            node->right = insert(node->right,value);
            
        }
        return node;
    }
    // search for a node with a given values 

    bool search(Treenode * node, int value){
        if (node== nullptr)
        {
            return false;
        }
        if (node->data == value)
        {
            return true;
        }
        if (value<node->data){
            return search(node->left,value);
        }
        else
        {
            return search(node->right,value);
        }
    }

    Treenode* findmin(Treenode * node){
        while (node->left!= nullptr)
        {
            node = node->left;
        }
        return node;
    }

    Treenode * findmax(Treenode * node){
        while (node->right!=nullptr)
        {
            node=node->right;
        }
        return node;
    }

    // delete node 

    Treenode* deletenode(Treenode* node, int value){
        if (node == nullptr)
        {
            return node;
        }
        if (value<node->data)
        {
            node->left = deletenode(node->left,value);
        }
        else if(value>node->data){
            node -> right = deletenode(node->right,value);
        }
        else
        {
            // if node have only one child or no child
            if (node->left == nullptr)
            {
                Treenode* temp = node->right;
                delete node;
                return temp;
            }
            else if (node->right == nullptr ){
                Treenode* temp = node->left;
                delete node;
                return temp;
            }
            //node with at least two child 

            Treenode * temp = findmin(node->right);

            node->data = temp ->data;
            
            node->right = deletenode(node->right,temp->data);            
        }
        return node;
        
    }

    void inorder(Treenode* node){
        if (node!=nullptr)
        {
            inorder(node->left);
            cout<<node->data<<" ";
            inorder(node->right);
        }
        
    }
};


int main(){
    BinaryTree b1;
    b1.root = b1.insert(b1.root,50);
    b1.insert(b1.root,90);
    b1.insert(b1.root,40);
    b1.insert(b1.root,45);
    b1.insert(b1.root,35);
    b1.deletenode(b1.root,40);
    b1.inorder(b1.root);
}