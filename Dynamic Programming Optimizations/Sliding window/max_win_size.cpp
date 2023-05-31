#include <bits/stdc++.h>
 
using namespace std;
int main()
 
{
 
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif
 
    // __________________________________________________________________________________________________________ //
                                                                                                                                                     
    int k = 5 ;
    int a[] ={1,4,1,2,2,3};
    int n = sizeof(a)/sizeof(a[0]);
    int sum = 0 ,mx = 0,i= 0 ,j = 0 ;
    while(j<n)
    {
        sum = sum+ a[j];
        if(sum <  k )
        {
            j++;
        }
        else if(sum == k )
        {
            //calculation --->

             mx = max(mx,j-i+1);              

             j++;
        }
        if(sum > k)
        {
            while(sum > k )
            {
                sum -= a[i];i++;
            }
            j++;
        }
    }


    cout<<mx<<endl ;

    // _________________________________________________________________________________________________________ //
 
    return 0;
}
