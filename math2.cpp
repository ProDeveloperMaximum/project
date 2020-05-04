#include <iostream>

using namespace std;

int main()
{
	int first_number, second_number;
	
	cout << "First number: \n";
	cin >> first_number;
	
	cout << "Second number: \n";
	cin >> second_number;
	
	int variant;
	
	cout << "Choose a variant  ----  (  1 - /  \  2 - *  \  3 - +  \  4 - -  \  5 - %  ) \n";
	cin >> variant;
	
	if (variant == 1)
	{
		int nisbet;
		if (second_number == 0)
		{
			cout << "0-a bolmek olmaz \n";
		}
		
		else
		{
			nisbet = first_number / second_number;
			cout << "************* \n" << nisbet;
		}
	}
	
	if (variant == 2)
	{
		int hasil;
		hasil = first_number * second_number;
		cout << "************* \n" << hasil;
	}
	
	if (variant == 3)
	{
		int cem;
		cem = first_number + second_number;
		cout << "************* \n" << cem; 
	}
	
	if (variant == 4)
	{
		int ferq;
		ferq = first_number - second_number;
		cout << "************* \n" << ferq;
	}
	
	if (variant == 5)
	{
		int qaliq;
		qaliq = first_number % second_number;
		cout << "************* \n" << qaliq;
	}
	
}
