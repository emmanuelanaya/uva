// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  string l;
  int c = 1;
  while(true){
    getline(cin, l);
    if(l != "#"){
      printf("Case %d: ", c);
      c++;
      
      if(l == "HELLO") printf("ENGLISH\n");
      else if(l == "HOLA") printf("SPANISH\n");
      else if(l == "HALLO") printf("GERMAN\n");
      else if(l == "BONJOUR") printf("FRENCH\n");
      else if(l == "CIAO") printf("ITALIAN\n");
      else if(l == "ZDRAVSTVUJTE") printf("RUSSIAN\n");
      else printf("UNKNOWN\n");
    }
    else return 0;
  }
}
