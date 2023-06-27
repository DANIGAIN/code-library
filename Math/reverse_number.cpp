#include <bits/stdc++.h>
using namespace std ;

int reverceNumber(int n )
{
	long long  ans = 0 ;
	while(n> 0 )
	{
		int r = n %10 ;
       
		 ans = (ans*10 ) + r ;
		n /=10 ;
	}
	return ans ;
}


int32_t main()
{


	int n = 1123 ;
	cout<<reverceNumber(n)<<endl;
   return 0 ;
}