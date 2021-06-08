#include <iostream>
#include <cstdio>

using namespace std;

int main(){
  int t;
  cin >> t;

  int hours = t / 3600;
  int minutes = t %3600 /60 ;
  int seconds = t % 60;

  printf("%d:%d:%d\n",hours,minutes,seconds);
  system("pause");
  return 0;

}