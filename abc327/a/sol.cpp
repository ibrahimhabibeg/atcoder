#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int n;
  scanf("%d", &n);
  char s[n+1];
  scanf("%s",s);
  bool isYes = false;
  for (int i = 1; i < n; i++) if((s[i]=='a'&&s[i-1]=='b')||(s[i]=='b'&&s[i-1]=='a')) isYes = true;
  if(isYes) printf("Yes");
  else printf("No");
}