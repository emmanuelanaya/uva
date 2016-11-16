// SOLVED

#include <bits/stdc++.h>
using namespace std;

int p[10010];

int find(int x){return x == p[x] ? x : p[x] = find(p[x]);}
void unite(int x, int y){p[find(x)] = find(y);}

int main(){
  int t, n, a, b, suc, tot;
  char c;
  string s;
  scanf("%d", &t);
  while(t--){
    scanf("%d\n", &n);
    for(int i = 1; i <= n; i++){
      p[i] = i;
    }
    suc = tot = 0;
    while(getline(cin, s) && s != ""){
      stringstream ss(s);
      ss >> c >> a >> b;
      if(c == 'c'){
	unite(a, b);
      }
      else{
	tot++;
	suc += find(a) == find(b);
      }
    }
    printf("%d,%d\n", suc, tot - suc);
    if(t) printf("\n");
  }
}
