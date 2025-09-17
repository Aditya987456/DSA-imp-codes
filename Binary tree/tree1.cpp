//creating of binary tree--

#include<iostream>
using namespace std;


//creating class for node
class node{
  public:
    int data;
    node* left;
    node* right;

    node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};



//function that create the tree------
node* BuildTree(node* root){
    cout<<"Enter the data :"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting in left of  "<<data<<endl;
    root->left=BuildTree(root->left);

    cout<<"Enter data for inserting in right of  "<<data<<endl;
    root->right=BuildTree(root->right);
    
    return root;
}




int main(){
    cout<<"----------------------------------creating tree---------------------------------------";
    
    node* root=NULL;
    root=BuildTree(root);
    
    return 0;
}