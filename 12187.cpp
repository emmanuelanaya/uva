// SOLVED

#include <bits/stdc++.h>

using namespace std;

int n, r, c, k;
char kd[105][105], aux[105][105];

bool hates(int a, int b){
  return b == (a + 1) % n;
}

void battle(){
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      aux[i][j] = -1;
    }
  }
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      if(i - 1 >= 0 && hates(kd[i][j] ,kd[i - 1][j])){
	aux[i - 1][j] = kd[i][j];
      }
      if(j - 1 >= 0 && hates(kd[i][j] ,kd[i][j - 1])){
	aux[i][j - 1] = kd[i][j];
      }
      if(i + 1 < r && hates(kd[i][j] ,kd[i + 1][j])){
	aux[i + 1][j] = kd[i][j];
      }
      if(j + 1 < c && hates(kd[i][j] ,kd[i][j + 1])){
	aux[i][j + 1] = kd[i][j];
      }
    }
  }
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      if(aux[i][j] != -1){
	kd[i][j] = aux[i][j];
      }
    }
  }
}

int main(){
  while(scanf("%d %d %d %d", &n, &r, &c, &k) && n != 0){
    for(int i = 0; i < r; i++){
      for(int j = 0; j < c; j++){
	scanf("%d", &kd[i][j]);
      }
    }

    while(k--){
      battle();
    }

    for(int i = 0; i < r; i++){
      for(int j = 0; j < c; j++){
	printf("%d", kd[i][j]);
	if(j < c - 1){
	  printf(" ");
	}
      }
      printf("\n");
    }
  }
}
