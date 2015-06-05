#pragma once
#include<string>
#include<list>
#include<vector>
#include<sstream>

using namespace std;

class IPNeuron
{
public:
	int group;              // From DataDictionary and will be used to map input data to neuron.
	string id;
	string optype;
	string dataType;
	bool isContinuous;
	list<string> normalizations;

	double value;
	double output;

	IPNeuron(int group, string id, string optype, string datatype, bool isContinuous, list<string> normalizations);
	~IPNeuron();
};

