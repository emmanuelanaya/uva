// SOLVED

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, b, sg, sb, dum, bats[100010];
  priority_queue<int> gl, bl;
  
  scanf("%d", &n);
  while(n--){
    gl = priority_queue<int>();
    bl = priority_queue<int>();
    scanf("%d %d %d", &b, &sg, &sb);
    while(sg--){
      scanf("%d", &dum);
      gl.push(dum);
    }
    while(sb--){
      scanf("%d", &dum);
      bl.push(dum);
    }
    while(!gl.empty() && !bl.empty()){
      int i = 0;
      for(i = 0; i < b && !gl.empty() && !bl.empty(); i++){
	bats[i] = gl.top() - bl.top();
	gl.pop(); bl.pop();
      }
      
      for(int j = 0; j < i; j++){
	if(bats[j] > 0){
	  gl.push(bats[j]);
	}
	else if(bats[j] < 0){
	  bl.push(bats[j] * -1);
	}
      }
    }

    if(gl.empty() && bl.empty()){
      printf("green and blue died\n");
    }
    else if(gl.empty()){
      printf("blue wins\n");
      while(!bl.empty()){
	printf("%d\n", bl.top());
	bl.pop();
      }
    }
    else{
      printf("green wins\n");
      while(!gl.empty()){
	printf("%d\n", gl.top());
	gl.pop();
      }
    }

    if(n){
      printf("\n");
    }
  }
}
