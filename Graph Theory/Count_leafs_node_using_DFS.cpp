#include <bits/stdc++.h>
#define ll long long 
#define N '\n'
using namespace std ;

void dfs(vector<int> adj[], int visit[] , vector<long long >& cnt , int curr)
{

	bool hasChild = false ;

	for(auto it : adj[curr])
	{
		if(!visit[it])
		{
			visit[it] = 1 ;
			dfs(adj, visit , cnt,it);
			cnt[curr] += cnt[it];
			hasChild = true ;

		}
	}

   if(!hasChild)
   {
   	   cnt[curr] = 1 ;
   }
     
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;cin>>t ;
	while(t--)
	{
		int n ;cin>>n ;
		vector<int> adj[n+1];

		int visit[n+1] = {0};
		vector<long long> cnt(n+1,0 );

		for(int i =1 ;i< n ;i++)
		{
			int u,v ;cin>>u>>v ;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}

		visit[1] = 1 ;


		dfs(adj , visit , cnt , 1);

		int q ; cin>>q ;
		while (q--)
		{
			long long  x ,y ;cin>>x>>y ;
			cout<<cnt[x] *cnt[y]<<endl;
		}

	}
	return 0 ;
}