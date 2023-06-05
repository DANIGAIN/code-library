#include <bits/stdc++.h>
using namespace std ;
int main()
{
	unordered_map<string ,int> ump;
	
    ump["sbc"] = 50 ;
	ump["dani"] = 0 ;
	ump["jibon"] = 100 ;
	ump["mou"] = 100 ;



	for (auto x : ump)
	{
		cout<<x.first<<"  : " <<x.second<<endl ;
	}
	return 0 ;


}