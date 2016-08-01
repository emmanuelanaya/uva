// SOLVED

#include <bits/stdc++.h>

using namespace std;

int mod(int a, int b){
  return (a % b + b) % b;
}

int main(){
  int a, b, c, d;
  while(true){
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a != 0 || b != 0 || c != 0 || d != 0){
      int r = 360 * 3;
      r += (a - b != 0) ? mod(a - b, 40) * 9 : 360;
      r += (c - b != 0) ? mod(c - b, 40) * 9 : 360;
      r += (c - d != 0) ? mod(c - d, 40) * 9 : 360;
      printf("%d\n", r);
    }
    else break;
  }  
}
