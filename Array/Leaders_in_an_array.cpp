#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Leaders in an array 

   Algorithm : Array

   problem Description : 

    =>  a[] = {10, 22,12,3,0,6};

    ans : 22 12 6




*/

int32_t main()
{
    int  a[] = {10, 22,12,3,0,6};

    int n = 6;

    std::vector<int> ans;


    //----------------------------------------brute forse solution ------------------//

    for(int i = 0 ;i< n ;i++)
    {
    	bool leader = true;
    	for(int j = i+1 ;j< n ; j ++)
    	{
    		if(a[i] < a[j])
    		{
                leader = false ;
                break ;
    		}
    	}

    	if(leader) ans.push_back(a[i]);
    }

    // time : O(n^ 2)
    //space : O(n)

    //------------------------------------------ optimal solution --------------------//



    // int mx = a[n-1];

    // ans.push_back(a[n-1]);

    // for(int i = n-2; i >= 0 ;i--)
    // {
    // 	if(mx <= a[i])
    // 	{
    // 		ans.push_back(a[i]);
    // 		mx = a[i];
    // 	}
    // }

    // sort(ans.begin(), ans.end());


     // time : O(N) + O(N log n)
    // space : O(N)

    //-------------------------------------------print ----------------------------//


    for(auto x : ans)cout<<x<<" ";

   

   return 0 ;
}