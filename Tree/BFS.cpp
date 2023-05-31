/*
     BFS -> Breadth-First Search  .

           Name : 1.Level Order Traversal 
                  2.Depth-First Search 



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

vector<vector<int>> traverse(Node *root)
{

	vector<vector<int>> Bfs;
	queue<Node *> q ;
	if(root == NULL)
	{
		return Bfs;
	}
	q.push(root);
	while(!q.empty())
	{
		int size = q.size();
		vector<int> v ;
		for(int i = 0 ;i<size ;i++)
		{
		     Node *currnt = q.front();
		     q.pop();
		     v.push_back(currnt->data);
		     if(currnt->left != NULL)
		     {
		     	q.push(currnt->left);
		     }
		     if(currnt->right != NULL)
		     {
		     	q.push(currnt->right);
		     }

		}
		Bfs.push_back(v);

	}
    return Bfs;

}


void preorder(Node *root)
{
	if( root == NULL)
	{
		return ;

	}
	cout<<root->data <<' ';
	preorder(root->left);
    preorder(root->right); 
}
int main()
{

	Node *root = newnode(10);
	root->left = newnode(11);
	root->right = newnode(12);
	root->left->left = newnode(13);
	root->left->right = newnode(14);

	//preorder(root);
    cout<<'\n';


    //-------------------------- BFS ---------------------//

    cout<<"\nBFS : "<<'\n';
    vector<vector<int>> ans =  traverse(root);

    for(auto level :ans)
    {
    	for(auto name : level)
    	{
    		cout<<name<<' ';
    	}
    	cout<<'\n';
    }

	return 0 ;
}


