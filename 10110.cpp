// SOLVED

#include <bits/stdc++.h>
using namespace std;

typedef long long lli;

int main(){
  lli n;
  while(scanf("%lld", &n) && n){
    if(pow(floor(sqrt(n)), 2) == n)
      printf("yes\n");
    else
      printf("no\n");
  }
}
