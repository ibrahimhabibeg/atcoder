#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  string s;
  cin >> s;
  int n = s.length();
  stack<char> st;
  char a='z', b='z';
  for (char c: s){
    st.push(c);
    if(a=='A'&&b=='B'&&c=='C'){
      st.pop();
      st.pop();
      st.pop();
      if(!st.empty()) b = st.top(), st.pop();
      else b = 'z';
      if(!st.empty()) a = st.top(), st.pop();
      else a= 'z';
      if(a!='z') st.push(a);
      if(b!='z') st.push(b);
    }else a=b, b=c;
  }
  int m = st.size();
  char res[m+1];
  res[m] = '\0';
  for (int i = m-1; i >=0; i--) res[i] = st.top(), st.pop();
  printf("%s", res);
}