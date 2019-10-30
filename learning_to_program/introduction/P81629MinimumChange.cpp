#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int e, c, temp;

  cin >> e >> c;

  temp = floor(e / 500);
  cout << "Banknotes of 500 euros: " << temp  << "\n";
  e = e - (temp * 500);

  temp = floor(e / 200);
  cout << "Banknotes of 200 euros: " << temp << "\n";
  e = e - (temp * 200);

  temp = floor(e / 100);
  cout << "Banknotes of 100 euros: " << temp << "\n";
  e = e - (temp * 100);

  temp = floor(e / 50);
  cout << "Banknotes of 50 euros: " << temp << "\n";
  e = e - (temp * 50);

  temp = floor(e / 20);
  cout << "Banknotes of 20 euros: " << temp << "\n";
  e = e - (temp * 20);

  temp = floor(e / 10);
  cout << "Banknotes of 10 euros: " << temp << "\n";
  e = e - (temp * 10);

  temp = floor(e / 5);
  cout << "Banknotes of 5 euros: " << temp << "\n";
  e = e - (temp * 5);

  temp = floor(e / 2);
  cout << "Coins of 2 euros: " << temp << "\n";
  e = e - (temp * 2);

  cout << "Coins of 1 euro: " << e << "\n";

  temp = floor(c / 50);
  cout << "Coins of 50 cents: " << temp << "\n";
  c = c - (temp * 50);

  temp = floor(c / 20);
  cout << "Coins of 20 cents: " << temp << "\n";
  c = c - (temp * 20);

  temp = floor(c / 10);
  cout << "Coins of 10 cents: " << temp << "\n";
  c = c - (temp * 10);

  temp = floor(c / 5);
  cout << "Coins of 5 cents: " << temp << "\n";
  c = c - (temp * 5);

  temp = floor(c / 2);
  cout << "Coins of 2 cents: " << temp << "\n";
  c = c - (temp * 2);

  cout << "Coins of 1 cent: " << c << "\n";

  return 0;
}
