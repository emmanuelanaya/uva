// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int tc = 0, n, p, br, r;
  double bp, d;
  string dum, bn, pr;
  
  while(++tc){
    scanf("%d %d\n", &n, &p);

    if(n == 0 && p == 0) return 0;

    if(tc != 1){
      printf("\n");
    }
    
    while(n--){
      getline(cin, dum);  
    }
    
    getline(cin, bn);
    scanf("%lf %d\n", &bp, &br);
    for(int i = 0; i < br; i++){
      getline(cin, dum);
    }
    p--;

    while(p--){
      getline(cin, pr);
      scanf("%lf %d\n", &d, &r);
      if(r > br || (r == br && d < bp)){
	bn = pr;
	bp = d;
	br = r;
      }
      while(r--){
	getline(cin, dum);
      }
    }

    printf("RFP #%d\n", tc);
    cout << bn << endl;
  }
}
