// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int B, N, res[25], ri, D, C, V;
  bool p; 
  
  while(true){
    
    scanf("%d %d", &B, &N);

    if(B == 0 && N == 0) return 0;
      
    for(int i = 1; i <= B; i++){
      scanf("%d", &ri);
      res[i] = ri;
    }

    while(N--){
      scanf("%d %d %d", &D, &C, &V);
      res[D] -= V;
      res[C] += V;
    }

    p = true;
    
    for(int i = 1; i <= B; i++){
      if(res[i] < 0){
	p = false;
	break;
      }
    }
    
    if(p){
      printf("S\n");
    }
    else{
      printf("N\n");
    }
  }
}
