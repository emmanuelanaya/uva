// SOLVED
#include <bits/stdc++.h>
using namespace std;
typedef long long lli;

int main(){
  int t;
  cin >> t;
  int c[25];
  int i, d, k;
  while(t--){
    cin >> i;
    for(int j = 0; j <= i; j++){
      cin >> c[j];
    }
    // cout << i << endl;
    cin >> d >> k;
    k--; k /= d; k++;
    int sq = ceil((sqrt(8 * k + 1) - 1) / 2);
    lli pot = 1;
    lli sum = 0;
    for(int j = 0; j <= i; j++){
      sum += c[j] * pot;
      pot *= sq;
    }

    cout << sum << '\n';
  }
}
