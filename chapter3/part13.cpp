#include <iostream>

using namespace std;
// abs是绝对值,int生效
int main() {
  int n;
  cin >> n;
  int cx = n / 2, cy = n / 2;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      //以中心作为坐标原点,坐标之和在n/2以内的输出*,否则输出空
      if (abs(i - cx) + abs(j - cy) <= n / 2)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
  system("pause");
  return 0;
}