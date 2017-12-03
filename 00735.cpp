// SOLVED

#include <bits/stdc++.h>
using namespace std;

int com[1010], per[1010];

void init(){
  set<int> s;
  for(int i = 0; i <= 20; i++){
    s.insert(i);
    s.insert(i * 2);
    s.insert(i * 3);
  }
  s.insert(50);

  for(auto i = s.begin(); i != s.end(); i++){
    for(auto j = s.begin(); j != s.end(); j++){
      for(auto k = s.begin(); k != s.end(); k++){
	per[*i + *j + *k]++;
	if(*i <= *j && *j <= *k)
	  com[*i + *j + *k]++;
      }
    }
  }
}

int main(){
  init();
  int n;

  while(cin >> n){
    if(n <= 0){
      printf("END OF OUTPUT\n");
      return 0;
    }
    if(per[n] == 0)
      printf("THE SCORE OF %d CANNOT BE MADE WITH THREE DARTS.\n", n);
    else{
      printf("NUMBER OF COMBINATIONS THAT SCORES %d IS %d.\n", n, com[n]);
      printf("NUMBER OF PERMUTATIONS THAT SCORES %d IS %d.\n", n, per[n]);
    }
    printf("**********************************************************************\n");
  }
}
