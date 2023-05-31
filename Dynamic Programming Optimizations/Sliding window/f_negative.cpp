#include <bits/stdc++.h>
 
using namespace std;


 
int main()
 
{
 
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif

    // __________________________________________________________________________________________________________ //
    
    int a[] = {12,-1,-7,8,-15,30,16,28};
    int n = sizeof(a)/sizeof(a[0]);
    list<int> l ;
    vector<int> v ;
    int k = 3 ;
    int i = 0 ,j = 0 ;
    while(j<n)
    {
        if(a[j]< 0)
        {
            l.push_back(a[j]);
        }

        if(j-i+1< k )j++;

        else if(j- i +1  == k )
        {
            if(l.size()== 0)
            {
                v.push_back(0);
            }
            else
            {
                v.push_back(l.front());
                if(a[i] == l.front())
                {
                    l.pop_front();
                }
            }

            i++;j++;
        }
    }
    for(int i = 0 ;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }


    // ________________________________________________________________________________________________________ //
 
    return 0;
}
