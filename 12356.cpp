// SOLVED

#include <bits/stdc++.h>

int main(){
  long int s, b, l, r, vecl, vecr;
  long int bud[100020][2];

  while(true){
    scanf("%ld %ld", &s, &b);
    if(s != 0 || b != 0){
      for(int i = 1; i <= s; i++){
	bud[i][0] = i - 1;
	bud[i][1] = i + 1;
      }
      bud[s][1] = 0;

      for(int i = 0; i < b; i++){
	scanf("%ld %ld", &l, &r);
	vecl = bud[l][0];
	vecr = bud[r][1];
	if(vecl == 0 || vecr == 0){
	  if(vecl == 0 && vecr == 0)
	    printf("* *\n");
	  else if(vecl == 0)
	    printf("* %ld\n", vecr);
	  else
	    printf("%ld *\n", vecl);
	}
	else
	  printf("%ld %ld\n", bud[l][0], bud[r][1]);

	bud[vecl][1] = vecr;
	bud[vecr][0] = vecl;
      }

      printf("-\n");
    }
    else break;
  }
}
