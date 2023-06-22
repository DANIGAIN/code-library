
#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Longest sub array sum k 

   Algorithm :Array

   problem Description : 

    => input a[] = { 4,1,1,1,2,3,5} 

    k = 5 

    {4,1} = 5 
    {1,1,1,2} = 5 
    {2,3} = 5 
    {5} = 5 

    Out Put : 4 
    return sub array size  longest 

    //---------------------------------------brute force approch ---------------//

    best case time complexity : 

    Time :  O(n^2)

    Space : O(1)


    // ---------------------------------- better solution  with the perfix sum Using Hashing ------------------------//
     a[] = { 4,1,1,1,2,3,5} 

     psum = {4,5,6,7,9,12,17};


     time =  o(N * log N )

     use ordered mep  = O (N* 1)
     Unordered map = o(n^2 ) 
     space = O(N) 

     //--------------------------------- optimal solution -----------------------------------------//

     Time Complexity: O(2*N), where N = size of the given array.




*/

int32_t main()
{

	 int a[] = { 4,1,1,1,2,3,5}  ;
    int n = 7 ;

	int k = 5;
	long long sum = 0 ;

	//------------------------------------------brute forch solution --------------------//
   // int l = 0 ;
   // for(int i = 0 ;i< n ;i++)
   // {
   	
   // 	for(int j = i;j< n ;j++)
   // 	{
   // 		 int  s = 0 ;
   //        for(int x = i; x<= j ;x++) s += a[x] ;

   //        if(s == k ) l = max(l ,j-i +1) ;
   //   	}
   // }

   //  cout<<l <<endl ;

  //----------------------negative and positive number of input perfix sum is better Using Hashing--------------------//


  map<int, int> preSumMap ;
  int mxLen = 0 ;

  for(int i = 0 ;i< n ;i++)
  {
  	    sum += a[i] ;

  	    if(sum == k) 
  	    {
  	    	mxLen  = max(mxLen , i+1);
  	    }

  	    long long rem = sum - k  ;
  	    if(preSumMap.find(rem) != preSumMap.end())
  	    {
           int len = i - preSumMap[rem];
           mxLen = max(mxLen , len);
  	    }

  	    if(preSumMap.find(sum) == preSumMap.end())
  	    {
  	    	 preSumMap[sum] = i ;
  	    }

    }


     cout<<mxLen<<endl ;

     //Time Complexity: O(N) or O(N*logN) 
     //Space Complexity: O(N) 
  


  //---------------------------------------- optimal solution   only positive number  -------------------------//



 	// int i = 0 ,j= 0 ; 
  	// int mx = 0 ;
	// while(j< n)
	// {
   //        sum += a[j] ;
   //        while(sum > k && i<= j) 
	//       {
	//     		sum -= a[i] ;
	//     		i++ ;
	//       }
   //       if(sum == k)
	//       {
	//     	mx = max(mx , j-i +1);
	//       }
          
   //       j++ ;
		

	// }


	// cout<<mx <<endl ;


   return 0 ;
}