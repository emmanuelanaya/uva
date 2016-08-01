// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  bool p[100], t;
  vector<int> a;
  int N, B, r;

  while(scanf("%d %d", &N, &B) && N != 0){
    memset(p, false, sizeof p);
    a.clear();
    scanf("%d", &r);
    a.push_back(r);
    B--;
    while(B--){
      scanf("%d", &r);
      for(auto k : a){
	p[abs(r - k)] = true;
      }
      a.push_back(r);
    }
    t = true;
    for(int i = 1; i <= N; i++){
      if(!p[i]){
	t = false;
      }
    }
    if(t){
      printf("Y\n");
    }
    else{
      printf("N\n");
    }
  }
}
