#include <iostream>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  if (b == 0) {
    cout << "The second input can't be zero";
    return 1;
  }

  cout << a / b << " " << a % b << "\n";

  return 0;
}
