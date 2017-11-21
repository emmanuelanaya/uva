// SOLVED

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  bool fst = false;
  while(cin >> n && n){
    if(fst){
      printf("\n");
    }
    fst = true;
    bool si = false;
    for(int i = 1234; i < 98765; i++){
      int k = n * i;
      if(k > 98765) break;
      int temp = i < 10000, aux;
      aux = i;
      while(aux){
	temp |= 1 << (aux % 10);
	aux /= 10;
      }
      aux = k;
      while(aux){
	temp |= 1 << (aux % 10);
	aux /= 10;
      }

      if(temp == (1 << 10) - 1){
	printf("%.5d / %.5d = %d\n", k, i, n);
	si = true;
      }
    }
    if(!si) printf("There are no solutions for %d.\n", n);
    // printf("\n");
  }
}
