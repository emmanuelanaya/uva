// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int H, U, D, F, c, flag;
  double p, f;

  while(true){
    scanf("%d %d %d %d", &H, &U, &D, &F);

    if(H == 0) return 0;

    p = c = f = 0;
    
    while(true){
      f = U * F * c / 100.0;

      p += (U - f < 0) ? 0 : U - f;
      if(p > H){
	flag = 1;
	break;
      }
      
      p -= D;
      if(p < 0){
	flag = 2;
	break;
      }
      
      c++;
    }

    if(flag == 1){
      printf("success on day ");
    }
    else{
      printf("failure on day ");      
    }

    printf("%d\n", c + 1);
  }
}
