#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Longest Consecutive Sequence

   Algorithm :Array

   problem Description : 

    => a[] = {102, 4 , 100,101 ,3,2 ,1 ,1}

 

*/

//--------------------------- better solutin --------------------//

  // int largestConSeq(std::vector<int>& a )
  // {
  // 	    if(a.size() == 0 )
  // 	    {
  // 	    	return 0 ;
  // 	    }
         
  //       sort(a.begin(), a.end());

  // 	    int curr = 1 ;
  // 	    int perv = a[0];

  // 	    int mx = INT_MIN ; 

  // 	    for(int i = 1 ;i< a.size();i++)
  // 	    {
  // 	    	if(a[i] == perv+1)
  // 	    	{
  // 	    		curr++ ;
  // 	    	}
  // 	    	else if(a[i] != perv)
  // 	    	{
  // 	    		curr =1 ;
  // 	    	}
  // 	    	mx = max(mx , curr);
  // 	    	perv = a[i];

  // 	    }

  // 	   return mx ;
  // }

//time : O(n) + O(log n)

//space : O(1);


//----------------------------------- optimal solution ------------------------------//

int largestConSeq(vector<int> a)
{
    unordered_set<int> st ;

    if(a.size() == 0 ) return 0 ;


    for(auto x : a){
        st.insert(x);
    }

    int longest = 1 ;

    for(auto it : st)
    {

        //which place to start that is start with consecutive 

        if(st.find(it-1) == st.end())
        {
            int x = it ;
            int cnt = 0 ;

            while(st.find(x) != st.end())
            {
                x= x +1 ;
                cnt++ ;
            }

            longest = max(longest, cnt);
            
        }

    
    } 

    return longest ;
}

// Time : O(n) * O(N)
//Spase :O(N)


int32_t main()
{
    std::vector<int> a =  {102, 4 , 100,101 ,3,2 ,1 ,1 } ;


    int ans = largestConSeq(a);


    cout<< ans <<endl ;


   return 0 ;
}