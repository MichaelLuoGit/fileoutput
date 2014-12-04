#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <stdlib.h>
//2etoz4rtz
using namespace std;
int main(int argc, char* argv[])
{
	ofstream muhprimes;
	muhprimes.open("muhprimes.txt");
	const std::string myRange = argv[1];
	const int range = atoi(myRange.c_str());
	bool primes[range];
	for (int i = 0; i < range; i++)
	{
		primes[i] = true;
	}
	for (int factor = 2; factor <= sqrt(range); factor++)
	{
		for (int multiple = 2; multiple <= (range/factor); multiple++)
		{
			primes[(multiple * factor) - 1] = false;
		}
	}
	for (int i = 0; i < range; i++)
	{
		
		muhprimes << primes[i] << std::setw(6)<<i + 1 << endl;
	}
	muhprimes.close();
	cin.ignore();
	return 0;
}