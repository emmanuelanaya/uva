#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m, q, ar[1010];
  set<int> st;
  int c = 1;
  while(scanf("%d", &n) && n){
    st.clear();
    for(int i = 0; i < n; i++){
      scanf("%d", &ar[i]);
    }
    for(int i = 1; i < n; i++){
      for(int j = 0; j < i; j++){
	st.insert(ar[i] + ar[j]);
      }
    }

    // for(auto w : st) cout << w << ' ';

    printf("Case %d:\n", c);
    cin >> m;
    while(m--){
      cin >> q;
      int res;
      auto it = st.lower_bound(q);
      if(it == st.end()) res = *(st.rbegin());
      else if(it == st.begin()) res = *it;
      else{
	int u = *it; it--;
	int l = *it;
	res = u - q < q - l ? u : l;
      }

      printf("Closest sum to %d is %d.\n", q, res);
    }

    c++;
  }
}
