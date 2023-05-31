#include <bits/stdc++.h>
 
using namespace std;
int main()
 
{
 
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif
 
    // __________________________________________________________________________________________________________ //

    // largest substring with k unique character -->
    string s = "aabacbebebe";
    int k = 3 ;
    int size = s.size();
    int i = 0 ,j = 0 ;
    int mx = INT_MIN ;
    unordered_map<char, int > mp ;

    while(j < size)
    {
        mp[s[j]]++;
        if(mp.size()< k)
        {
            j++;
        }
        else if(mp.size() == k )
        {
            mx = max(mx ,j-i+1 );
            j++;

        }
        else if(mp.size() > k )
        {
            while(mp.size() > k)
            {
                mp[s[i]]--;
                if(mp[s[i]]== 0)
                {
                    mp.erase(s[i]);
                }
                i++;
            }
            j++;
        }

    }
    cout<<mx <<endl;

                                                                                                                                                     
    
    // _________________________________________________________________________________________________________ //
 
    return 0;
}
