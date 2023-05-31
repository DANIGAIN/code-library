/*
     BFS -> Depth-First Search .



*/


#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int data ;
	Node *left ;
	Node *right ;
};


Node *newnode(int data)
{
     Node *tamp = new Node();
     tamp->data = data;
     tamp->left = NULL;
     tamp->right = NULL;
     return tamp ;
}
int diameter = 0;

int findHeight(Node *root) {
    if(root == NULL) return 0;

    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);
    
    int currentDiameter = leftHeight + rightHeight + 1;

    diameter = max(currentDiameter, diameter);
    return max(leftHeight, rightHeight) + 1;

}

int findDiameter( Node *root) {
    findHeight(root);
    return diameter;
}


int main()
{

    Node* root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->right->left = newnode(4);
    root->right->right = newnode(5);
    root->right->left->left = newnode(6);
    root->right->right->right = newnode(7);
    root->right->right->right->left = newnode(12);
    root->right->right->right->right = newnode(13);
    root->right->left->left->left = newnode(8);
    root->right->left->left->right = newnode(10);
    root->right->left->left->right->left = newnode(11);
    int ans  = findDiameter(root);


    //-------------------------- DFS ---------------------//

    cout<<ans<<'\n';

    
	return 0 ;
}


