#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
  char c;

  cin >> c;

  if (islower(c)) {
    cout << (char)toupper(c) << "\n";
  } else if (isupper(c)) {
    cout << (char)tolower(c) << "\n";
  } else {
    cout << "Input has to be a letter\n";
    return 1;
  }

  return 0;
}
