#include <bits/stdc++.h>
using namespace std ;
/*
   problem name :  Max sub array sum 

   Algorithm : Kadane’s Algorithm

   problem Description : 

    => 

   worst case time complexity : 

   Time :  O(n)

   Space : O(1)


*/

int32_t main()
{
     int arr[] = {1 ,2 ,7 ,-4 ,3 ,2 ,-10, 9 ,1};
     int n = 9 ;
	 long long sum = 0;
    long long  mx = arr[0];
    for(int i = 0 ;i< n;i++)
    {
        sum += arr[i];
        if(sum <= 0 )sum = 0 ;
        mx = max(mx,sum);
    }
    cout<< mx <<endl ;


   return 0 ;
}