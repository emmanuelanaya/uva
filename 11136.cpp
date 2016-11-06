// SOLVED

#include <bits/stdc++.h>
using namespace std;
typedef long long lli;

int main(){
  int n, k, dum;
  multiset<int> urn;
  lli t;

  while(scanf("%d", &n) && n){
    urn.clear();
    t = 0;
    while(n--){
      scanf("%d", &k);
      while(k--){
	scanf("%d", &dum);
	urn.insert(dum);
      }
      t += *urn.rbegin() - *urn.begin();
      urn.erase(urn.begin());
      urn.erase(--urn.end()); 
    }

    printf("%lld\n", t);
  }
}
