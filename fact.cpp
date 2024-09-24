#include<iostream>
using namespace std;

int factorialRecursive(int n) {
  int result = 0;

  if (n == 1)
    result = 1;
  else result = n * factorialRecursive(n - 1);

  return result;
}

int main()
{
    int n;
    cin >> n;
    cout << factorialRecursive(n);
    return 0;
}