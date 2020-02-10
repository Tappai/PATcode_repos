#include<iostream>
using namespace std;

struct BTNode{
    int data;
    BTNode *lchild,*rchild;
};

BTNode* newnode(int v){
    BTNode* node=new BTNode;
    node->data=v;
    node->lchild=NULL;
    node->rchild=NULL;
    return node;
}

int main(){
    BTNode *BST=NULL;
    
}