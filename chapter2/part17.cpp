#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  int s;
  cin >> s;

  if (s >= 85) {
    printf("A");

  } else if (s >= 70) {
    printf("B");
  } else if (s >= 60) {
    printf("C");
  } else {
    printf("D");
  }
  return 0;
}
