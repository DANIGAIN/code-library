#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Greatest common divisor


   Algorithm : Euclidean  Algorithm

   problem Description : 

    =>  input 2 number num1 = 10  , num2 = 20 GCD : 10 

*/


//--------------------------------- brute force solution -----------------------------//

// int GCD(int num1 , int num2)
// {
// 	int gcd = 0 ;
// 	for(int i = 1 ;i<= num1 ; i++)
// 	{
//          if(num1 % i == 0 && num2 % i == 0)
//          {
//          	gcd = i ;
//          }
// 	}

// 	return gcd ;

// }

//Time : O(min(num1 ,num2))

//Space : O(1)


int GCD(int a, int b)
{
	if(a== 0) 
      return b ;
   return  GCD(a % b , a);
}

int32_t main()
{
    int num1  = 10 ;
    int num2 = 20 ;
    int gcd = GCD(num1 , num2);
    cout<<gcd<<endl;

   return 0 ;
}