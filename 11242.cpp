// SOLVED

#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int main(){
  int f, r;
  int fr[15], re[10];
  vector<double> s;

  while(cin >> f >> r){
    s.clear();
    for(int i = 0; i < f; i++){
      cin >> fr[i];
    }
    for(int i = 0; i < r; i++){
      cin >> re[i];
    }
    for(int i = 0; i < f; i++){
      for(int j = 0; j < r; j++){
	s.push_back((double)fr[i] / re[j]);
      }
    }

    sort(s.begin(), s.end());

    double mx = 1;
    int size = f * r;
    
    for(int i = 1; i < size; i++){
      mx = max(mx, s[i] / s[i-1]);
    }
    
    printf("%.2lf\n", mx);
  }
}
