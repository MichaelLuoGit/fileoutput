#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
//2ez4rtz
using namespace std;
int main()
{
	ofstream muhprimes;
	muhprimes.open("muhprimes.txt");
	const int range = 100;
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
		
		muhprimes << primes[i] << "   "<<i + 1<<endl;
	}
	muhprimes.close();
	cin.ignore();
	return 0;
}