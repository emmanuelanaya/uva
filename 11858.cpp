// SOLVED

#include <bits/stdc++.h>
using namespace std;
typedef long long lli;

int a[1000000];
int aux[1000000];

lli merge_count(int *p, int n){
  int m = n >> 1;
  int *q = p + m;
  
  int i, j, k;
  lli sum;
  i = j = sum = k = 0;
  while(i < m || j < n - m){
    if(j == n - m) aux[k] = p[i++];
    else if(i == m) aux[k] = q[j++];
    else if(p[i] < q[j]) aux[k] = p[i++];
    else{
      aux[k] = q[j++];
      sum += m - i;
    }
    k++;
  }

  for(i = 0; i < n; i++){
    p[i] = aux[i];
  }

  return sum;
}

lli count_inv(int *p, int n){
  if(n < 2) return 0;
  if(n == 2){
    if(p[0] < p[1]){
      return 0;
    }
    else{
      swap(p[0], p[1]);
      return 1;
    }
  }
  
  int m = n >> 1;
  lli l = count_inv(p, m);
  lli r = count_inv(p + m, n - m);
  lli s = merge_count(p, n);
  
  return l + r + s;
}

int main(){
  int n;
  while(scanf("%d", &n) != EOF){
    for(int i = 0; i < n; i++){
      scanf("%d", a + i);
    }
    printf("%lld\n", count_inv(a, n));
  }
}
