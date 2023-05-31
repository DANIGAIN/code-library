#include <bits/stdc++.h>
using namespace std ;

struct Node{

	int data ;
	Node *left ;
	Node *right;
};
Node *newnode(int data)
{
     Node *tamp = new Node();
     tamp->data = data;
     tamp->left = NULL;
     tamp->right = NULL;
     return tamp ;
}
bool findSequence( Node* root, vector<int> sequence,int  index)
{
	if(root == NULL)
	{
	    return false ;
	}
	if(sequence.size() <= index or root->data != sequence[index])
	{
		return false;
	}
	if(root->left == NULL && root->right == NULL && index +1 == sequence.size())
	{
		return true ;
	}
	return (findSequence(root->left ,sequence , index+1 ) or findSequence(root->right ,sequence , index+1)); 

}
bool hasPath(Node* root , vector<int> v)
{
	if(root == NULL)
	{
		return v.size() == 0 ;
	}
	return findSequence(root, v, 0);
}
int main()
{
    Node* root = newnode(3);
    root->left = newnode(7);
    root->right = newnode(1);
    root->left->left = newnode(9);
    root->right->left = newnode(2);
    root->right->right = newnode(5);
    bool ans = hasPath(root, vector<int>{3, 1, 2});

    if(ans)
    {
    	 cout<<"true"<<endl;
    }else 
    {
    	cout<<"false"<<endl;
    }
}