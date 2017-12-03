// SOLVED

#include <bits/stdc++.h>
using namespace std;

int main(){
  int k;
  vector<pair<int, int>> vc;
  while(cin >> k){
    vc.clear();
    for(int i = k + 1; i <= (k<<1); i++)
      if((k * i) % (i - k) == 0)
	vc.push_back(make_pair((k * i) / (i - k), i));
    printf("%d\n", (int)vc.size());
    for(auto p : vc)
      printf("1/%d = 1/%d + 1/%d\n", k, p.first, p.second);
  }
}
