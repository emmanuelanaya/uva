// SOLVED

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m, dum, t;
  set<int> s;
  while(scanf("%d %d", &n, &m) && n && m){
    s.clear();
    while(n--){
      scanf("%d", &dum);
      s.insert(dum);
    }
    t = 0;
    while(m--){
      scanf("%d", &dum);
      if(s.count(dum)){
	t++;
      }
    }
    printf("%d\n", t);
  }
}
