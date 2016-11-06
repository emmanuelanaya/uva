// SOLVED

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, a, b, s, q, pq;
  queue<int> qs;
  stack<int> ss;
  priority_queue<int> pqs;
  while(scanf("%d", &n) != EOF){
    qs = queue<int>();
    ss = stack<int>();
    pqs = priority_queue<int>();
    s = q = pq = 1;
    
    while(n--){
      scanf("%d %d", &a, &b);
      if(a == 1){
	qs.push(b);
	ss.push(b);
	pqs.push(b);
      }
      else{
	if(!ss.empty() && ss.top() == b) ss.pop(); else s = 0;	
	if(!qs.empty() && qs.front() == b) qs.pop(); else q = 0;
	if(!pqs.empty() && pqs.top() == b) pqs.pop(); else pq = 0;
      }
    }

    if(s + q + pq == 1){
      if(s){
	printf("stack\n");
      }
      else if(q){
	printf("queue\n");
      }
      else{
	printf("priority queue\n");
      }
    }
    else if(s + q + pq == 0){
      printf("impossible\n");
    }
    else{
      printf("not sure\n");
    }
  }
}
