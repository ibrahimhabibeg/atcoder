#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int n;
  scanf("%d", &n);
  int h = n/100, t = (n/10)%10, d = n%10;
  if(h*t>=d &&h*t<10) printf("%d", h*100+t*10+h*t);
  else if(h*(t+1)<10) printf("%d", h*100+(t+1)*10+h*(t+1));
  else printf("%d", (h+1)*100);
}