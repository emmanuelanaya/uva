// SOLVED

#include <bits/stdc++.h>
using namespace std;

map<int, int> ind;

int main(){
  int t, n, cur;
  vector<int> snows;
  scanf("%d", &t);
  while(t--){
    snows.clear();
    ind.clear();
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
      scanf("%d", &cur);
      snows.push_back(cur);
    }
    int back = 0, mx = 0, size = 0;
    for(int i = 0; i < n; i++){
      while(ind.count(snows[i]) != 0){
	ind.erase(snows[back]);
	back++;
	size--;
      }
      ind[snows[i]] = i;
      size++;
      mx = max(size, mx);
	
    }

    cout << mx << endl;
  }
}
