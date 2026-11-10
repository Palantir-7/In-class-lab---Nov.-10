#pragma once
#include <iostream>
#include <string>
#include<map>
#include<fstream>
#include<random>

using namespace std;

class StringWrapper
{
private:
	string mString;

public:
	StringWrapper(const string& filename);

	string encrypt() const;

	std::map<char, int> getLetterFrequencyDistribution()const;

	void printHistogram(const std::map<char, int>& letterFrequencyDistribution) const;
};

