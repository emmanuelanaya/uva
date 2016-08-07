// SOLVED

#include <bits/stdc++.h>

using namespace std;

bitset<1030> seen;
int grid[3][3], aux[3][3];

void trans(){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      aux[i][j] = 0;
      if(i - 1 >= 0){
	aux[i][j] += grid[i - 1][j]; 
      }
      if(j - 1 >= 0){
	aux[i][j] += grid[i][j - 1]; 
      }
      if(i + 1 < 3){
	aux[i][j] += grid[i + 1][j]; 
      }
      if(j + 1 < 3){
	aux[i][j] += grid[i][j + 1]; 
      }

      aux[i][j] %= 2;
    }
  }

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      grid[i][j] = aux[i][j];
    }
  }
}

int toInt(){
  int num = 0;
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(grid[i][j]) num++;
      num <<= 1;
    }
  }

  return num;
}

int main(){
  int tc, k, in;
  char c;

  scanf("%d", &tc);
  
  while(tc--){
    scanf("\n");
    seen.reset();
    
    for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
	scanf("%c", &c);
	grid[i][j] = c - '0';
      }
      scanf("\n");
    }

    k = -2;
    in = toInt();
    // printf("%d\n", in);
    
    while(!seen[in]){
      seen[in] = true;
      trans();
      in = toInt();
      k++;
    }

    printf("%d\n", k);
  }
}
