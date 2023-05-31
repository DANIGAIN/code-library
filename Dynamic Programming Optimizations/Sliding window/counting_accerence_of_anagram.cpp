#include <bits/stdc++.h>
 
using namespace std;
int main()
 
{
 
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif
 
    // __________________________________________________________________________________________________________ //
                                                                                                                                                     
    string s = "forxxorfxdofr";
    string pat ="for";
    map<char,int> mp ;
    for(int i =0 ;i<pat.size();i++)mp[pat[i]]++;
    
    int k = pat.size(),i = 0 ,j = 0;
    
    int count = mp.size();
    
    int ans  = 0 ;

    while(j<s.size())
    {
       // calculation part --->
        if(mp.find(s[j])!= mp.end())
        {
            mp[s[j]]--;

                if(mp[s[j]] == 0)
                  {
                      count --;
                  }

        }
      

       // part mid work --->
        if(j-i+1 < k )
        {
            j++;
        }
        else if(j-i+1 == k )
        {
            if(count == 0 ) ans ++;
            if(mp.find(s[i]) != mp.end())
            {
                mp[s[i]]++ ;
            }
            if(mp[s[i]] == 0)
            {
                count ++;
            }
            i++ ;j++;

        }
          
    }
        cout<<ans <<endl ;


    // _________________________________________________________________________________________________________ //
 
    return 0;
}
