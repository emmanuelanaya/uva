// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int t, n, xi, min, max;
  scanf("%d", &t);
  while(t--){
    min = 100;
    max = -1;
    scanf("%d", &n);
    while(n--){
      scanf("%d", &xi);
      if(xi < min){
	min = xi;
      }
      if(xi > max){
	max = xi;
      }
    }
    printf("%d\n", 2 * (max - min));
  }
}
