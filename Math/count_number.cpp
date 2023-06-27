#include <bits/stdc++.h>
#define endl '\n'
using namespace std ;


int32_t main()
{
    int n ;cin>>n ;

    //if the divition is 2 then log2() use  
    // if the division is 5 the log5() use 
    // so one -- >
    
    int ans = (int)log10(n) + 1 ;
    cout<<ans<<endl;

   return 0 ;
}