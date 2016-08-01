// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int g, h, l;
  char a1[10], a2[10];
  
  while(scanf("%d", &g) && g){
    h = 11;
    l = 0;

    while(scanf("%s %s", a1, a2) && strcmp(a1, "right")){
      if(!strcmp(a2, "high") && g <= h){
	h = g - 1;
      }
      else if(!strcmp(a2, "low") && g >= l){
	l = g + 1;
      }
      scanf("%d", &g);
    }

    if(g < l || g > h || h < l){
      printf("Stan is dishonest\n");
    }
    else{
      printf("Stan may be honest\n");
    }
  }
}
