// SOLVED

#include <bits/stdc++.h>

using namespace std;

queue<pair<int, double> > deps;

int main(){
  int dur, n, tmes, c;
  double dp, am, tdep, inval, mp;

  while(true){
    scanf("%d", &dur);
    if(dur >= 0){
      queue<pair<int, double> > empty;
      swap(empty, deps);
      
      scanf("%lf %lf %d", &dp, &am, &n);
      inval = dp + am;
      mp = am / dur;
      
      while(n--){
	scanf("%d %lf", &tmes, &tdep);
	deps.push(make_pair(tmes, tdep));
      }

      tdep = deps.front().second;
      deps.pop();
      inval *= 1 - tdep;
      c = 0;
      
      while(inval <= am){
	c++;
	if(!deps.empty() && c == deps.front().first){
	  tdep = deps.front().second;
	  deps.pop();
	}
	inval *= 1 - tdep;
	am -= mp;
	
	// printf("%lf %lf\n", inval, am);
      }

      printf("%d month", c);
      if(c != 1){
	printf("s");
      }
      printf("\n");
    }
    else return 0;
  }
}
