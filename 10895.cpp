// SOLVED

#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int main(){
  int m, n, r, p;
  vector<vector<pii> > vec;
  int pos[10000];
  while(scanf("%d %d", &m, &n) != EOF){
    vec = vector<vector<pii> >(n + 10);
    for(int j = 0; j < m; j++){
      scanf("%d", &r);
      for(int i = 0; i < r; i++){
	scanf("%d", &p);
	p--;
	pos[i] = p;
      }
      for(int i = 0; i < r; i++){
	scanf("%d", &p);
	vec[pos[i]].push_back(pii(j, p));
      }
    }

    printf("%d %d\n", n, m);
    for(int i = 0; i < n; i++){
      printf("%d", vec[i].size());
      for(auto p : vec[i]){
	printf(" %d", p.first + 1);
      }
      printf("\n");
      for(auto p : vec[i]){
	if(p != *vec[i].begin()){
	  printf(" ");
	}
	printf("%d", p.second);
      }
      printf("\n");
    }
  }
}
