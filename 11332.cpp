// SOLVED

#include <bits/stdc++.h>
typedef long long lli;

using namespace std;

int sumdig(lli n){
  int r = 0;
  
  while(n != 0){
    r += n % 10;
    n /= 10;
  }

  return r;
}

int main(){
  lli k;

  // printf("%d\n", 1 / 10);
  
  while(true){
    scanf("%lld", &k);

    if(k == 0) return 0;

    while(k != k % 10){
      k = sumdig(k);
    }

    printf("%lld\n", k);
  }
}
