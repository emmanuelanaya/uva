// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int r, l, m;
  char word[1000], guess[1000];
  bool w[30], g[30], eq;
  
  while(true){
    scanf("%d", &r);

    if(r == -1) return 0;
    
    scanf("%s\n%s\n", word, guess);
    memset(w, false, sizeof w);
    memset(g, false, sizeof g);

    l = strlen(word);
    
    for(int i = 0; i < l; i++){
      w[word[i] - 'a'] = true;
    }

    l = strlen(guess);
    m = 0;
    
    for(int i = 0; i < l && m < 7; i++){
      if(!w[guess[i] - 'a'] && !g[guess[i] - 'a']){
	m++;
      }
      g[guess[i] - 'a'] = true;
    }

    eq = true;
    for(int i = 0; i < 30; i++){
      if(w[i] && !g[i]){
	eq = false;
	break;
      }
    }
    
    printf("Round %d\n", r);
    
    if(eq){
      printf("You win.\n");
    }
    else if(m == 7){
      printf("You lose.\n");
    }
    else{
      printf("You chickened out.\n");
    }
  }  
}
