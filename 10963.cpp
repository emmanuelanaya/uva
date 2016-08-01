#include <bits/stdc++.h>

using namespace std;

int main(){
  int t, w, a, b, g;
  bool p;
  
  scanf("%d", &t);

  while(t--){
    scanf("%d", &w);

    p = true;
    scanf("%d %d", &a, &b);
    g = a - b;
    w--;
    
    while(w--){
      scanf("%d %d", &a, &b);
      if(g != a - b){
	p = false;
      }
    }

    if(p){
      printf("yes");
    }
    else{
      printf("no");
    }
    if(t){
      printf("\n\n");
    }
  }
}
