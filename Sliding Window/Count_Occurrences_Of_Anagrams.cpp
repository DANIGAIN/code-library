#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Count Occurrences Of Anagrams

   Algorithm : sliding window

   problem Description : 

    =>  s = "aabaabaa"    pattern = "aaba"

    k = pattern.size() ;

    Anagrams = {aaba},{abaa},{baaa},{aaab} ...n!

    stap 1 :
       map = a = 3 
             b = 1 

      count = 2 // map.size();

    Input:
       txt = forxxorfxdofr
       pat = for
       Output: 3
Explanation: for, orf and ofr appears
in the txt, hence answer is 3.




*/

int32_t main()
{

	  string s = "geeksforgeeks";
     string pattern = "e";

      int n = s.size() ;
      int k = pattern.size() ;
      map<char, int> mp;
      for(int i = 0 ;i< k ;i++)mp[pattern[i]]++ ;

      int count = mp.size();
      int i = 0 , j = 0 ;

      int ans = 0 ;
      while(j<n)
      {
      	    //calculation -->
      	     if(mp.find(s[j]) != mp.end())
      	     {
      	     	  mp[s[j]] -- ;
                  if(mp[s[j]] == 0) count -- ;

      	     }

             

      	     if(j-i+1 < k)
      	     {
      	     	j++ ;
      	     }
      	     else if(j-i+1 ==  k)
      	     {

      	     	if(count == 0 ) ans ++;
            
      	     	if(mp.find(s[i]) != mp.end())
      	     	{
      	     		
                  mp[s[i]] ++ ;
      	     		
      	     	}
               if(mp[s[i]] == 0)
               {
                    count ++ ;
               }
              
      	    

      	     	  i++;j++;

      	     }
      }


      cout<<ans<<endl;




   return 0 ;
}