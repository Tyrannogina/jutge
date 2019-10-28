#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int a, b, modulo;

  cin >> a >> b;

  if (b == 0) {
    cout << "The second input can't be zero";

    return 1;
  }

  modulo = a % b;
  modulo = modulo >= 0 ? modulo : modulo + b;

  cout << (int)floor((double) a / b) << " " << modulo << "\n";

  return 0;
}
