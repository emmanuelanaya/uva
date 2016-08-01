// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int L;
  string d, rd;

  while(true){
    scanf("%d", &L);

    if(L == 0) return 0;

    d = "+x";
    L--;
    
    while(L--){
      cin >> rd;

      if(rd != "No"){
        if(d == "+x"){
	  d = rd;
	  continue;
	}
	if(d == "-x"){
	  d = rd == "+y" ? "-y" :
	    rd == "-y" ? "+y" :
	    rd == "+z" ? "-z" :
	    rd == "-z" ? "+z" : "caca";
	  continue;
	}
	if(d == "+y"){
	  if(rd == "+y"){
	    d = "-x";
	  }
	  else if(rd == "-y"){
	    d = "+x";
	  }
	  continue;
	}
	if(d == "-y"){
	  if(rd == "+y"){
	    d = "+x";
	  }
	  else if(rd == "-y"){
	    d = "-x";
	  }
	  continue;
	}
	if(d == "+z"){
	  if(rd == "+z"){
	    d = "-x";
	  }
	  else if(rd == "-z"){
	    d = "+x";
	  }
	  continue;
	}
	if(d == "-z"){
	  if(rd == "+z"){
	    d = "+x";
	  }
	  else if(rd == "-z"){
	    d = "-x";
	  }
	  continue;
	}
      }
    }

    cout << d << endl;
  }
}
