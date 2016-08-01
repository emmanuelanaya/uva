// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int tc, m, n, r;
  char c;

  scanf("%d\n", &tc);

  while(tc--){
    scanf("%c %d %d\n", &c, &m, &n);

    if(c == 'r'){
      r = min(m, n);
    }
    else if(c == 'k'){
      r = ceil(m * n / 2.0);
    }
    else if(c == 'Q'){
      r = min(m, n);
    }
    else{
      r = ceil(m / 2.0) * ceil(n / 2.0);
    }

    printf("%d\n", r);
  }
}
