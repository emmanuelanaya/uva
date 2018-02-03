// SOLVED

#include <bits/stdc++.h>
using namespace std;
typedef long long lli;

lli sums[2000000];

int main(){
  lli t, n, p, ns[100];

  cin >> t;
  sums[0] = 0;
  while(t--){
    cin >> n >> p;
    for(int i = 0; i < p; i++){
      cin >> sums[1 << i];
    }
    bool y = 0;
    for(int i = 0; i < 1 << p; i++){
      int k = i & -i;
      sums[i] = sums[k] + sums[i - k];
      if(sums[i] == n){
	y = 1;
	break;
      }
    }
    if(y) cout << "YES\n";
    else cout << "NO\n";
  }
}
