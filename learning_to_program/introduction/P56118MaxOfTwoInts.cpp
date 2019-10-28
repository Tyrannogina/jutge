#include <iostream>

using namespace std;

int main()
{
  int num1, num2, result;
  cin >> num1 >> num2;
  if (num1 > num2) {
    result = num1;
  } else {
    result = num2;
  }
  cout << result << "\n";
}
