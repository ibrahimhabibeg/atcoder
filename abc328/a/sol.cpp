#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int n, x, a, s=0;
  scanf("%d%d", &n, &x);
  for(int i =0; i<n; i++){
    scanf("%d", &a);
    if(a<=x) s+=a;
  }
  printf("%d", s);
}