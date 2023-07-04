#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Best Time to By and sell Stock 

   Algorithm :Array

   problem Description : 

    => arr[] = {7 , 1,5,3,6,4}

          day 1 = 7 price 
          day 2 = 1 price 

          which day sall the  stock then max profit will generate --> 


          like buy : 2nd day 1 tk 
               sell :5th  day 6 tk 

               profit : 5 tk 


               maximize the profit 


   worst case time complexity : 

   Time :  O(e)

   Space : O(n)


*/

int32_t main()
{


	int a[] = {7,1,5,3,6,4};
    int n = 6 ;
	int mn  = a[0];
	int profit = 0 ;


	for(int i = 1 ;i<n  ;i++)
	{
		int cost = a[i] - mn ; 

		profit = max(profit ,cost);

		mn = min(mn , a[i]);
	}

	cout<<profit<<endl;


   return 0 ;
}