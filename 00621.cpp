// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  string s;

  scanf("%d", &n);

  while(n--){
    cin >> s;
    if(s == "1" || s == "4" || s == "78"){
      printf("+\n");
    }
    else if(s[s.size() - 2] == '3' && s[s.size() - 1] == '5'){
      printf("-\n");
    }
    else if(s[0] == '9' && s[s.size() - 1] == '4'){
      printf("*\n");
    }
    else{
      printf("?\n");
    }
  }
}
