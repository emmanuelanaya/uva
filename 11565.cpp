#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, a, b, c;
  scanf("%d", &n);

  while(n--){
    scanf("%d %d %d", &a, &b, &c);
    int k = (int)sqrt(c);
    bool fnd = 0;
    for(int x = -k; x * x <= c && !fnd; x++){
      for(int y = x + 1; y * y + x * x <= c && !fnd; y++){
	int z2 = c - (x * x + y * y);
	int z = (int)sqrt(z2);
	if(z > y && x * x + y * y + z * z == c && x + y + z == a &&
	   x * y * z == b){
	  printf("%d %d %d\n", x, y, z);
	  fnd = 1;
	}
      }
    }
    if(!fnd) printf("No solution.\n");
  }
}
