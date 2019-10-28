#include <iostream>

using namespace std;

int main()
{
  int num1, num2, num3, result;
  cin >> num1 >> num2 >> num3;

  if (num1 > num2) {
    result = num1;
  } else {
    result = num2;
  }

  if (num3 > result) {
    result = num3;
  }

  cout << result << "\n";
}
