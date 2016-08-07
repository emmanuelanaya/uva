// SOLVED

#include <bits/stdc++.h>
#define MAX 500		       

using namespace std;

int N, n;
char bs[MAX][MAX], ss[MAX][MAX], aux[MAX][MAX];

void rota(){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      aux[i][j] = ss[n - j - 1][i];
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      ss[i][j] = aux[i][j];
    }
  }
}

int matches(int a, int b){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(bs[a + i][b + j] != ss[i][j]){
	return 0;
      }
    }
  }

  return 1;
}

int numAp(){
  int d = N - n + 1;
  int num = 0;

  for(int i = 0; i < d; i++){
    for(int j = 0; j < d; j++){
      num += matches(i, j);
    }
  }

  return num;
}

int main(){  
  while(scanf("%d %d\n", &N, &n) && N != 0){
    for(int i = 0; i < N; i++){
      for(int j = 0; j < N; j++){
	scanf("%c", &bs[i][j]);
      }
      scanf("\n");
    }

    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
	scanf("%c", &ss[i][j]);
      }
      scanf("\n");
    }

    for(int i = 0; i < 4; i++){
      printf("%d", numAp());
      if(i < 3){
	printf(" ");
	rota();
      }
    }
    printf("\n");
  }
}
