// SOLVED

#include <bits/stdc++.h>
using namespace std;
typedef long long lli;

int main(){
  map<lli, int> mp;
  int mx, n, co[7], num;
  lli r;

  while(scanf("%d", &n) && n){
    mp.clear();
    mx = 0;
    while(n--){
      for(int i = 0; i < 5; i++){
	scanf("%d", co + i);
      }
      sort(co, co + 5);
      r = co[0];
      for(int i = 1; i < 5; i++){
	r *= 1000;
	r += co[i];
      }
      mp[r]++;
      mx = max(mx, mp[r]);
    }

    num = 0;
    for(auto p : mp){
      if(p.second == mx){
	num += mx;
      }
    }
    printf("%d\n", num);
  }
}
