// SOLVED
#include <bits/stdc++.h>
using namespace std;

int mine[310][310], m, n, dyn[310], cols[310];

int max_sum(int *a, int size){
  memset(dyn, -1, sizeof dyn);

  for(int i = 0; i < size; i++){
    dyn[i] = a[i];
    for(int j = 0; j < i - 1; j++){ 
      dyn[i] = max(dyn[i], a[i] + dyn[j]);
    }
  }

  int mx = 0;
  
  for(int i = 0; i < size; i++){
    mx = max(mx, dyn[i]);
  }

  return mx;
}

int main(){
  while(scanf("%d %d", &n, &m) != EOF){
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
  	scanf("%d", &mine[j][i]);
      }
    }

    for(int i = 0; i < m; i++){
      cols[i] = max_sum(mine[i], n);
    }

    printf("%d\n", max_sum(cols, m));
  }
}
