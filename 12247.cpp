// SOLVED

#include <bits/stdc++.h>

using namespace std;

int g[5], b[5];
bool used[60];

int min(){
  if(g[0] > b[0] && g[1] > b[1]){
    return 60;
  }
  else if (g[0] < b[0] && g[1] < b[1]){
    int x = 1;
    while(used[x]){
      x++;
    }
    return x;
  }
  else{
    int x = g[2];
    while(used[x]){
      if(x == 52){
	return 60;
      }
      x++;
    }
    return x;
  }
}

int main(){  
  int best, cur;

  while(true){
    memset(g, 0, sizeof g);
    memset(b, 0, sizeof b);
    memset(used, false, sizeof used);

    scanf("%d %d %d %d %d", &g[0], &g[1], &g[2], &b[0], &b[1]);

    if(g[0] == 0) return 0;
    
    used[g[0]] = used[g[1]] = used[g[2]] = used[b[0]] = used[b[1]] = true;

    sort(g, g + 3);

    best = -1;

    do{
      cur = min();
      if(cur > best){
	best = cur;
      }
    } while(next_permutation(g, g + 3));

    if(best == 60){
      printf("-1\n");
    }
    else{
      printf("%d\n", best);
    } 
  }
}
