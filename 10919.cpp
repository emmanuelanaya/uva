// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int k, m, r, c, rd;
  set<int> co;
  bool ans;
  
  while(true){
    scanf("%d", &k);

    if(k == 0) return 0;

    scanf("%d", &m);

    co.clear();
    
    while(k--){
      scanf("%d", &rd);
      co.insert(rd);
    }

    r = 0;
    ans = true;
    
    while(m--){
      scanf("%d %d", &c, &r);
      while(c--){
	scanf("%d", &rd);
	if(co.count(rd) != 0){
	  r--;
	}
      }
      if(r > 0){
	ans = false;
      }
    }
    
    if(ans){
      printf("yes\n");
    }
    else{
      printf("no\n");
    }
  }
}
