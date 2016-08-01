// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int k, t, b, e, w, n, s, aux;
  string r;
  
  while(true){
    scanf("%d", &k);
    
    if(k == 0) return 0;

    t = 1;
    n = 2;
    w = 3;
    e = 4;
    s = 5;
    b = 6;
    
    while(k--){
      cin >> r;
      switch(r[0]){
      case 'n':
	aux = t;
	t = s;
	s = b;
	b = n;
	n = aux;
	break;
      case 's':
	aux = t;
	t = n;
	n = b;
	b = s;
	s = aux;
	break;
      case 'e':
	aux = t;
	t = w;
	w = b;
	b = e;
	e = aux;
	break;
      case 'w':
	aux = t;
	t = e;
	e = b;
	b = w;
	w = aux;
	break;
      }
    }

    printf("%d\n", t);
  }
}
