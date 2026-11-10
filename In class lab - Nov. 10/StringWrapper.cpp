#include "StringWrapper.h"

//StringWrapper::StringWrapper(const string& baseString
//	:
//mString(baseString)
//{
//}

string StringWrapper::encrypt() const
{
	std::mt19937 rng(rand_device{}());

	int minRandomNumber = 1;
	int maxRandomNumber = 26;

	std::uniform_int_distribution<int>distribution(minRandomNumber, maxRandomNumber);


	//int randomKey = distribution.operator()(rng);
	int randomKey = distribution(rng);
	cout << "Random key is: " << randomKey << endl;

	string encryptedText;
	for (int i = 0; i < mString.length(); i++)
	{
		//mString[i] = mString[i] + randomKey;
		char encryptedChar = mString[i] + randomKey;
		encryptedText.push_back(encryptedChar);
	}
	return encryptedText;
}

StringWrapper::StringWrapper() = default; //sets mString = ""

map<char, int> StringWrapper::getLetterFrequencyDistribution() const
{
	return map<char, int> letterToFrequencies =
		//{
		//	{'a',3},
		//	{'b',2}
		//};
		//letterToFrequencies['a']++;*/
		for (int i = 0; i < mString.length(); i++)
		{
			char currentChar = mString[i];
			letterToFrequencies[currentChar]++;
		}
	return letterToFrequencies;
}

void StringWrapper::printHistogram(const std::map<char, int>& letterFrequencyDistribution) const
{
	for (const auto& currentPair : letterFrequencyDistribution)
	{
		cout << currentPair.first << " occurs this many times: " << currentPair.second << endl;
	}

	int SCALING_FACTOR = 293;


	SCALING_FACTOR = INT_MAX;
	for (const auto& currentPair : letterFrequencyDistribution)
	{
		if (currentPair.second > SCALING_FACTOR)
		{
			SCALING_FACTOR = currentPair.second;
		}
	}

	for (const auto& currentPair : letterFrequencyDistribution)
	{
		int scaledNumberOfOccurrences = currentPair.second / SCALING_FACTOR;
		cout << currentPair.first << " : ";
		for (int i = 0; i < scaledNumberOfOccurrences; i++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

StringWrapper::StringWrapper(const string& filename)
{
	ifstream fin(filename);

	if (!fin)
	{
		cout << filename << " Not found" << endl;
		return;
	}
	string line;

	while (getline(fin, line))
	{
		mString += line;
	}
	string StringWrapper::encrypt() const
	{
		return string();
	}
	fin.close();
}