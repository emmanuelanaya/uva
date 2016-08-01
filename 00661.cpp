// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int tc = 0, n, m, c, st[25], con[25], max, r, cur;
  bool b;

  while(++tc){
    memset(st, 0, sizeof st);
    cur = max = 0;
    bool f = false;
    
    scanf("%d %d %d", &n, &m, &c);
    
    if(n == 0 && m == 0 && c == 0) return 0;

    for(int i = 1; i <= n; i++){
      scanf("%d", &r);
      con[i] = r;
    }
    
    while(m--){
      scanf("%d", &r);

      if(st[r] == 0){
	cur += con[r];
	st[r] = 1;
	if(cur > max){
	  max = cur;
	}
      }
      else{
	cur -= con[r];
	st[r] = 0;
      }

      if(cur > c){
	f = true;
      }
    }

    printf("Sequence %d\n", tc);
    
    if(f){
      printf("Fuse was blown.\n");
    }
    else{
      printf("Fuse was not blown.\n");
      printf("Maximal power consumption was %d amperes.\n", max);
    }

    printf("\n");
  }
}
