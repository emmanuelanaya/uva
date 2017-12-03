// SOLVED

#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

vector<pii> un, tr;
int b[10010][10010];

int dist(pii a, pii b){
  return abs(a.first - b.first) +
    abs(a.second - b.second);
}

int main(){
  int m;
  char dum;
  
  while(cin >> m){
    un.clear();
    tr.clear();
    for(int i = 0; i < m; i++){
      for(int j = 0; j < m; j++){
	cin >> dum;
	if(dum == '1') un.push_back(make_pair(i, j));
	if(dum == '3') tr.push_back(make_pair(i, j));
      }
    }
    int mx = -1;
    for(auto p : un){
      int mn = INT_MAX;
      for(auto q : tr){
	mn = min(mn, dist(p, q));
      }
      mx = max(mx, mn);
    }

    cout << mx << endl;
  }
}
