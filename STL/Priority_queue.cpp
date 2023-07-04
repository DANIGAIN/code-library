#include <bits/stdc++.h>
using namespace std ;


int32_t main()
{

	//store assending order  -->  
	//priority_queue<int,vector<int>,greater<int>> pq ;


    //store decending order  --> 
	priority_queue<int> pq;

	pq.push(1);
	pq.push(10);
	pq.push(2);
	pq.push(11);
	pq.push(1);


	while(!pq.empty())
	{
		cout<<pq.top()<<endl;
		pq.pop();
	}


 
	return 0 ;
}