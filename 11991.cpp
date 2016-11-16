// SOLVED

#include <bits/stdc++.h>
using namespace std;

int main(){
  map<int, vector<int> > occ;
  int n, m, k, v, d;

  while(scanf("%d %d", &n, &m) != EOF){
    occ.clear();
    for(int i = 1; i <= n; i++){
      scanf("%d", &d);
      occ[d].push_back(i);
    }
    while(m--){
      scanf("%d %d", &k, &v);
      k--;
      if(!occ.count(v) || k >= occ[v].size()){
	printf("0\n");
      }
      else{
	printf("%d\n", occ[v][k]);
      }
    }
  }
}
