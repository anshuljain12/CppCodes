#include "Normalization.h"


Normalization::Normalization()
{
}
double Normalization::normalize(IPNeuron neuron, string data[]){
	if (neuron.isContinuous == true){
		//return 1;
		neuron.normalizations.sort();
		double a1 = 0;
		double b1 = 0;
		double a2 = 0;
		double b2 = 0;
		list<string>::iterator it = neuron.normalizations.begin();
		while (it != neuron.normalizations.end()){
			a1 = a2;
			b1 = b2;
			stringstream ss(it->c_str());			// "orig norm"
			string a;
			ss >> a;
			a2 = stod(a);							// orig
			ss >> a;
			b2 = stod(a);							//norm
			double x = stod(data[neuron.group]);
			if (x < a2){
				return b1 + ((x - a1) / ((a2 - a1)*(b2 - b1)));
			}
			it++;
		}
		return 1;
	}
	else{
		if (data[neuron.group] == neuron.normalizations.front())
			return 1;
		else
			return 0;
	}
}

Normalization::~Normalization()
{
}
