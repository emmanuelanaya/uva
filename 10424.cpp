// SOLVED

#include <bits/stdc++.h>

using namespace std;

double toDig(string s){
  int k = 0, sum;
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  
  for(int i = 0; i < s.size(); i++){
    if(s[i] >= 'a' && s[i] <= 'z'){
      k += s[i] - 'a' + 1;
    }
  }

  while(k % 10 != k){
    sum = 0;
    while(k != 0){
      sum += k % 10;
      k /= 10;
    }
    k = sum;
  }

  return (double) k;
}

int main(){
  string a, b;
  double mn, mx;
  
  while(getline(cin, a) && getline(cin, b)){
    mn = min(toDig(a), toDig(b));
    mx = max(toDig(a), toDig(b));
    printf("%.2lf %%\n", (mn / mx) * 100);
  }
}
