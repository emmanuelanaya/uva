// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  string r;
  int c = 1;

  while(true){
    cin >> r;
    if(r != "*"){
      printf("Case %d: ", c++);
      
      if(r == "Hajj"){
	printf("Hajj-e-Akbar\n");
      }
      else{
	printf("Hajj-e-Asghar\n");
      }
    }
    else return 0;
  }
}
