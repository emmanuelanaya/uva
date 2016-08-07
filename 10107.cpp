// SOLVED

#include <bits/stdc++.h>

using namespace std;

int main(){
  int nums[10010], size = 0, l, h;

  while(scanf("%d", &nums[size]) != EOF){
    size++;
    if(size % 2 == 0){
      nth_element(nums, nums + size / 2, nums + size);
      h = nums[size / 2];
      nth_element(nums, nums + (size / 2) - 1, nums + size);
      l = nums[(size / 2) - 1];
      printf("%d\n", (l + h) / 2);
    }
    else{
      nth_element(nums, nums + size / 2, nums + size);
      printf("%d\n", nums[size / 2]);
    }
  }
}
