#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int hours, minutes, seconds;

  cin >> hours >> minutes >> seconds;

  seconds++;

  if (seconds == 60) {
    seconds = 0;
    minutes++;
  }

  if (minutes == 60) {
    minutes = 0;
    hours++;
  }

  if (hours == 24) {
    hours = 0;
  }

  cout << setfill('0') << setw(2) << hours << ":";
  cout << setfill('0') << setw(2) << minutes << ":";
  cout << setfill('0') << setw(2) << seconds << "\n";

  return 0;
}
