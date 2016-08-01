// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, p, t, f, s;
  
  scanf("%d", &t);

  while(t--){
    s = 0;
    scanf("%d", &f);
    while(f--){
      scanf("%d %*d %d", &a, &p);
      s += a * p;
    }
    printf("%d\n", s);
  }
}
