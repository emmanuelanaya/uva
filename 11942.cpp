// SOLVED

#include <bits/stdc++.h>

using namespace std;

int fwd[13], bwd[13];

int main(){
  int N, r;
  printf("Lumberjacks:\n");
  scanf("%d", &N);

  while(N--){
    for(int i = 0; i < 10; i++){
      scanf("%d", &r);
      fwd[i] = bwd[10 - i] = r;
    }

    if(is_sorted(fwd, fwd + 10) || is_sorted(bwd, bwd + 10)){
      printf("Ordered\n");
    }
    else{
      printf("Unordered\n");
    }
  }
}
