#pragma once
#include<string>
#include<vector>
using namespace std;

class HiddenOutputNeurons
{
public:
	string id;
	double output;
	vector<double> weights;
	HiddenOutputNeurons();
	~HiddenOutputNeurons();
};

