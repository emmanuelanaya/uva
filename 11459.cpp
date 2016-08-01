// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int tc, a, b, c, boa[110], f, t;
  char pla[1000010];
  bool e;

  scanf("%d", &tc);
  
  while(tc--){
    memset(boa, 0, sizeof boa);
    memset(pla, 1, sizeof pla);
    scanf("%d %d %d", &a, &b, &c);
    while(b--){
      scanf("%d %d", &f, &t);
      boa[f] = t;
    }
    t = 0;
    e = false;
    while(c--){
      scanf("%d", &f);
      if(!e){
  	pla[t] += f;
  	if(boa[pla[t]] != 0){
  	  pla[t] = boa[pla[t]];
  	}
  	if(pla[t] >= 100){
  	  e = true;
  	}
      }
      t = (t + 1) % a;
    }
    for(int i = 0; i < a; i++){
      printf("Position of player %d is %d.\n", i + 1, pla[i]);
    }
  }
}
