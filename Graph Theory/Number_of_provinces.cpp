#include <bits/stdc++.h>

using namespace  std ;


/*

   Time Complexity: O(N) + O(V+2E), Where O(N) is for outer loop and inner loop runs in total a single DFS over entire graph, and we know DFS takes a time of O(V+2E). 

   Space Complexity: O(N) + O(N),Space for recursion stack space and visited array.


*/

//problem link : https://leetcode.com/problems/number-of-provinces/

void dfs(vector<int> adj[] , int node , int vis[]){

    vis[node] = 1 ;

    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(adj , it , vis);
        }
    }


}

int countProvinses(vector<vector<int>>& roads , int V){

    int vis[V] = {0};



    int count = 0 ;
    vector<int> adj[V];
    for(int i = 0 ;i< V ; i++){
        for(int j = 0 ;j< V ; j++){
            if(roads[i][j] == 1 && i != j){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }

    for(int i = 0 ;i<V ;i++){
        if(!vis[i]){
            count ++ ;
            dfs(adj,i,vis);
        }

    }

    return count ;


}

int findNumOfProvinces(vector<vector<int>>& road , int n){

   return countProvinses(road , n);

}

int32_t main(){

    int n  = 4 ;

    vector<vector<int> > road = {
        {1,1,1,0},
        {1,1,1,0},
        {1,1,1,0},
        {0,0,0,1}
    };


    int ans = findNumOfProvinces(road, n);
    cout<<ans <<endl ;

    return 0 ;
}