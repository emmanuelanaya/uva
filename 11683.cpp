// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  long int a, c, aux1, aux2;

  while(true){

    scanf("%ld %ld", &a, &c);

    if(a != 0 && c != 0){

      long int cont = 0;

      aux1 = a;

      for(int i = 1; i <= c; i++){
	scanf("%ld", &aux2);

	if(aux2 < aux1){
	  cont += aux1 - aux2;
	}

	aux1 = aux2;
      }

      printf("%ld\n", cont);
    }
    else break;
  }
}
