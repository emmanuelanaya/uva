// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int N, T, r, max;

  scanf("%d", &T);

  for(int i = 1; i <= T; i++){
    max = 0;
    scanf("%d", &N);

    while(N--){
      scanf("%d", &r);
      if(r > max){
	max = r;
      }
    }

    printf("Case %d: %d\n", i, max);
  }
}
