#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int n, d, res = 0;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++){
    scanf("%d", &d);
    int t = i%10;
    bool isIYes = true;
    int a = i;
    while(a){
      if(a%10!=t) isIYes = false;
      a/=10;
    }
    for (int j = 1; j <= d; j++){
      bool isJYes = true;
      a = j;
      while(a){
        if(a%10!=t) isJYes = false;
        a/=10;
      }
      if(isIYes&&isJYes) res++;
    }
  }
  printf("%d", res);
}