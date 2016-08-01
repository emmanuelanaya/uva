// SOLVED

#include <bits/stdc++.h>

int main(){
  int p = 0;
  char c;
  
  while(scanf("%c", &c) != EOF){
    if(c == '"'){
      if(p == 0){
	printf("``");
	p = 1;
      }
      else{
	printf("''");
	p = 0;
      }
    }
    else{
      printf("%c", c);
    }
  }
}
