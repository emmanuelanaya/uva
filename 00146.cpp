// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  char s[55];

  while(scanf("%s\n", s) && s[0] != '#'){
    if(next_permutation(s, s + strlen(s))){
      printf("%s\n", s);
    }
    else{
      printf("No Successor\n");
    }
  }
}
