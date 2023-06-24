#include <bits/stdc++.h>
using namespace std ;
/*
   problem name :  3Sum  problem

   Algorithm :Array

   problem Description : 

    => 

   worst case time complexity : 

  Time Complexity : O(n^2)  

  Space Complexity : O(M)  // k is the no.of triplets. 

  problem link : https://leetcode.com/problems/3sum/


*/

int32_t main()
{


       std::vector<int> a{-1,0,1,2,-1,-4};

 // ------------------------------optimal --------------------------//


    
       vector<vector<int>> ans ;
       int n = a.size();
       sort(a.begin(),a.end());
       for(int i = 0 ;i< n-2 ;i++)
       {
            if(i== 0 || (i>  0 && a[i] != a[i-1]))
            {
                    int l = i+1 ;
                    int r = n-1 ;
                    while(l<r )
                      {
                
                          int sum = a[i] + a[l] + a[r];
                          if( sum ==  0)
                            {
                               vector<int> tamp = {a[i],a[l],a[r]};
                               ans.push_back(tamp);
                               while(l< r && a[l] == a[l+1]) l++ ;
                               while(l< r && a[r] == a[r-1 ])r-- ;
                               l++ ;
                               r-- ;
                            }
                            else if(sum < 0) l++ ;
                            else r-- ;
                       }
             }
       }

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }    
        cout << endl;
    }

  

   return 0 ;
}