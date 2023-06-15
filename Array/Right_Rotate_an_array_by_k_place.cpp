#include <bits/stdc++.h>
using namespace std ;

//no use stl Custom functions 

// void Reverse(int a[] , int start , int end)
// {
// 	while(start<= end)
// 	{
// 		int tamp = a[start] ;
// 		a[start] = a[end] ; 
// 		a[end] = tamp ;
// 		start ++;
// 		end -- ;
// 	}
// }

int32_t main()
{

	int a[] = {1,2,3,4,5,6,7};
	int n = 7,k = 3;
    // write optimal solution --> 

    reverse(a,a+n) ;
    reverse(a,a+ k) ;
    reverse(a+k ,a+n);



    for(auto x : a) cout<<x<<" ";





   return 0 ;
}