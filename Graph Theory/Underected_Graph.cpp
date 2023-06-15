#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Underected Graph 

   Algorithm : DFS  

   problem Description : 

   n = node 
   e = eage 

   worst case time complexity : 

   Time :  O(e)

   Space : O(n)


*/


unordered_map<char ,unordered_set<char>>buildGraph(char edges[5][2])
{
	unordered_map<char ,unordered_set<char>>graph;
	for(int i = 0 ;i< 5 ;i++)
	{
		char u = edges[i][0] ;
		char v = edges[i][1] ;

		graph[u].insert(v);
		graph[v].insert(u);
	}

	return graph ;

}

bool hasPathDFS(unordered_map<char ,unordered_set<char>> graph ,char src ,char des ,unordered_set<char>visited)
{
    

    visited.insert(src);


	if(src == des) return true ;

	for(char neighbor : graph[src])
	{
		if(visited.count(neighbor) == 0 && hasPathDFS(graph, neighbor, des, visited))
		{
			return true ;
		}
	}
	return false ;
}

bool hasPath(unordered_map<char ,unordered_set<char>> graph , char src , char des)
{
	unordered_set<char> visited ;

	 return hasPathDFS(graph ,src ,des ,visited);
}
int32_t main()
{
	char  edges[5][2] = {{'i','j'},{'k','i'},{'m','k'},{'k', 'l'},{'o','n'}};


    unordered_map<char ,unordered_set<char>> graph = buildGraph(edges);


    if(hasPath(graph , 'j' , 'm' ))
    {
    	cout<<"found"<<endl ;
    }else 
    {
    	cout<<"not found"<<endl ;
    }


    //  -----------------------------map travercal ----------------------//
    // for(auto pair : graph)
    // {
    // 	char node = pair.first ;
    // 	cout<<node<<": ";
    // 	unordered_set<char >neighbars = pair.second ;
    // 	for(auto neighbar : neighbars)
    // 	{
    // 		cout<<neighbar<<' ';
    // 	}
    // 	cout<<endl ;
    // }

    
	return 0 ;
}