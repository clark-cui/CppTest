#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int a[3] = {0, 1, 2};
  cout << a[0] << ' ' << a[1] << ' ' << a[2] << endl;
  a[0] = 5;
  cout << a[5] << endl;
  system("pause");
  return 0;
}