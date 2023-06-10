#include<bits/stdc++.h>
using namespace std ;

void depthFirstPrint(unordered_map<char,list<char>>graph , char c)
{
      stack<char> s;
      s.push(c);
      
      while(!s.empty())
      {
      	char current = s.top();
      	s.pop();
      	cout<<current <<" "; 
      	for(char neighbor : graph[current])
      	{
      		s.push(neighbor);
      	}

      }
}


//using  reacrtion --->

// void depthFirstPrint(unordered_map<char,list<char>>graph , char c)
// {
//      cout<<c<<" ";
//      for(auto neighbor : graph[c])
//      {
//      	    depthFirstPrint(graph , neighbor);
//      }
// }



int main()
{
	unordered_map<char,list<char>>graph;

	graph['a'] = {'c','b'};
	graph['b'] = {'d'};
	graph['c'] = {'e'};
	graph['d'] = {'f'};
	graph['e'] = {};
	graph['f'] = {};

	depthFirstPrint(graph ,'a');//a b d f c e

   return 0 ;
}