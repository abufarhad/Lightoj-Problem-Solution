#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100000];
bool visited[100]={0};
int ans=0;

int dfs(int s){
visited[s]=1;
ans++;
for(int i=0;i<adj[s].size();i++){
    if(!visited[adj[s][i]]){  dfs(adj[s][i]); }
}

}

 int main()
 {

     int n,e,i,s,a,b;
     cin>>n>>e;
     for(i=0;i<e;i++){
        cin>>a>>b;
     adj[a].push_back(b);
     adj[b].push_back(a);
     }
     cin>>s;
     dfs(s);
    // cout<<ans<<endl;
     cout<<(n-ans);
 }
