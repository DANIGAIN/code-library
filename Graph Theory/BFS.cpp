#include <bits/stdc++.h>
using namespace std ;

void breadthFirstPrint(unordered_map<char , list <char>>graph , char c)
{
	queue<char> q ;
	q.push(c);
	while(!q.empty())
	{
		char current = q.front();
		cout<<current<<" ";
		q.pop();
		for(char neighbor  : graph[current])
		{
			q.push(neighbor);
		}
	}
}






int32_t main()
{
    unordered_map<char,list<char>>graph;

	graph['a'] = {'c','b'};
	graph['b'] = {'d'};
	graph['c'] = {'e'};
	graph['d'] = {'f'};
	graph['e'] = {};
	graph['f'] = {};

	breadthFirstPrint(graph ,'a');//a c b e d f

   return 0 ;
}