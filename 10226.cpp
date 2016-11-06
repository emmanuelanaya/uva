// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  map<string, int> num;

  int c;
  double t;
  string s;

  scanf("%d\n\n", &c);

  while(c--){
    num.clear();
    t = 0;
    while(getline(cin, s) && s != ""){
      num[s]++;
      t++;
    }
    for(auto p : num){
      cout << p.first;
      printf(" %.4lf\n", p.second * 100 / t);
    }
    if(c){
      printf("\n");
    }
  }
}
