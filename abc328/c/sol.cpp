#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int n , q, l, r;
  scanf("%d%d", &n, &q);
  char s[n+1];
  scanf("%s", s);
  int dp[n];
  dp[0] = 0;
  for (int i = 1; i < n; i++) dp[i] = dp[i-1] + (s[i-1]==s[i]);
  while(q--){
    scanf("%d%d", &l, &r);
    printf("%d\n", dp[r-1]-dp[l-1]);
  }
}