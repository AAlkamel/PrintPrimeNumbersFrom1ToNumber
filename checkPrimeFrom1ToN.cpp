#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int ReadPositiveNumber(string message)
{
  float num;
  do
  {
    cout << message << endl;
    cin >> num;
  } while (num <= 0);

  return num;
}
enum enPrime
{
  prime,
  notPrime
};
enPrime CheckPrime(int number)
{
  int half = round(number / 2);
  for (int i = 2; i <= half; i++)
  {
    if (number % i == 0)
      return enPrime::notPrime;
  }
  return enPrime::prime;
}
void PrintPrimeNumbersFrom1ToN(int N)
{
  cout << "\nPrint prime numbers from 1 to " << N << endl;
  cout << "are: \n";
  for (int i = 1; i <= N; i++)
  {
    if (CheckPrime(i) == enPrime::prime)
    {
      cout << i << endl;
    }
  }
}
int main()
{
  PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("please enter positive number."));
}