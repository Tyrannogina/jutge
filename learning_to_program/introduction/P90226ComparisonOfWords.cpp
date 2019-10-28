#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  string word1, word2;

  cin >> word1 >> word2;

  cout << word1 << ((word1.compare(word2)) < 0 ? " < " : (word1.compare(word2) > 0) ? " > " : " = ") << word2 << "\n";

  return 0;
}
