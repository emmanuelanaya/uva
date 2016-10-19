// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int dist[1010], tc, n, m, f, t, w;
  vector<tuple<int, int, int> > edges;
  bool p;

  scanf("%d", &tc);

  while(tc--){
    memset(dist, INT_MAX, sizeof dist);
    dist[0] = 0;
    edges.clear();
    scanf("%d %d", &n, &m);
    while(m--){
      scanf("%d %d %d", &f, &t, &w);
      edges.push_back(make_tuple(f, t, w));
    }
    for(int i = 1; i < n; i++){
      for(auto e : edges){
	if(dist[get<0>(e)] != INT_MAX){
	  dist[get<1>(e)] = min(dist[get<1>(e)], dist[get<0>(e)] + get<2>(e));
	}
      }
    }

    p = 0;
    for(auto e : edges){
      if(dist[get<0>(e)] != INT_MAX &&
	 dist[get<1>(e)] > dist[get<0>(e)] + get<2>(e)){
	p = 1;
	break;
      }
    }

    if(!p){
      printf("not ");
    }
    printf("possible\n");
  }
}
