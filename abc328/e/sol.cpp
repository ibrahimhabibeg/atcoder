#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 10;
vector<int> adj[N];
bool dis[N];
int cnt = 0;

void dfs(int u){
  cnt++, dis[u] = true;
  for(int v: adj[u]) if(!dis[v]) dfs(v);
}

int main(){
  int n, m;
  ll k;
  scanf("%d%d%lld", &n, &m, &k);
  int e1[m], e2[m];
  ll w[m], res = k;
  for (int i = 0; i < m; i++) scanf("%d%d%lld", &e1[i], &e2[i], &w[i]);
  vector<int> b(m);
  for (int i = m-1; i >m-n; i--) b[i] = 1;
  do
  {
    ll cRes = 0;
    cnt = 0;
    for (int i = 1; i <= n; i++) adj[i].clear(), dis[i] = false;
    for (int i = 0; i < m; i++) if(b[i]) adj[e1[i]].push_back(e2[i]), adj[e2[i]].push_back(e1[i]), cRes = (cRes +w[i])%k;
    dfs(1);
    if(cnt==n) res = min(res, cRes);
  } while (next_permutation(b.begin(), b.end()));
  printf("%lld", res);
}