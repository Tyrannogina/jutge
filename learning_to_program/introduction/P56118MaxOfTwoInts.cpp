#include <iostream>

using namespace std;

int main()
{
  int num1, num2, result;
  cin >> num1 >> num2;
  result = (num1 > num2) ? num1 : num2;
  cout << result << "\n";

  return 0;
}
