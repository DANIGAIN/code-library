#include<bits/stdc++.h>
using namespace std ;

void depthFirstPrint(unordered_map<char,list<char>>graph , char c)
{
      stack<char> s;
      s.push(c);
      
      while(s.size() > 0)
      {
      	char current = s.pop();
      	cout<<current <<" "; 
      	for(char nai : graph[current]);
      	{
      		s.push()
      	}

      }
}

int main()
{
	unordered_map<char,list<char>>graph;

	graph['a'] = {'b','c'};
	graph['b'] = {'d'};
	graph['c'] = {'e'};
	graph['d'] = {'f'};
	graph['e'] = {};
	graph['f'] = {};

	depthFirstPrint(graph ,'a');

   return 0 ;
}