// SOLVED

#include <bits/stdc++.h>

using namespace std;

bitset<1000010> t;
int m, n, s, e, r;
bool c;

void check(){
  for(int i = s; i < e && i < 1000000; i++){
    if(t[i]){
      c = true;
      break;
    }
    t[i] = true;
  }
}

int main(){
  while(scanf("%d %d", &n, &m) && (n != 0 || m != 0)){
    t.reset();
    c = false;
    while(n--){
      scanf("%d %d", &s, &e);
      if(!c){
	check();
      }
    }
    while(m--){
      scanf("%d %d %d", &s, &e, &r);
      while(!c && s < 1000000){
	check();
	s += r;
	e += r;
      }
    }

    if(!c){
      printf("NO ");
    }
    printf("CONFLICT\n");
  }
}
