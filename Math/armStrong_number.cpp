#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : armstrong number 

   problem Description : 

    => import 371 

     calculation :  3 ^3 + 7 ^ 3 + 1 ^3  = 371 

     This Number is armstrong number  

*/

bool isArmStrong(int n )
{
	int dep = 0 ;
	int k =n ;
	while(n)
	{
		int r = n % 10 ;
		dep += (pow(r,3));
		n /=10 ; 
	}

	
	if(dep == k ) return true ;
	else return false ;
}

int32_t main()
{
    int n = 371;

    bool ok =  isArmStrong(n) ;

    cout<<ok <<endl ;

   return 0 ;
}