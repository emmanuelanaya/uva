#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  int l[1010];
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
      cin >> l[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < i; j++){
	if(l[j] <= l[i]) sum++;
      }
    }
    cout << sum << endl;
  }
}
