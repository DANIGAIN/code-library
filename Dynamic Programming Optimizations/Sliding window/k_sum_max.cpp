#include <bits/stdc++.h>
using namespace std;
int main()
 
{
 
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif

    // __________________________________________________________________________________________________________ //
      int a[] ={5,1,2,3,4};
      int n = sizeof(a)/sizeof(a[0]);
      int sum = 0 ,i= 0 ,j = 0 ,mx = INT_MIN ;
      int k  = 2 ;
      while(j<n)
      {
         sum +=a[j];
         if(j-i+1 <k)
         {
            j++;
         }
         else if(j-i+1 == k )
         {
            mx = max(sum ,mx );
            sum -= a[i];
            i++;j++;
         }
      }
      cout<<mx<<endl ;

    // _________________________________________________________________________________________________________ //
 
    return 0;
}
