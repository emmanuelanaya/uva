// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int x1, y1, x2, y2;

  while(true){
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    if(x1 == 0) return 0;

    if(x1 == x2 && y1 == y2){
      printf("0\n");
    }
    else if(abs(x1 - x2) == abs(y1 - y2) ||
	    x1 == x2 || y1 == y2){
      printf("1\n");
    }
    else{
      printf("2\n");
    }
  }
}
