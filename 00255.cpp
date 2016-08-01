// SOLVED

#include <bits/stdc++.h>

using namespace std;

int k, q, m;
set<int> lk, lq, diff;

void getLK(){
  lk.clear();
  if(k - 8 >= 0 && k - 8 != q){
    lk.insert(k - 8);
  }
  if(k + 8 < 64 && k + 8 != q){
    lk.insert(k + 8);
  }
  if((k - 1) / 8 == k / 8 && k - 1 != q){
    lk.insert(k - 1);
  }
  if((k + 1) / 8 == k / 8 && k + 1 != q){
    lk.insert(k + 1);
  }
}

void getLQ(){
  lq.clear();
  int x;

  x = q - 8;
  while(x >= 0 && x != k){
    lq.insert(x);
    x -= 8;
  }

  x = q + 8;
  while(x < 64 && x != k){
    lq.insert(x);
    x += 8;
  }

  x = q - 1;
  while(x / 8 == q / 8 && x != k){
    lq.insert(x);
    x--;
  }

  x = q + 1;
  while(x / 8 == q / 8 && x != k){
    lq.insert(x);
    x++;
  }
}

int main(){
  while(scanf("%d %d %d", &k, &q, &m) != EOF){
    if(k == q){
      printf("Illegal state\n");
      continue;
    }
    
    getLQ();

    if(lq.count(m) == 0){
      printf("Illegal move\n");
      continue;
    }

    getLK();

    for(auto k : lk){
      lq.erase(k);
    }

    if(lq.count(m) == 0){
      printf("Move not allowed\n");
      continue;
    }

    q = m;
    getLK();
    getLQ();

    for(auto k : lq){
      lk.erase(k);
    }

    if(lk.size() == 0){
      printf("Stop\n");
    }
    else{
      printf("Continue\n");
    }
  }
}
