// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int t, s[5];
  scanf("%d", &t);

  for(int i = 1; i <= t; i++){
    for(int j = 0; j < 3; j++){
      scanf("%d", &s[j]);
    }
    sort(s, s + 3);
    printf("Case %d: %d\n", i, s[1]);
  }
}
