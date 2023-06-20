#include <bits/stdc++.h>
#define ll long long 
#define N '\n'
using namespace std ;


/*
     Problem name :  position of the prime number 



     problem  description :


    In this problem, you will have to print the n
    n-th prime number. The first few prime numbers are given below:

    2, 3, 5, 7, 11, 13, 17, 19, 23, 29, ...

    2 is the 1st prime, 3 is the 2nd prime, 5 is the 3rd prime, ...
*/


bool isPrime(int n)
{

	 for(int i = 2 ;i<=sqrt(n) ;i ++  )
	 {
	 	   if(n% i == 0 ) return false ;
	 }

	 return n >= 2;
}

int NthPrime(int n)
{
	int i = 2 ;
	while(n > 0)
	{
		if(isPrime(i)) n -- ;

		i++;
	}
	i--;

	return i ;

}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;cin>>n ;

   cout<<NthPrime(n)<<endl;
    
    
	return 0 ;
}