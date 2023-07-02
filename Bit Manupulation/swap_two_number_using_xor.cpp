#include <bits/stdc++.h>
using namespace std ;

/*
    problem name : swap two  number .


    problem des : 

    a = 10 ;
    b = 20 ;

    a= a^ b   

    b = a^ b   so   b =  a^ b ^ b so b is cancle 

    a = a ^b    so a = a ^ b ^ a so a is cancle 


*/

int32_t main()
{
	int a = 10 ;
	int b = 20 ;

	a = a ^ b ;
	b = a ^ b ;
	a = a ^ b ;

	cout<<a <<" "<<b<<endl;

 
	return 0 ;
}