// SOLVED

#include <bits/stdc++.h>

using namespace std;

string getword(int k){
  if(k % 4 == 0){
    return "Happy";
  }
  if(k % 4 == 1){
    return "birthday";
  }
  if(k % 4 == 2){
    return "to";
  }
  if(k % 4 == 3){
    if(k % 16 == 11){
      return "Rujia";
    }
    else{
      return "you";
    }
  }
}

int main(){
  int n, r;
  string s;
  vector<string> ls;
  
  scanf("%d", &n);
  r = ceil(n / 16.0);
  
  for(int i = 0; i < n; i++){
    cin >> s;
    ls.push_back(s);
  }

  for(int i = 0; i < 16 * r; i++){
    cout << ls[i % n] << ": " << getword(i) << "\n";
  }
}
