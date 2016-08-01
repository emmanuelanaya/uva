// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int tc, x, y;
  deque<string> top, bot;
  string r;
  
  scanf("%d\n", &tc);

  for(int i = 1; i <= tc; i++){
    top.clear();
    bot.clear();

    for(int j = 0; j < 27; j++){
      cin >> r;
      bot.push_back(r);
    }
    for(int j = 0; j < 25; j++){
      cin >> r;
      top.push_back(r);
    }
    scanf("\n");
    
    y = 0;
    for(int j = 0; j < 3; j++){
      x = (bot.back()[0] >= '2' && bot.back()[0] <= '9')
	? bot.back()[0] - '0' : 10;
      y += x;

      bot.pop_back();

      x = 10 - x;

      while(x--){
	bot.pop_back();
      }
    }

    while(!top.empty()){
      bot.push_back(top.front());
      top.pop_front();
    }

    y--;

    while(y--){
      bot.pop_front();
    }

    printf("Case %d: ", i);
    cout << bot.front() << endl;
  }
}
