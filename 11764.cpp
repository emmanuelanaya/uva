// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int T, N, c, r, h, l;

  scanf("%d", &T);

  for(int i = 1; i <= T; i++){
    h = l = 0;
    
    scanf("%d", &N);

    scanf("%d", &c);
    N--;
    
    while(N--){
      scanf("%d", &r);
      if(r > c){
	h++;
      }
      if(r < c){
	l++;
      }
      c = r;
    }

    printf("Case %d: %d %d\n", i, h, l);
  }
}
