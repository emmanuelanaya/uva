// SOLVED

#include <bits/stdc++.h>

using namespace std;


bool isStopped(set<char> suit){
  if(suit.count('A') > 0 ||
     (suit.count('K') > 0 && suit.size() > 1) ||
     (suit.count('Q') > 0 && suit.size() > 2)){
    return true;
  }
  else{
    return false;
  }
}

int main(){
  vector<string> hand;
  map<char, set<char> > suits;
  vector<char> ls {'S', 'H', 'D', 'C'};
  string l, s;
  int p;

  while(getline(cin, l)){
    hand.clear();
    suits.clear();
    stringstream ll (l);
    p = 0;
    for(int i = 0; i < 13; i++){
      ll >> s;
      if(s[0] == 'A'){
	p += 4;
      }
      else if(s[0] == 'K'){
	p += 3;
      }
      else if(s[0] == 'Q'){
	p += 2;
      }
      else if(s[0] == 'J'){
	p++;
      }
      suits[s[1]].insert(s[0]);
      hand.push_back(s);
    }
    for(int i = 0; i < 13; i++){
      if(hand[i][0] == 'K' && suits[hand[i][1]].size() == 1){
	p--;
      }
      if(hand[i][0] == 'Q' && suits[hand[i][1]].size() <= 2){
	p--;
      }
      if(hand[i][0] == 'J' && suits[hand[i][1]].size() <= 3){
	p--;
      }
    }
    
    if(p >= 16 && isStopped(suits['S']) && isStopped(suits['H']) &&
       isStopped(suits['D']) && isStopped(suits['C'])){
      printf("BID NO-TRUMP\n");
      continue;
    }

    for(auto k : ls){
      if(suits[k].size() == 2){
	p++;
      }
      else if(suits[k].size() < 2){
	p += 2;
      }
    }

    if(p >= 14){
      char max = 'S';
      int mxsi = suits['S'].size();

      for(auto f : ls){
	if(suits[f].size() > mxsi){
	  mxsi = suits[f].size();
	  max = f;
	}
      }

      printf("BID %c\n", max);
    }
    else{
      printf("PASS\n");
    }
  }
}
