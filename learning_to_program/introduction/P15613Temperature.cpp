#include <iostream>

using namespace std;

int main()
{
  int temp;
  string firstLine;

  cin >> temp;
  
  cout << ((temp < 10) ? "it's cold" : (temp > 30) ? "it's hot" : "it's ok") << "\n";

  if (temp <= 0) {
    cout << "water would freeze\n";
  } else if (temp >= 100) {
    cout << "water would boil\n";
  }

  return 0;
}
