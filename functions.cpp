#include <iostream>
#include <string>

using namespace std;

int sum(int numb1, int numb2)
{
  return numb1 + numb2;
}

int main()
{
  int somados = sum(10, 20);
  cout << somados;
  return 0;
}