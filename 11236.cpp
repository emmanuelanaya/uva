// SOLVED

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
  if(a > b) return gcd(b, a);
  if(b % a == 0) return a;
  return gcd(b%a, a);
}

int main(){
  for(int a = 1; a <= 125; a++){
    for(int b = a; b <= 600; b++){
      for(int c = b; c <= 900; c++){
	int num = (a + b + c) * 10000;
	int den = a * b * c - 1000000;
	if(den <= 0) continue;
	int g = gcd(num, den);
	if(100 % (den / g) == 0){
	  int f = 100 / (den / g);
	  int d = (num / g) * f;
	  long long prod = a * b * c * d;
	  long long sum = a + b + c + d;
	  if(d >= c && sum <= 2000){
	    printf("%.2f %.2f %.2f %.2f\n", a/100.0, b/100.0, c/100.0, d/100.0);
	  }
	}
      }
    }
  }
}

