#include <iostream>
using namespace std;

// int main()
// {
//   const string lendo = "Digite um valor:";
//   const string lido = "O valor digitado foi: ";
//   cout << lendo;
//   string digitado;
//   cin >> digitado;
//   cout << lido << digitado << endl;
// }

int main()
{
  const string lendo = "Digite um valor:";
  const string lido = "O valor digitado foi: ";
  cout << lendo;
  string digitado;
  getline(cin, digitado);
  cout << lido << digitado << endl;
}