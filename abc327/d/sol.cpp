#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 2e5+5;
vector<int> adj[N];
int dp[N], c[N];

int dfs(int u, int p){
  if(dp[u]!=-1) return dp[u];
  if(p==0) c[u] = 0;
  for (int v: adj[u]) if(v!=p){
    if(c[v]==-1){
      c[v] = (c[u]+1)%2;
      if(!dfs(v,u)) return dp[u] = 0;
    }else if(c[v]==c[u]) return dp[u] = 0;
  }
  return dp[u] = 1;
}

int main(){
  int n, m;
  scanf("%d%d", &n, &m);
  for (int i = 0; i <= n; i++) adj[i].clear(), dp[i]=c[i]=-1;
  int a[m], b[m];
  for (int i = 0; i < m; i++) scanf("%d", &a[i]);
  for (int i = 0; i < m; i++) scanf("%d", &b[i]);
  for (int i = 0; i < m; i++) adj[a[i]].push_back(b[i]), adj[b[i]].push_back(a[i]);
  bool isYes = true;
  for (int i = 1; i <= n; i++) if(!dfs(i,0)) isYes = false;
  if(isYes) printf("Yes");
  else printf("No");
}