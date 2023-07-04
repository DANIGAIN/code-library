#include <bits/stdc++.h>
using namespace std;

class Solution {
  private:
  
   
   void dfs(int start , vector<int> adj[] ,int visit[] ,  vector<int >  &ans )
   {
        
        ans.push_back(start);
        
        for(auto it : adj[start])
        {
            if(!visit[it])
            {
                visit[it] =1 ;
                dfs(it, adj , visit, ans);
            }
        }
   }
    
  public:
 
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int visit[V] = {0};
        
        visit[0] = 1 ;
        vector<int> ans;

        dfs(0 , adj ,visit,  ans);
        return ans ;
    }
};
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
