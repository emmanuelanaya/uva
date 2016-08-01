// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int T, n, p, r;
  string s;
  vector<int> h;
  
  scanf("%d", &T);

  while(T--){
    scanf("%d", &n);
    p = 0;
    h.clear();
    
    while(n--){
      cin >> s;
      if(s[0] == 'L'){
	p += -1;
	h.push_back(-1);
      }
      if(s[0] == 'R'){
	p += 1;
	h.push_back(1);
      }
      if(s[0] == 'S'){
        cin >> s >> r;
	p += h[r - 1];
	h.push_back(h[r - 1]);
      }
    }

    printf("%d\n", p);
  }
}
