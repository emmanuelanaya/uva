// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  bool pas[3005], t;
  int n, p, f, d;

  while(scanf("%d", &n) != EOF){
    memset(pas, false, sizeof pas);
    t = true;
    scanf("%d", &p);
    for(int i = 1; i < n; i++){
      scanf("%d", &f);
      d = abs(f - p);
      if(pas[d]){
	t = false;
      }
      else{
	pas[d] = true;
      }
      p = f;
    }

    for(int i = 1; i < n && t; i++){
      t = pas[i];
    }

    if(t){
      printf("Jolly\n");
    }
    else{
      printf("Not jolly\n");
    }
  }
}
