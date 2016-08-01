// SOLVED

#include <bits/stdc++.h>

using namespace std;

vector<char> suits {'C', 'D', 'S', 'H'};
vector<char> num {'2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};

bool sortBy(string a, string b){
  if(a[0] != b[0]){
    return find(suits.begin(), suits.end(), a[0]) < find(suits.begin(), suits.end(), b[0]);
  }
  else{
    return find(num.begin(), num.end(), a[1]) < find(num.begin(), num.end(), b[1]);
  }
}

int main(){
  vector<char> plyr {'N', 'E', 'S', 'W'};
  map<char, vector<string> > hands;
  int t;
  char r1, r2, c[5];
  string rd;

  while(true){
    scanf("%c\n", &r1);

    if(r1 == '#') return 0;

    hands.clear();
    t = find(plyr.begin(), plyr.end(), r1) - plyr.begin();
    t = (t + 1) % 4;
    
    for(int i = 0; i < 26; i++){
      scanf("%2s", c);
      rd = string(c);
      hands[plyr[t]].push_back(rd);
      t = (t + 1) % 4;
    }

    scanf("\n");

    for(int i = 0; i < 26; i++){
      scanf("%2s", c);
      rd = string(c);
      hands[plyr[t]].push_back(rd);
      t = (t + 1) % 4;
    }

    scanf("\n");
    
    t = 2;

    for(int i = 0; i < 4; i++){
      printf("%c:", plyr[t]);
      sort(hands[plyr[t]].begin(), hands[plyr[t]].end(), sortBy);
      for(auto cad : hands[plyr[t]]){
	cout << " " << cad;
      }
      printf("\n");
    
      t = (t + 1) % 4;
    }
  }
}
