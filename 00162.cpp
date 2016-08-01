// SOLVED

#include <bits/stdc++.h>

using namespace std;

int t;
deque<char> a, b, st;
string r;

int isFace(char c){
  if(c == 'J') return 1;
  else if(c == 'Q') return 2;
  else if(c == 'K') return 3;
  else if(c == 'A') return 4;
  else return 0;
}

bool pay(){
  char ins;
  int n = isFace(st.front());
  
  if(t == 1){
    t *= -1;
    
    while(n--){
      if(!b.empty()){
	ins = b.back();
	st.push_front(ins);
	b.pop_back();
 	if(isFace(ins)){
	  return pay();
	}
      }
      else{
	return false;
      }
    }
    
    while(!st.empty()){
      a.push_front(st.back());
      st.pop_back();
    }
    
    return true;
  }
  else{
    t *= -1;

    while(n--){
      if(!a.empty()){
	ins = a.back();
	st.push_front(ins);
	a.pop_back();
	if(isFace(ins)){
	  return pay();
	}
      }
      else{
	return false;
      }
    }
    
    while(!st.empty()){
      b.push_front(st.back());
      st.pop_back();
    }
    
    return true;
  }
  
}

int main(){
  bool nl = false;

  
  while(true){
    a.clear();
    b.clear();
    st.clear();
    
    cin >> r;

    if(r == "#") return 0;
    
    nl = true;
    
    b.push_back(r[1]);

    for(int i = 1; i < 52; i++){
      cin >> r;
      if(i % 2 == 0){
	b.push_back(r[1]);
      }
      else{
	a.push_back(r[1]);
      }
    }
    
    t = -1;
    while(true){
      if(t == 1){
	if(a.empty()){
	  printf("2 %2d\n", b.size());
	  break;
	}
	else{
	  st.push_front(a.back());
	  a.pop_back();
	}
      }
      else{
	if(b.empty()){
	  printf("1 %2d\n", a.size());
	  break;
	}
	else{
	  st.push_front(b.back());
	  b.pop_back();
	}
      }
       
      if(isFace(st.front()) != 0){
	if(!pay()){
	  t *= -1;
	}
      }
      
      t *= -1;
    }
  }
}
