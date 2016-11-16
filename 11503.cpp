// SOLVED

#include <bits/stdc++.h>
#define MAX 100000
using namespace std;

int p[MAX + 10];
int size[MAX + 10];

int find(int x){return x == p[x] ? x : p[x] = find(p[x]);}
void unite(int x, int y){
  if(find(x) != find(y)){
    size[find(y)] += size[find(x)];
  } 
  p[find(x)] = find(y);
}

int main(){
  int t, f, pe;
  string a, b;
  scanf("%d\n", &t);
  map<string, int> ind;
  while(t--){
    pe = 0;
    ind.clear();
    for(int i = 0; i < MAX; i++){
      p[i] = i;
      size[i] = 1;
    }
    
    scanf("%d\n", &f);
    while(f--){
      cin >> a >> b;
      if(!ind.count(a)){
	ind[a] = pe; pe++;
      }
      if(!ind.count(b)){
	ind[b] = pe; pe++;
      }
      unite(ind[a], ind[b]);
      printf("%d\n", size[find(ind[a])]);
    }
  }
}
