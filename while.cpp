#include <iostream>
#include <string>

using namespace std;

int main()
{
  const string defaultText = "Hello world";
  int i = 0;
  while (i <= 10)
  {
    cout << defaultText + " " + to_string(i) << endl;
    i++;
  }
}