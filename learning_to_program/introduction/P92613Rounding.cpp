#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  double num;

  cin >> num;

  cout << (int)floor(num) << " " << (int)ceil(num) << " " << (int)round(num) << "\n";

  return 0;
}
