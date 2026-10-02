// L5-9-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int Read_Postive_Number(string msg)
{
    int number;
	do
	{
		cout << msg << endl;
		cin >> number;

	} while (number<=0);
	return number;
}
int FreqNumbers(int number, int digit)
{
	int remainder = 0, freq = 0;
	do
	{
		remainder = number % 10;
		number = number / 10;
		if (digit == remainder)
		{
			freq++;
		}
	}while (number > 0);
	return freq;
}

void PrintFreqCountNumbers(int number)
{
	int count = 1;
	do
	{
		int d = 0;
		d = FreqNumbers(number,count);
		if (d > 0)
		{
			cout << "The Number: " << count << " Frequency Is " << d << " Time(s)." << endl;

		}
		count += 1;
	} while (count <10);
}

int main()
{
	int n = Read_Postive_Number("ENTER THE MAIN NUMBER:");
	PrintFreqCountNumbers(n);
}