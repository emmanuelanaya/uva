// SOLVED

#include <bits/stdc++.h>
using namespace std;

int main(){
  int t, e, v, a, c, dum;
  string s;
  bitset<30> bs;
  scanf("%d\n", &t);
  while(t--){
    e = v = a = 0;
    bs.reset();
    while(getline(cin, s) && s[0] != '*'){
      e++;
      bs[s[1] - 'A'] = 1;
      bs[s[3] - 'A'] = 1;
    }
    dum = 0;
    while(dum != '\n'){
      scanf("%c", &c);
      if(!bs[c - 'A']) a++;
      v++;
      scanf("%c", &dum);
    }

    printf("There are %d tree(s) and %d acorn(s).\n", v - e - a, a);
  }
}
