#include <bits/stdc++.h>
using namespace std ;
/*
   problem name :Majority Element > n/2 time 

   Algorithm : Moore’s Voting Algorithm

   problem Description : 

    =>  input  a[] = {2,2,3,3,1,2,2};

  //--------------------------------------- brute force solution ---------------------------------//

   worst case time complexity : 

   Time :  O(n^2)

   Space : O(1)


*/

// int maxCount(int a[] , int n)
// {
//     for(int i = 0 ;i< n ;i++)
//     {
//     	int count = 0 ;
//     	for(int j = 0 ;j< n ;j++)
//     	{
//     		if(a[i] == a[j])count ++;
//     	}

//         if(count >= n/2)
//         {
//         	return a[i];
//         }

//     } 
//     return -1 ;

// }


//------------------------------------------- better soluton  using hashing --------------------------------//


// int maxCount(int a[] ,int n)
// {
//      map<int  ,int > mp ;

//     for(int i = 0 ;i< n ;i++) mp[a[i]] ++ ;
   
        
//       for(auto [x,y]: mp)
//       {
//       	   if(y > n/2)
//       	   {
//       	   	   return x ;
//       	   }
//       } 

//     return -1 ;
// }

//O(N*logN) + O(N), where N = size of the given array.
// Space  :  O(N) as we are using a map data structure.


//----------------------------------- optimnal solution ------------------------//

 int maxCount(int a[], int n)
 {
        
       int count = 0 ;
       int ele = -1 ;
       
       for(int i = 0 ;i<n ;i++)
       {
           if(count == 0 && a[i] != ele)
           {
               count = 1 ;
               ele = a[i] ;
           }
           else if( a[i] == ele) count ++ ;
           else count -- ;
       }
       
       int c = 0 ;
       for(int i = 0 ;i< n ;i++) 
       {
           if(ele == a[i])c++ ;
       }
       
       if(c > n/2) return ele ;
       return -1 ;
       
        
    }


 // Time : O(N) + O(N), where N = size of the given array.
 // space : O(1)

int32_t main()
{
    int  a[] = {2,2,3,3,1,2,2};
    int n = 7 ;
   int mxEle = maxCount(a, n);

   cout<<mxEle <<endl;

   return 0 ;
}