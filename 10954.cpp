// SOLVED

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k, a, b, t;
  priority_queue<int> pq;
  while(scanf("%d", &n) && n){
    pq = priority_queue<int>();
    while(n--){
      scanf("%d", &k);
      pq.push(k * -1);
    }
    t = 0;
    while(pq.size() > 1){
      a = pq.top(); pq.pop();
      b = pq.top(); pq.pop();
      t += a + b;
      pq.push(a + b);
    }

    printf("%d\n", t * -1);
  }
}
