#include <iostream>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string message) // let the user enter a positive integer number 
{
	int num;
	cout << message << endl;
	cin >> num;

	while (num < 1)
	{
		cout << "Wrong it should be greater or equal to one: ";
		cin >> num;
	}

	return num;
}
									 
bool CheckDivisionOdd(int num)	 
{								
	for (int i = 3; i <= floor(sqrt(num)); i += 2)
	{
		if (num % i == 0)
			return true;
	}
	return false;
}

bool CheckPrime(int num)  // Check the number if it is prime or not then return true or false
{


	if (num == 2)
		return true;
	else if (num % 2 == 0)
		return false;
	else if (CheckDivisionOdd(num))
		return false;
	else
		return true;
}

int main()
{

	while (true) {

		int number = ReadPositiveNumber("Enter a number:");
		system("cls");
		if (CheckPrime(number))
			cout << number << " is a prime number" << endl;
		else
			cout << number << " is not a prime number" << endl;
	}

	return 0;
}

										// another solution: 
/*

enum enType { Prime, NotPrime };


int ReadPositiveNumber(string message)
{
	int num;
	cout << message << endl;
	cin >> num;


	while (num < 1)
	{
		cout << "Wrong it should be greater or equal to one: ";
		cin >> num;
	}

	return num;
}


enType CheckPrime(int N)
{

	int M = round(N / 2);

	for (int counter = 2; counter <= M; counter++)  // I know that 1 is not prime number also i know how to make it not prime in code but this is the solution of my teacher.
	{
		
		if (N % counter == 0)
			return enType::NotPrime;

	}

	return enType::Prime;

}


void PrintAllPrimeNumbers(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		if (CheckPrime(i) == enType::Prime)
		{
			cout << i << endl;
		}
	}
}

int main()
{
	int number = ReadPositiveNumber("Enter a number:");

	cout << endl << "***********************************" << endl;

	PrintAllPrimeNumbers(number);
	return 0;
}
*/
							// My first solution: 
/*

 // ---------------------------------------------------------------------------------------------------------

enum enType { Prime, NotPrime };


int ReadPositiveNumber(string message)
{
	int num;
	cout << message << endl;
	cin >> num;
 
	while (num <= 0)
	{
		cout << "Wrong number, the number should be positive: " << endl;
		cin >> num;
	}
	return num;
}


enType CheckIfPrime(int N)
{


	if (N == 1)
		return enType::NotPrime;

	else if (N == 2)
	{
		return enType::Prime;
	}

	int i = N - 1;

	for (i; i >= 2; i--)
	{
		if (N % i == 0)
			return enType::NotPrime;
	}


	return enType::Prime;
}


void PrintAllPrimeNumbers(int Number)
{
	while (Number > 1)
	{

		if (CheckIfPrime(Number) == enType::Prime)
		{
			cout << Number << endl;
		}

		Number--;
	}

}


int main()
{
	int Number = ReadPositiveNumber("Enter Number: ");
	
	cout <<  endl << "----------------------------" << endl;

	PrintAllPrimeNumbers(Number);

	return 0;
}
 // ---------------------------------------------------------------------------------------------------------
*/
