// SOLVED

#include <bits/stdc++.h>
using namespace std;

int n, m, aw[30], t;
string ini;
vector<vector<int> > ady;

bool process(){
  queue<int> q, p;
  int on = 3;
  memset(aw, 0, sizeof aw);
  t = 0;
  for(auto c : ini){
    q.push(c - 'A');
    aw[c - 'A'] = 3;
  }
  int cur;

  while(!q.empty()){
    p = queue<int>();
    while(!q.empty()){
      cur = q.front(); q.pop();
      for(int k : ady[cur]){
	aw[k]++;
	if(aw[k] == 3){
	  p.push(k);
	  on++;
	}
      }
    }
    q.swap(p);
    t++;
  }

  return on == n;
}

int main(){
  int a, b;
  string dum;
  while(scanf("%d", &n) != EOF){
    ady.clear();
    for(int i = 0; i < 30; i++){
      ady.push_back(vector<int>());
    }
    scanf("%d\n", &m);
    getline(cin, ini);
    while(m--){
      getline(cin, dum);
      a = dum[0], b = dum[1];
      a -= 'A'; b -= 'A';
      ady[a].push_back(b);
      ady[b].push_back(a);
    }

    if(process()){
      printf("WAKE UP IN, %d, YEARS\n", t - 1);
    }
    else{
      printf("THIS BRAIN NEVER WAKES UP\n");
    }
  }
}
