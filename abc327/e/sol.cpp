#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int n;
  scanf("%d", &n);
  int p[n];
  vector<vector<double>> dp(n, vector<double>(n));
  for (int i = 0; i < n; i++) scanf("%d", &p[i]);
  dp[0][0] = p[0];
  for (int i = 1; i < n; i++) dp[0][i] = max(dp[0][i-1], (double) p[i]);
  for (int i = 1; i < n; i++) for (int j = i; j < n; j++) dp[i][j] = max(dp[i][j-1], 0.9*dp[i-1][j-1] + p[j]);
  double res = dp[0][0]-1200, low = 0;
  for (int i = 0; i < n; i++){
    low = 0.9*low + 1;
    double right = -1200.0/sqrt(i+1);
    for (int j = 0; j < n; j++) res = max(res, (dp[i][j]/low) + right);
  }
  printf("%lf", res);
}