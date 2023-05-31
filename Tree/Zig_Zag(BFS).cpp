/*
   problem : Given a binary tree , populate array in zig-zag fashin using level by level traversal 
   you should populate the values of all nodes of eash level from in separate sub array .


 Output:
*   1
*   3 2
*   4 5 6 7

*/


#include <bits/stdc++.h>

using namespace std ;

struct Node
{
	
	int data ;
	Node *left ;
	Node *right;
};
Node *newNode(int data)
{
	Node *tamp = new Node();
	tamp->data = data ;
	tamp->left = NULL ;
	tamp->right = NULL ;
	return tamp ;
}

vector<vector<int>> traverce(Node *root)
{

	vector<vector<int>> bfs ;
	bool leftToRight = true ;

	queue<Node *> q ;
	if(root == NULL)
	{
		return bfs;
	}
	q.push(root);
	while(!q.empty())
	{
		 

		 int size = q.size();
		 vector<int> v(size);

	     for(int i =0 ;i<size ;i++)
	     {

		   Node *currnt = q.front();
		   q.pop();


           if(leftToRight)
           {
		       v[i] = currnt->data;
		   }else
		   {
		   	   v[size -i - 1] = currnt->data ;
		   }


		   if(currnt->left != NULL)
		   {
			  q.push(currnt->left);
		   }
		   if(currnt->right != NULL)
		   {
			   q.push(currnt->right);
		    }
	      }
	      bfs.push_back(v);
	      leftToRight =  !leftToRight;
	}
	return bfs;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
  
   Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    vector<vector<int>> ans = traverce(root); 

    for(auto level :ans )
    {
    	for(auto x :level)
    	{
    		cout<<x<<' ';
    	}
    	cout<<'\n';
    }
	
	return 0 ;
}