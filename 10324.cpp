// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  int n, i, j, tc = 0;
  char c;
  bool ans;
  
  while(cin >> s){
    ++tc;
    scanf("%d", &n);
    printf("Case %d:\n", tc);
    
    while(n--){
      ans = true;
      scanf("%d %d", &i, &j);
      c = s[min(i, j)];
      for(int k = min(i, j); k <= max(i, j); k++){
	if(s[k] != c){
	  ans = false;
	  break;
	}
      }

      if(ans){
	printf("Yes\n");
      }
      else{
	printf("No\n");
      }
    }
  }
}
