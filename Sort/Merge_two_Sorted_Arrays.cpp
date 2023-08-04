#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Merge two Sorted Arrays


   Algorithm : Array

   problem Description : 

            n = 4, arr1[] = [1 4 8 10] 
            m = 5, arr2[] = [2 3 9]

            After merging the two non-decreasing arrays, we get, 1,2,3,4,8,9,10.



*/

//--------------------------------- brute force solution --------------//

// void marge(int a[] , int b[] , int n , int m)
// {
// 	long long c[n+m+2];
// 	int left = 0 ; 
// 	int right = 0 ;
// 	int ind = 0 ;

// 	while(left <= n && right <= m)
// 	{
// 		if(a[left] <= b[right])
// 		{
//              c[ind++] = a[left++];
// 		}else 
// 		{
// 			c[ind++] = b[right++] ;
// 		}
// 	}

// 	while(left<= n)
// 	{
// 		 c[ind++] = a[left++];
// 	}
// 	while(right <= m)
// 	{
// 		 c[ind++] = a[right++];
// 	}




// 	for(int i = 0 ;i< n+m+2 ; i++)
// 	{
// 		if(i<=n)
// 		{
// 			a[i] = c[i];
// 		}else{
// 			b[i-n-1] = c[i];
// 		}
// 	}
// }



//Time Complexity: O(n+m) + O(n+m)
//Space Complexity: O(n+m) as we use an extra array of size n+m.

//---------------------------- optimal solution 1 -------------------------//

void  marge(int a[], int b[],int n ,int m)
{
	int left = n-1 ;
	int right = 0 ;

	while(left >= 0  && right < m)
	{
		if(a[left] > b[right])
		{
             swap(a[left--] ,b[right++]);
		}else break ;
	}


	sort(a, a+n);
	sort(b , b+m);
}



//Time Complexity : O( min (m,n) + O(n lon n ) + O (m log m)
//Space Complexity : O(1 )
 



int32_t main()
{

	int n = 4, arr1[] = {1, 4, 8, 10};
    int  m = 3, arr2[] = {2, 3, 9} ;

    marge(arr1 , arr2 ,n , m); 


    for(int i = 0 ;i< n ; i++)
    {
        cout<<arr1[i]<<" ";	
    }

    for(int i = 0 ;i< m ;i++)
    {
    	cout<<arr2[i]<<" ";
     }

  return 0 ;
}
