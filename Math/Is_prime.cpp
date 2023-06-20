#include <bits/stdc++.h>
#define ll long long 
#define N '\n'
using namespace std ;

bool isPrime(int n)
{
	

	for(int i = 2 ;i <= sqrt(n) ;++i)
	{
		 if(n% i == 0) return false ;
	}

	return n>=2 ;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	cout<<isPrime(4)<<endl;
	return 0 ;
}