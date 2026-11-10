//Elizabeth Fanton
//modified on 11/10/2026 for in class lab- Nov. 10
#include "StringWrapper.h"


map<char, int> getHistogram(const string& theString)
{
	map<char, int> histogram;
	//map<char,int>()
}
int main()
{
	const string filename = "test.txt";
	string plaintext = "Hello, World!";

	StringWrapper plainSting(plaintext);

	string ciphertext = plainSting.encrypt();

	cout << "Ciphertext is: " << ciphertext << endl;

	auto letterToFrequencies = plainSting.getLetterFrequencyDistribution();

	plainSting.printHistogram(letterToFrequencies);

	auto histogram = getHistogram(plaintext);
	plainSting.printHistogram(histogram);
}