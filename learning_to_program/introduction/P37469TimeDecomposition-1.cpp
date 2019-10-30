#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int totalSecs, totalMinutes, seconds, minutes, hours;

  cin >> totalSecs;

  seconds = totalSecs % 60;
  totalMinutes = totalSecs / 60;
  minutes = totalMinutes % 60;
  hours = totalMinutes / 60;

  cout << hours << " " << minutes << " " << seconds << "\n";

  return 0;
}
