// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int c, t, n, bx, by, px, py;
  
  scanf("%d", &c);

  while(c--){
    scanf("%d\n%*d", &t);

    while(t--){
      scanf("%d %d %d %d", &bx, &by, &px, &py);

      if((bx + by) % 2 != (px + py) % 2){
	printf("no move\n"); 
      }
      else if(bx == px && by == py){
	printf("0\n");
      }
      else if(abs(bx - px) == abs(by - py)){
	printf("1\n");
      }
      else{
	printf("2\n");
      }
    }
  }
}
