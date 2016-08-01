// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int b, n, r, t = 1;
  while(true){
    scanf("%d", &n);
    if(n != 0){
      b = 0;
      printf("Case %d: ", t++);
      
      while(n--){
	scanf("%d", &r);
	if(r == 0){
	  b--;
	}
	else{
	  b++;
	}
      }

      printf("%d\n", b);
    }
    else return 0;
  }
}
