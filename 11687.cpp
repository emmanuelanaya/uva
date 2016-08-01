// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, c;
  string r;
  
  while(true){
    cin >> r;

    if(r == "END") return 0;

    if(r != "1"){
      n = r.size();
      c = 2; 
      while(n != 1){
	n = floor(log10(n) + 1);
	c++;
      }
      printf("%d\n", c);
    }
    else{
      printf("1\n");
    }
  }
}
