// SOLVED

#include <bits/stdc++.h>
typedef long long lli;

using namespace std;

int main(){
  int t;
  lli a, b;

  scanf("%d", &t);

  while(t--){
    scanf("%lld %lld", &a, &b);
    if(a < b){
      printf("<\n");
    }
    else if(b < a){
      printf(">\n");
    }
    else{
      printf("=\n");
    }
  }
}
