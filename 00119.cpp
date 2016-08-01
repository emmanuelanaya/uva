// SOLVED

#include <bits/stdc++.h>

using namespace std;

map<string, int> pers;
vector<string> ord;

int main(){
  int n, m, f;
  string p, g;
  bool cont = false;

  while(scanf("%d", &n) != EOF){

    if(cont){
      cout << "\n";
    }
    cont = true;
    
    pers.clear();
    ord.clear();
    
    for(int i = 0; i < n; i++){
      cin >> p;
      pers[p] = 0;
      ord.push_back(p);
    }

    for(int i = 0; i < n; i++){
      cin >> p >> m >> f;
      for(int j = 0; j < f; j++){
	cin >> g;
	pers[g] += m / f;
      }
      pers[p] -= m;
      pers[p] += f != 0 ? m % f : m;
    }
    
    for(int i = 0; i < n; i++){
      cout << ord[i] << " " << pers[ord[i]] << "\n";
    }
  }
}
