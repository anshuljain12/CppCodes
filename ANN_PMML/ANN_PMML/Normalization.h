#pragma once
#include "IPNeuron.h"
class Normalization
{
public:
	Normalization();
	static double normalize(IPNeuron neuron, string data[]);
	~Normalization();
};

