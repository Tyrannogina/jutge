#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
  char c, temp;

  cin >> c;
  temp = c;

  if (islower(c)) {
    cout << "lowercase\n";
  } else if (isupper(c)) {
    cout << "uppercase\n";
    temp = tolower(c);
  } else {
    cout << "Input has to be a letter\n";
    return 1;
  }

  if (temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u') {
    cout << "vowel\n";
  } else {
    cout << "consonant\n";
  }

  return 0;
}
