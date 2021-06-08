#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  int a = 3;
  float b = 3.1245678;
  double c = 3.12345678;

  printf("%05d\n", a);
  printf("%08.4f\n", b);
  printf("%07.3lf\n", c);

  system("pause");
  return 0;
}