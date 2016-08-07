// SOLVED

#include <bits/stdc++.h>

using namespace std;

int tc, cor[105], pen[105][12], c, p, t, l;
bool oc[105], sol[105][12];
char s[30];
vector<tuple<int, int, int> > fin;

bool byPen(tuple<int, int, int> a, tuple<int, int, int> b){
  return get<1>(a) < get<1>(b);
}

bool byCor(tuple<int, int, int> a, tuple<int, int, int> b){
  return get<2>(a) > get<2>(b);
}

int main(){

  scanf("%d", &tc);
  scanf("\n");
  
  while(tc--){
    memset(cor, 0, sizeof cor);
    memset(oc, false, sizeof oc);
    for(int i = 1; i < 101; i++){
      for(int j = 1; j < 10; j++){
	sol[i][j] = false;
	pen[i][j] = 0;
      }
    }
    fin.clear();
    
    while(cin.getline(s, 30) && strlen(s) != 0){
      sscanf(s, "%d %d %d %c", &c, &p, &t, &l);
      oc[c] = true;
      if(!sol[c][p]){
	if(l == 'C'){
	  cor[c]++;
	  pen[c][p] += t;
	  sol[c][p] = true;
	}
	else if(l == 'I'){
	  pen[c][p] += 20;
	}
      }
    }

    int aux;
    for(int i = 1; i < 101; i++){
      if(oc[i]){
	aux = 0;
	for(int j = 0; j < 10; j++){
	  if(sol[i][j]){
	    aux += pen[i][j];
	  }
	}
	fin.push_back(make_tuple(i, aux, cor[i]));
      }
    }

    stable_sort(fin.begin(), fin.end(), byPen);
    stable_sort(fin.begin(), fin.end(), byCor);

    for(auto k : fin){
      printf("%d %d %d\n", get<0>(k), get<2>(k), get<1>(k));
    }

    if(tc != 0){
      printf("\n"); 
    }
  }
}
