#include <bits/stdc++.h>
using namespace std;
int main()
 
{
 
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   
#endif
 
    // __________________________________________________________________________________________________________ //
    int a[] = {1,3,-1,-3,5,3,6,7};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 3,i =0 ,j = 0  ;
    list<int> l ;
    vector<int> ans;
    while(j<n)
    {
        //calculation ->
        while(l.size()> 0 && l.back() < a[j])
        {
            l.pop_back();

        }
        l.push_back(a[j]);

        if(j-i+1 < k )
        {
            j++;
        }
        else if(j-i+1 == k )
        {
            ans.push_back(l.front());

            if(l.front() == a[i])
            {
                l.pop_front();
            }
            i++;j++;
        }
    }
    for(int i = 0 ;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    // _________________________________________________________________________________________________________ //
 
    return 0;
}
