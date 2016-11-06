// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int t, n, s, q, qi, car, eq, cont, tot, cur;
  vector<queue<int> > vq;
  stack<int> st;
  
  scanf("%d", &t);
  while(t--){
    vq.clear();
    eq = cont = tot = 0;
  
    scanf("%d %d %d", &n, &s, &q);
    for(int i = 0; i < n; i++){
      vq.push_back(queue<int>());
      scanf("%d", &qi);
      tot += qi;
      while(qi--){
	scanf("%d", &car);
	vq[i].push(car);
      }
    }

    int i = 0;
    cur = 0;
    
    while(cur < tot){
      if(vq[i].empty()){
	eq++;
      }
      else{
	
      }
      
      while(!st.empty()){
	if(st.top() == i + 1){
	  st.pop();
	  cont++;
	  cur++;
	}
	else if(vq[i].size() < q){
	  vq[i].push(st.top());
	  st.pop();
	  cont++;
	}
	else{
	  break;
	}
      }

      while(!vq[i].empty() && st.size() < s){
	st.push(vq[i].front());
	vq[i].pop();
	cont++;
      }

      i = (i + 1) % n;
      cont += 2;
    }

    printf("%d\n", cont - 2);
  }
}
