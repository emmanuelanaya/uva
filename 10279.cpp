// SOLVED

#include <bits/stdc++.h>

using namespace std;

bool mines[15][15];
int num[15][15], n;
char tou[15][15];

int getNei(int i, int j){
  int r = 0;

  if(i - 1 >= 0 && mines[i - 1][j]){
    r++;
  }
  if(i - 1 >= 0 && j + 1 < n && mines[i - 1][j + 1]){
    r++;
  }
  if(j + 1 < n && mines[i][j + 1]){
    r++;
  }
  if(i + 1 < n && j + 1 < n && mines[i + 1][j + 1]){
    r++;
  }
  if(i + 1 < n && mines[i + 1][j]){
    r++;
  }
  if(i + 1 < n && j - 1 >= 0 && mines[i + 1][j - 1]){
    r++;
  }
  if(j - 1 >= 0 && mines[i][j - 1]){
    r++;
  }
  if(i - 1 >= 0 && j - 1 >= 0 && mines[i - 1][j - 1]){
    r++;
  }

  return r;
}

int main(){
  int k;
  char c;
  bool l;

  scanf("%d", &k);

  for(int h = 0; h < k; h++){
    if(h != 0){
      printf("\n");
    }

    scanf("%d\n", &n);

    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
	mines[i][j] = false;
	scanf("%c", &c);
	if(c == '*'){
	  mines[i][j] = true;
	}
      }
      scanf("\n");
    }

    l = false;

    for(int i  = 0; i < n; i++){
      for(int j = 0; j < n; j++){
	scanf("%c", &tou[i][j]);
	if(tou[i][j] == 'x' && mines[i][j]){
	  l = true;
	}
      }
      scanf("\n");
    }
    
    for(int i  = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        if(tou[i][j] == 'x'){
    	  if(mines[i][j]){
    	    printf("*");
    	  }
    	  else{
    	    printf("%d", getNei(i, j));
    	  }
    	}
    	else{
    	  if(l && mines[i][j]){
    	    printf("*");
    	  }
    	  else{
    	    printf(".");
    	  }
    	}
      }
      printf("\n");
    }
  }
}
