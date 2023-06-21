#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Find the number that appears once, and the other numbers twice


   Algorithm :Array

   problem Description : 

    => 
    Input Format: arr[] = {2,2,1}

    Result: 1
    Explanation: In this array, only the element 1 appear once and so it is the answer.

    //--------------------------------brute force  --------------------------------------//

   worst case time complexity : 

   Time :  O(n*n)

   Space : O(1)


*/



//-------------------------------------------------- brute force solution ------------------------------//
// int fundNumber(int a[])
// {

// 	int n = 3;

// 	for(int i = 0 ;i<n;i++)
// 	{
// 		int num = a[i];
// 		int count = 0;
// 		for(int j = 0 ;j< n ;j++)
// 		{
// 			if(a[j] == num) 
// 			{
//                count ++ ;
// 			}
// 		}
// 		if(count == 1) return num ;
// 	}
// }

//----------------------------------------- better sulution use map ------------------//


// int fundNumber(int a[])
// {

// 	map<int , int > mp ;

//    int n = 3 ;
//    for(int i = 0 ;i< n ;i++)mp[a[i]]++;

//    for(auto [x,y]: mp)
//    {
//    	if(y == 1 )
//    	{
//    		return x ;
//    	}
//    }


	
// }

// use unordermap wast case can ba : O(n^2) ;

// time complisity : O(N log M ) 
//                   n : size of the array 
//                   log M : size of the map 


// 2 nd loop occerence : O(n/2+1 ) ;


// total time :  O(N log M ) +  O(n/2+1 )
// space : 0(n/2+1 );




//----------------------------------------- optimal sulution solve with xor  ------------------//

int fundNumber(int a[])
{  

	int n = 3 ;
	int xr  = 0 ;
	for(int i = 0 ;i< n ;i++)
	{
		xr ^= a[i] ;
	}

	return xr ;

}


// time : O(n) 
// space : O(1);


int32_t main()
{


	int  a[] = {2,2,1} ;

	int num = fundNumber(a) ; 

	cout<<num<<endl;






   return 0 ;
}