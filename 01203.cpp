// SOLVED

#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;

int main(){
  string l, s;
  int id, p, k;
  vector<pi> vec;
  priority_queue<pi> pq;
  while(getline(cin, l) && l != "#"){
    stringstream ss (l);
    ss >> l >> id >> p;
    vec.push_back(pi(id, p));
  }
  scanf("%d", &k);
  for(pi p : vec){
    for(int i = 1; i <= k; i++){
      pq.push(pi(p.second * i * -1, p.first * -1));
    }
  }

  while(k--){
    printf("%d\n", pq.top().second * -1);
    pq.pop();
  }
}
