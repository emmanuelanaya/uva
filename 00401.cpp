// SOLVED

#include <bits/stdc++.h>
using namespace std;

map<char, char> inv = {{'A','A'}, {'E','3'}, {'H','H'}, {'I','I'}, {'J','L'},
		       {'L','J'}, {'M','M'}, {'O','O'}, {'S','2'}, {'T','T'},
		       {'U','U'}, {'V','V'}, {'W','W'}, {'X','X'}, {'Y','Y'},
		       {'Z','5'}, {'1','1'}, {'2','S'}, {'3','E'}, {'5','Z'},
		       {'8','8'}};

string get_mirrored(string s){
  string mir = "";
  for(int i = 0; i < s.size(); i++){
    char c = s[s.size() - i - 1];
    if(inv.count(c) != 0){
      mir += inv[c];
    }
    else{
      return "";
    }
  }
  return mir;
}

bool is_mirrored(string s){
  return s == get_mirrored(s);
}

bool is_palindrome(string s){
  for(int i = 0; i < s.size(); i++){
    if(s[i] != s[s.size() - i - 1]) return false;
  }
  return true;
}

int main(){
  string s;
  while(getline(cin, s)){
    cout << s;
    if(is_mirrored(s) && is_palindrome(s))
      cout << " -- is a mirrored palindrome.";
    else if(is_mirrored(s))
      cout << " -- is a mirrored string.";
    else if(is_palindrome(s))
      cout << " -- is a regular palindrome.";
    else
      cout << " -- is not a palindrome.";
    cout << "\n\n";
  }
}
