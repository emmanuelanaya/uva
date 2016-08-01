// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int T, M, o, P, req[6] = {56, 51, 41, 36};
  double p;
  string l, r;
  
  scanf("%d\n", &T);
  for(int i = 1; i <= T; i++){
    o = p = 0;
    scanf("%d\n", &M);
    while(M--){
      getline(cin, l);

      if(l == "fool" || l == "one of trumps" ||
	 l == "twenty-one of trumps"){
	o++;
	p += 4.5;
      }
      else{
	stringstream ll (l);
	ll >> r;
	if(r == "king"){
	  p += 4.5;
	}
	else if(r == "queen"){
	  p += 3.5;
	}
	else if(r == "knight"){
	  p += 2.5;
	}
	else if(r == "jack"){
	  p += 1.5;
	}
	else{
	  p += .5;
	}
      }

    }

    P = round(p);

    P -= req[o];

    if(i != 1){
      printf("\n");
    }
    printf("Hand #%d\n", i);
    printf("Game ");
    printf(P >= 0 ? "won " : "lost ");
    printf("by %d point(s).\n", abs(P));
  }
}
