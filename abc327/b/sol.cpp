#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ll b, a = -1;
  scanf("%lld", &b);
  for (ll i = 1; i < 16; i++){
    ll v = 1;
    for (int j = 0; j < i; j++) v*=i;
    if(v==b)a=i;
  }
  printf("%lld", a);
}
  