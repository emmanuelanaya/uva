// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  string w;
  vector<string> ls;
  int T, rmax, r;

  scanf("%d", &T);
  for(int j = 1; j <= T; j++){
    rmax = 0;
    ls.clear();
    for(int i = 0; i < 10; i++){
      cin >> w >> r;
      if(r == rmax){
	ls.push_back(w);
      }
      if(r > rmax){
	rmax = r;
	ls.clear();
	ls.push_back(w);
      }
    }

    printf("Case #%d:\n", j);
    for(auto s : ls){
      cout << s << "\n";
    }
  }
}
