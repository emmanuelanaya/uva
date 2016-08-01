// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int t, n, r;
  scanf("%d", &t);
  while(t--){
    scanf("%d", &n);
    r = (((((n * 567) / 9) + 7492) * 235) / 47) - 498;
    printf("%d\n", abs(r) % 100 / 10);
  }
}
