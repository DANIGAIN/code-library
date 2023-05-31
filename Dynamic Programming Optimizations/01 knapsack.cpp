#include <bits/stdc++.h>
using namespace std ;
int n = 0 ;

int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ,W ;cin>>n>>W;
    int w[n],p[n];

    for(int i = 1 ;i<=n;i++)
    	{
    		cin>>w[i]>>p[i];
    	}

    int v[n+1][W+1] ;
    memset(v,0,sizeof(v));
  for(int i = 1 ;i<=n ;i++)
    {
    	for(int j = 1 ;j<=W ; j ++)
    	{
    		if(j>= w[i] && (p[i]+v[i-1][j-w[i]]) > v[i-1][j])
    		{
    			v[i][j] = v[i-1][j-w[i]]+ p[i];
    		}else 
    		{
    			v[i][j] = v[i-1][j];
    		}
    	}
    }
   cout<<v[n][W];


    return 0 ;
	
}