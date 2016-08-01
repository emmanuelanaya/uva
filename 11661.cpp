// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int L, min, inlst;
  char c, lst;

  while(true){
    scanf("%d\n", &L);

    if(L == 0) return 0;

    lst = 0;
    min = L + 1;
    
    for(int i = 0; i < L; i++){
      scanf("%c", &c);
      // cout << lst << " ";
      if(c == 'Z'){
	min = 0;
      }
      else if(lst == 0 && (c == 'R' || c == 'D')){
	lst = c;
	inlst = i;
      }
      else if(lst == 'R'){
	if(c == 'R' || c == 'D'){
	  if(c == 'D'){
	    lst = 'D';
	    min = (i - inlst < min) ? i - inlst : min;
	  }
	  inlst = i;
	}
      }
      else{
	if(c == 'R' || c == 'D'){
	  if(c == 'R'){
	    lst = 'R';
	    min = (i - inlst < min) ? i - inlst : min;
	  }
	  inlst = i;
	}
      }
    }
    // cout << endl;
    printf("%d\n", min);
  }
}
