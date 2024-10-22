#include <iostream>
using namespace std;



// c++ course solution: 

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





		// My solution: 
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


	// discrete math course solution: 


/*

 // ---------------------------------------------------------------------------------------------------------

int ReadPositiveNumber()
{

	int num;
	cout << "Enter a positive number: ";
	cin >> num;

	while (num <= 0)
	{
		cout << "Wrong number, it should be positive: ";
		cin >> num;
	}

	return num;

}

bool CheckPrime(int N, int primeNumbers[78])
{
	if (N == 2)
		return true;
	else if (N % 2 == 0)
		return false;

	int K = floor(sqrt(N));
	int location_in_array = 0;

	for (int i = 0; primeNumbers[i] <= K; i++)
	{
		if (primeNumbers[i] > K)
			location_in_array = i - 1;
	}


}

int main()
{
	int N = ReadPositiveNumber();
	int most_of_prime_numbers[78] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199 , 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293 , 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397 };
	cout << endl << "-----------------------" << endl;


	return 0;
}

 // ---------------------------------------------------------------------------------------------------------

*/