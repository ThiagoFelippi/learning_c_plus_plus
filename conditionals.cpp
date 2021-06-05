#include <iostream>
#include <string>
// #include <boost/algorithm/string.hpp>

using namespace std;

int main()
{
  string defaultText = "Hello world";

  bool hasInitialHello = defaultText.rfind("ello", 0) == 0;

  if (hasInitialHello)
  {
    cout << "Ta certo! \n";
  }
  else
  {
    cout << "Ta errado! \n";
  }

  cout << hasInitialHello << endl;
}