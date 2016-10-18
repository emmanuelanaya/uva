// SOLVED

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, perm[1010], in, out;
  bool pos;
  stack<int> st;
  
  while(scanf("%d", &n) && n != 0){
    while(scanf("%d", &perm[0]) && perm[0] != 0){
      for(int i = 1; i < n; i++){
	scanf("%d", &perm[i]);
      }
      stack<int> dum;
      st.swap(dum);
      in = 1;
      out = 0;
      while(true){
	if(out < n){
	  if(st.empty() || st.top() != perm[out]){
	    if(in <= n){
	      st.push(in);
	      in++;
	    }
	    else{
	      pos = 0;
	      break;
	    }
	  }
	  else{
	    st.pop();
	    out++;
	  }
	}
	else{
	  pos = 1;
	  break;
	}
      }
      if(pos){
	printf("Yes\n");
      }
      else{
	printf("No\n");
      }
    }
    printf("\n");
  }
}
