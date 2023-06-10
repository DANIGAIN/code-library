/*
by  the looking of the algotithm bfs & dfs -- >

n = node 
e = eage 

bast case complexity : 

Time :  O(e)

Space : O(n)


n = node 
n^2  = eage 

wast case complexity : 

Time : O(n ^ 2)

Space : 0(n)

*/

#include <bits/stdc++.h>
using namespace std;
// bool hasPath(unordered_map<char , list<char>> graph , char src , char des )
// {
// 	if(src == des) return true ;
// 	for(char neighber : graph[src])
// 	{
// 		if(hasPath(graph ,neighber,des) == true) 
// 		{
// 			return true ;   
// 		}
// 	}
// 	return false ;
// }

bool hasPath(unordered_map<char,list<char>>graph , char src , char des)
{
   stack<char> s ;

   s.push(src);
   while(!s.empty())
   {
        char current = s.top();
        s.pop();
        if(current == des) return true ;
        for(char neigbher : graph[current])
        {
        	s.push(neigbher); 
        }
   }
   return false;
}


int32_t main()
{
	unordered_map<char , list<char>>graph ;

	graph['f'] = {'g', 'i'};
	graph['g'] = {'h'};
	graph['h'] = {};
	graph['i'] = {'g', 'k'};
	graph['j'] = {'i'};
	graph['k'] = {};
	bool x = hasPath(graph ,'f','k');
	if(x == true)
	{
		cout<<"found"<<endl ;
	}else 
	{
		cout<<"not found"<<endl ;
	}


	return 0 ;
}
