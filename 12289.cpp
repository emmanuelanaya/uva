// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  string s;

  scanf("%d", &n);
  while(n--){
    cin >> s;
    if(s.size() == 5){
      printf("3\n");
    }
    else if((s[0] == 'o' && s[1] == 'n') ||
	    (s[0] == 'o' && s[2] == 'e') ||
	    (s[1] == 'n' && s[2] == 'e')){
      printf("1\n");
    }
    else{
      printf("2\n");
    }
  }
}
