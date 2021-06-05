#include <iostream>
#include <string>

using namespace std;

int main()
{
  const string defaultText = "Hello world";
  for (int i = 0; i <= 10; i++)
  {
    cout << defaultText + " " + to_string(i) << endl;
  }
}