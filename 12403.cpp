// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int t, a, s = 0;
  char o[10];

  scanf("%d", &t);
  while(t--){
    scanf("%s", o);
    if(o[0] == 'd'){
      scanf("%d", &a);
      s += a;
    }
    else{
      printf("%d\n", s);
    }
  }
}
