// This program is for finding perfect numbers from 1 ~ N. Perfect numbers are numbers that equal to sum of its diversions.
// For example:
// 6 = 1 + 2 + 3
// Sample Input: 30
// Sample Output: 6 = 1 + 2 + 3
//                28 = 1 + 2 + 4 + 7 + 14


#include <bits/stdc++.h>
using namespace std;

int check(int n) { // Is n a perfect number?
  int s = 0; // sum of diversions
  int i = 1;
  while(i < n) {
    if(n % i == 0) {
      s += i;
    }
    i ++;
  }
  if(s == n) {return 1;}
  return 0;
}

int main() {
  int n, i;
  scanf("%d", &n);
  
  return 0;
}
