// SOLVED

#include <bits/stdc++.h>

using namespace std;

bool mines[110][110];
int m, n;

int getNei(int i, int j){
  int r = 0;

  if(i - 1 >= 0 && mines[i - 1][j]){
    r++;
  }
  if(i - 1 >= 0 && j + 1 < m && mines[i - 1][j + 1]){
    r++;
  }
  if(j + 1 < m && mines[i][j + 1]){
    r++;
  }
  if(i + 1 < n && j + 1 < m && mines[i + 1][j + 1]){
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
  int tc = 1;
  char c;
  
  while(true){
    scanf("%d %d\n", &n, &m);

    if(n == 0 && m == 0) return 0;

    if(tc != 1){
      printf("\n");
    }
    
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
	mines[i][j] = false;
	scanf("%c", &c);
	if(c == '*'){
	  mines[i][j] = true;
	}
      }
      scanf("\n");
    }

    printf("Field #%d:\n", tc);
    
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        if(mines[i][j]){
	  printf("*");
	}
	else{
	  printf("%d", getNei(i, j));
	}
      }

      printf("\n");
    }
    
    tc++;
  }
}
