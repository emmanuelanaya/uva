// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int N, B, H, W, p, a, min;
  
  while(scanf("%d %d %d %d", &N, &B, &H, &W) != EOF){
    min = B + 100;
    
    while(H--){
      scanf("%d", &p);
      
      for(int i = 0; i < W; i++){
	scanf("%d", &a);
	if(a >= N && p * N <= min){
	  min = p * N;
	}
      }
    }

    if(min > B){
      printf("stay home\n");
    }
    else{
      printf("%d\n", min);
    }
  }
}
