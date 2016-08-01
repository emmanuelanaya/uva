// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int T, N, d, m, j;

  scanf("%d", &T);

  for(int i = 1; i <= T; i++){
    m = j = 0;
    scanf("%d", &N);
    while(N--){
      scanf("%d", &d);
      m += ceil((d + 1) / 30.0) * 10;
      j += ceil((d + 1) / 60.0) * 15;
    }

    printf("Case %d: ", i);
    
    if(m <= j){
      printf("Mile ");
    }
    if(j <= m){
      printf("Juice ");
    }

    printf("%d\n", (m < j) ? m : j);
  }
}
