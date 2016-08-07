// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int we[17000], pot[17000], n, ver, sum, mx;

  while(scanf("%d", &n) != EOF){
    ver = pow(2, n);
    for(int i = 0; i < ver; i++){
      scanf("%d", &we[i]);
    }
    for(int i = 0; i < ver; i++){
      sum = 0;
      for(int j = 0; j < n; j++){
	sum += we[i ^ (1 << j)];
      }
      pot[i] = sum;
    }
    mx = 0;
    for(int i = 0; i < ver; i++){
      for(int j = 0; j < n; j++){
	mx = max(mx, pot[i] + pot[i ^ (1 << j)]);
      }
    }

    printf("%d\n", mx);
  }
}
