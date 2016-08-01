// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  set<int> al, be;
  int A, B, r;
  
  while(true){
    al.clear();
    be.clear();
    scanf("%d %d", &A, &B);

    if(A == 0) return 0;

    while(A--){
      scanf("%d", &r);
      al.insert(r);
    }

    while(B--){
      scanf("%d", &r);
      be.insert(r);
    }

    A = B = 0;
    
    for(auto k : al){
      if(be.count(k) == 0){
	A++;
      }
    }

    for(auto k : be){
      if(al.count(k) == 0){
	B++;
      }
    }

    printf("%d\n", min(A, B));
  }
}
