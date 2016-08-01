// SOLVED

#include <bits/stdc++.h>

using namespace std;

int mod(int a, int b){
  return (a % b + b) % b;
}

int main(){
  int a, b;
  while(true){
    scanf("%d %d", &a, &b);

    if(a < 0) return 0;

    printf("%d\n", (mod(a - b, 100) < mod(b - a, 100) ?
		    mod(a - b, 100) : mod(b - a, 100)));
  }
}
