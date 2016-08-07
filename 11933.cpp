// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, a, b;
  bool p;

  while(scanf("%d", &n) && n != 0){
    p = a = b = 0;
    for(int i = 0; i < 31; i++){
      if(n & (1 << i)){
	if(!p){
	  a |= (1 << i);
	  p = true;
	}
	else{
	  b |= (1 << i);
	  p = false;;
	}
      } 
    }
    printf("%d %d\n", a, b);
  }
}
