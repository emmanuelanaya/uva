// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  list<char> text;
  char s[100010], c;
  list<char>::iterator it;
  bool p;
  int len;
  
  while(scanf("%s", s) != EOF){
    text.clear();
    len = strlen(s);
    it = text.end();
    for(int i = 0; i < len; i++){
      if(s[i] == '['){	     
	it = text.begin();
      }
      else if(s[i] == ']'){
	it = text.end();
      }
      else{
	text.insert(it, s[i]);
      }
    }

    for(auto k : text){
      printf("%c", k);
    }
    printf("\n");
  }
}
