#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Implementation 

   Algorithm : BFS 

  Time Complexity: O(N) + O(2E), Where N = Nodes, 2E is for total degrees as we traverse all adjacent nodes.


  Space Complexity: O(3N) ~ O(N), Space for queue data structure visited array and an adjacency list . 
     

     
*/

std::vector<int> Graph_bfs(std::vector<int> adj[] , int n , int s )
{
	int visit[n] = {0};
	visit[s] = 1 ;
	queue<int> q ;
	q.push(s);
	std::vector<int> bfs ;

	while(!q.empty())
	{
		int node = q.front();
		q.pop();
		bfs.push_back(node);
		for(auto it : adj[node])
		{
			if(!visit[it])
			{
				visit[it] = 1 ;
				q.push(it);
			}
		}
	}
	return bfs ;
}

int32_t main()
{

    std::vector<int> adj[5];

    int n = 5 ;
    int m = 6 ;
    adj[0] = {1,2};
    adj[1]  = {0,2,3};
    adj[2] = {0,1,4} ;
    adj[3] = {1,4};
    adj[4] = {2,3};

    std::vector<int> ans = Graph_bfs(adj , n , 0 );


    for(int i = 0 ;i< ans.size() ; i++)
    {
    	cout<<ans[i]<<" ";
    } 


   return 0 ;
}