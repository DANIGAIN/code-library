#include <bits/stdc++.h>
using namespace std ;
int32_t main()
{
	std::map<int, int> mp;
	mp.insert(make_pair(1,2));
	mp.insert(make_pair(2,4));

	for(auto [x,y] : mp)
	{
		cout<<x <<' '<<y<<'\n';
	}


	return 0 ;
}