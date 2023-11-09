#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  vector<vector<int>> g(9, vector<int>(9)), r(9, vector<int>(9)), c(9, vector<int>(9));
  int v;
  for (int i = 0; i < 9; i++) for (int j = 0; j < 9; j++)
    scanf("%d", &v), r[i][j] = c[j][i] = g[3*(i/3)+(j/3)][3*(i%3)+(j%3)] = v;
  for (int i = 0; i < 9; i++) sort(g[i].begin(), g[i].end()), sort(r[i].begin(), r[i].end()), sort(c[i].begin(), c[i].end());
  bool isYes = true;
  for (int i = 0; i < 9; i++) for (int j = 0; j < 9; j++) if(r[i][j]!=j+1 || c[i][j]!=j+1 || g[i][j]!=j+1) isYes = false;
  if(isYes) printf("Yes");
  else printf("No");
}