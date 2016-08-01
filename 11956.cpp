// SOLVED

#include <bits/stdc++.h>

using namespace std;

int mod(int a, int b){
  return (a % b + b) % b;
}

int main(){
  int mem[110], T, size, p;
  char l[100010], ins;

  scanf("%d", &T);
  for(int i = 1; i <= T; i++){
    memset(mem, 0, sizeof mem);
    p = 0;
    
    scanf("%s", l);
    size = strlen(l);

    for(int j = 0; j < size; j++){
      ins = l[j];
      if(ins == '>'){
	p = mod(p + 1, 100);
      }
      if(ins == '<'){
	p = mod(p - 1, 100);
      }
      if(ins == '+'){
	mem[p] = mod(mem[p] + 1, 256);
      }
      if(ins == '-'){
	mem[p] = mod(mem[p] - 1, 256);
      }
    }

    printf("Case %d:", i);
    for(int j = 0; j < 100; j++){
      printf(" %02X", mem[j]);
    }
    printf("\n");
  }
}
