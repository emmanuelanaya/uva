#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int mp[30][30];

int dist(int a, int b){
  return abs((a / 5) - (b / 5)) +
    abs((a % 5) - (b % 5));
}

int main(){
  int t, nn, x, y, p;
  cin >> t;

  while(t--){
    memset(mp, 0, sizeof(mp));
    cin >> nn;

    while(nn--){
      cin >> x >> y >> p;
      mp[x][y] = p;
    }

    // for(int i = 0; i < 25; i++)
    //   cout << mp[i/5][i%5] << ' ';

    int mn = INT_MAX;
    int v, w, x, y, z;
    for(int a = 0; a < 25; a++)
      for(int b = a + 1; b < 25; b++)
	for(int c = b + 1; c < 25; c++)
	  for(int d = c + 1; d < 25; d++)
	    for(int e = d + 1; e < 25; e++){
	      int sum = 0;
	      for(int i = 0; i < 25; i++){
		int p = INT_MAX;
		p = min(p, dist(a, i));
		p = min(p, dist(b, i));
		p = min(p, dist(c, i));
		p = min(p, dist(d, i));
		p = min(p, dist(e, i));
		sum += mp[i/5][i%5] * p;
	      }
	      
	      if(sum < mn){
		mn = sum;
		v = a; w = b; x = c; y = d; z = e;
	      }
	    }
    
    printf("%d %d %d %d %d\n", v, w, x, y, z);
  }
}
