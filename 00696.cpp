// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int m, n, x;

  while(true){
    scanf("%d %d", &m ,&n);

    if(m == 0 && n == 0) return 0;

    if(min(m, n) == 0){
      x = 0;
    }
    else if(min(m, n) == 1){
      x = max(m, n);
    }
    else if(min(m, n) == 2){
      if(max(m, n) == 2){
	x = 4;
      }
      else if(max(m, n) % 4 == 2){
	x = max(m, n) + 2;
      }
      else{
	x = max(m, n) % 2 == 0 ? max(m, n) : max(m, n) + 1;
      }
    }
    else{
      x = ceil(m * n / 2.0);
    }

    printf("%d knights may be placed on a %d row %d column board.\n", x, m, n);
  }
}
