// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  map<char, int> cont;
  int tc;
  string l, rd;
  
  scanf("%d\n", &tc);
  
  while(tc--){
    cont['M'] = 0;
    cont['F'] = 0;
    getline(cin, l);
    stringstream ll (l);

    while(ll >> rd){
      cont[rd[0]]++;
      cont[rd[1]]++;
    }

    if((cont['M'] == cont['F']) && (cont['M'] != 1)){
      printf("LOOP\n");
    }
    else{
      printf("NO LOOP\n");
    }
  }
}
