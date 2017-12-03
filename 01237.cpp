#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  vector<string> names;
  vector<int> lo, hi;
  string n;
  int l, h, d, q, p; 
  bool ya, fst = false;
  
  while(t--){
    if(fst) cout << endl;
    fst = true;
    
    names.clear(); lo.clear(); hi.clear();
    cin >> d;
    for(int i = 0; i < d; i++){
      cin >> n >> l >> h;
      names.push_back(n);
      lo.push_back(l);
      hi.push_back(h);
    }
    cin >> q;
    for(int i = 0; i < q; i++){
      cin >> p;
      ya = false;
      for(int j = 0; j < d; j++){
	if(lo[j] <= p && p <= hi[j]){
	  if(ya){
	    ya = false;
	    break;
	  }
	  else{
	    n = names[j];
	    ya = true;
	  }
	}
      }
      if(ya) cout << n << '\n';
      else cout << "UNDETERMINED\n";
    }
  }
}
