// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int k, n, m, x, y;

  while(true){
    scanf("%d", &k);
    if(k != 0){
      scanf("%d %d", &n, &m);
      while(k--){
	scanf("%d %d", &x, &y);

	if(x == n || y == m){
	  printf("divisa\n");
	}
	else{
	  if(x < n){
	    if(y < m){
	      printf("SO\n");
	    }
	    else{
	      printf("NO\n");
	    }
	  }
	  else{
	    if(y < m){
	      printf("SE\n");
	    }
	    else{
	      printf("NE\n");
	    }
	  }
	}
      }
    }
    else return 0;
  }
}
