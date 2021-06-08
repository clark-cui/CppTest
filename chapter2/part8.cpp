#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  int a = 3;
  float b = 3.1245678;
  double c = 3.12345678;

  printf("%-5d\n", a);
  printf("%-8.4f\n", b);
  printf("%-7.3lf\n", c);

  system("pause");
  return 0;
}