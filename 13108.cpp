// SOLVED
#include <bits/stdc++.h>

using namespace std;

int main(){
  int t, n;

  scanf("%d", &t);

  while(t--){
    scanf("%d", &n);
    printf("%d\n", n*(n-1)*(n-2)*(n-3)/24 + n*(n-1)/ 2 + 1);
  }
}
