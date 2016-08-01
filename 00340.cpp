// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int tc = 1, N, code[1005], guess[1005], r, w, s;
  bool occ[1005], ocg[1005];
  
  while(true){
    scanf("%d", &N);
    
    if(N == 0) return 0;

    for(int i = 0; i < N; i++){
      scanf("%d", &code[i]);
    }

    printf("Game %d:\n", tc);
    
    while(true){
      w = s = 0;
      
      for(int i = 0; i < N; i++){
        scanf("%d", &guess[i]);
	occ[i] = ocg[i] = false;
      }

      if(guess[0] == 0) break;

      // strong matches
      for(int i = 0; i < N; i++){
	if(code[i] == guess[i]){
	  s++;
	  occ[i] = ocg[i] = true;
	}
      }

      // weak matches
      for(int i = 0; i < N; i++){
	if(!ocg[i]){
	  for(int j = 0; j < N; j++){
	    if(guess[i] == code[j] && !occ[j]){
	      w++;
	      ocg[i] = occ[j] = true;
	      break;
	    }
	  }
	}
      }

      printf("    (%d,%d)\n", s, w);
    }

    tc++;
  }
}
