#include <iostream>

using namespace std;

int main()
{
  int num1, num2, num3, result;
  cin >> num1 >> num2 >> num3;
  result = (num1 > num2) ? num1 : num2;
  result = num3 > result ? num3 : result;

  cout << result << "\n";

  return 0;
}
