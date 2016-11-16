// SOLVED :D

#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

struct noq_st{
  vi st, og, lazy; 
  int n;
  int left(int x){return (x << 1) + 1;}
  int right(int x){return (x << 1) + 2;}
  
  noq_st(vi a){
    og = a;
    n = og.size();
    st = vi(4 * n);
    lazy = vi(4 * n);
    build(0, 0, n - 1);
  }

  void build(int p, int l, int r){
    if(l == r) st[p] = og[l];
    else{
      build(left(p), l, (l + r) / 2);
      build(right(p), (l + r) / 2 + 1, r);
      st[p] = st[left(p)] + st[right(p)];
    }
  }

  void update(int p, int l, int r, int i, int j, int v){
    if(lazy[p]){
      if(lazy[p] == 1) st[p] = 0;
      else if(lazy[p] == 2) st[p] = r - l + 1;
      else st[p] = r - l + 1 - st[p];
      
      if(l != r){
	if(lazy[p] != 3){
	  lazy[left(p)] = lazy[p];
	  lazy[right(p)] = lazy[p];
	}
	else{
	  lazy[left(p)] = 3 - lazy[left(p)];
	  lazy[right(p)] = 3 - lazy[right(p)];
	}
      }
      
      lazy[p] = 0;
    }

    if(l > j || r < i) return;
    if(i <= l && r <= j){
      if(v == 1) st[p] = 0;
      else if(v == 2) st[p] = r - l + 1;
      else st[p] = r - l + 1 - st[p];

      if(l != r){
	if(v != 3){
	  lazy[left(p)] = v;
	  lazy[right(p)] = v;
	}
	else{
	  lazy[left(p)] = 3 - lazy[left(p)];
	  lazy[right(p)] = 3 - lazy[right(p)];
	}
      }
      return;
    }

    update(left(p), l, (l + r) / 2, i, j, v);
    update(right(p), (l + r) / 2 + 1, r, i, j, v);

    st[p] = st[left(p)] + st[right(p)];
  }

  void update(int i, int j, int v){
    return update(0, 0, n - 1, i, j, v);
  }

  int noq(int p, int l, int r, int i, int j){
    if(lazy[p]){
      if(lazy[p] == 1) st[p] = 0;
      else if(lazy[p] == 2) st[p] = r - l + 1;
      else st[p] = r - l + 1 - st[p];
      
      if(l != r){
	if(lazy[p] != 3){
	  lazy[left(p)] = lazy[p];
	  lazy[right(p)] = lazy[p];
	}
	else{
	  lazy[left(p)] = 3 - lazy[left(p)];
	  lazy[right(p)] = 3 - lazy[right(p)];
	}
      }
      
      lazy[p] = 0;
    }

    if(l > j || r < i) return 0;
    if(i <= l && r <= j) return st[p];
    
    return noq(left(p), l, (l + r) / 2, i, j) +
      noq(right(p), (l + r) / 2 + 1, r, i, j);
  }


  int noq(int i, int j){
    return noq(0, 0, n - 1, i, j);
  }
};

int main(){
  int t, m, k, q;
  string s;
  vi a;
  
  scanf("%d", &t);
  for(int i = 1; i <= t; i++){
    a.clear();
    
    scanf("%d", &m);
    while(m--){
      scanf("%d\n", &k);
      getline(cin, s);
      while(k--){
	for(char c : s){
	  a.push_back(c - '0');
	}
      }
    }
    
    noq_st st(a);

    scanf("%d\n", &q);
    char c;
    int a, b, z = 1;
    printf("Case %d:\n", i);
    while(q--){
      scanf("%c %d %d\n", &c, &a, &b);
      if(c == 'E') st.update(a, b, 1);
      else if(c == 'F') st.update(a, b, 2);
      else if(c == 'I') st.update(a, b, 3);
      else printf("Q%d: %d\n", z++, st.noq(a, b));
    }
  }
}
