#include <bits/stdc++.h>
using namespace std ;

int32_t main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     pair<int ,int > p  = make_pair(1,2);
     swap(p.first , p.second);
     cout<<p.first <<'\n';
     cout<<p.second<<'\n';
     return 0 ;
}