#include "ActivationFunction.h"
#include "IPNeuron.h"
#include "Normalization.h"
#include<iostream>

using namespace std;

int main(){
	int NO_OF_IP_NEURONS = 10;
	int NO_OF_LAYERS = 2;
	// Neuron 1;
	list<string> v1;
	v1.push_back("0.01 0");
	v1.push_back("3.07897 0.5");
	v1.push_back("11.44 1");
	IPNeuron n1(3, "0", "continuous", "double", true, v1);
	// Neuron 2;
	list<string> v2;
	v2.push_back("male");
	IPNeuron n2(0, "1", "discrete", "double", false, v2);
	// Neuron 3;
	list<string> v3;
	v3.push_back("0");
	IPNeuron n3(1, "2", "discrete", "double", false, v3);
	// Neuron 4;
	list<string> v4;
	v4.push_back("1");
	IPNeuron n4(1, "3", "discrete", "double", false, v4);
	// Neuron 5;
	list<string> v5;
	v5.push_back("3");
	IPNeuron n5(1, "4", "discrete", "double", false, v5);
	// Neuron 6;
	list<string> v6;
	v6.push_back(">3");
	IPNeuron n6(1, "5", "discrete", "double", false, v6);
	// Neuron 7;
	list<string> v7;
	v7.push_back("2");
	IPNeuron n7(1, "6", "discrete", "double", false, v7);
	// Neuron 8;
	list<string> v8;
	v8.push_back("suburban");
	IPNeuron n8(2, "7", "discrete", "double", false, v8);
	// Neuron 9;
	list<string> v9;
	v9.push_back("urban");
	IPNeuron n9(2, "8", "discrete", "double", false, v9);
	// Neuron 10;
	list<string> v10;
	v10.push_back("rural");
	IPNeuron n10(2, "9", "discrete", "double", false, v10);

	vector<IPNeuron> InputNeurons;
	InputNeurons.push_back(n1);
	InputNeurons.push_back(n2);
	InputNeurons.push_back(n3);
	InputNeurons.push_back(n4);
	InputNeurons.push_back(n5);
	InputNeurons.push_back(n6);
	InputNeurons.push_back(n7);
	InputNeurons.push_back(n8);
	InputNeurons.push_back(n9);
	InputNeurons.push_back(n10);

	string data[5] = { "male", "2", "urban", "6", "1100" };
	for (int i = 0; i<NO_OF_IP_NEURONS; i++){
		InputNeurons[i].value = Normalization::normalize(InputNeurons[i],data);
		InputNeurons[i].output = InputNeurons[i].value;
	}

	for (int i = 0; i<NO_OF_IP_NEURONS; i++){
		cout << InputNeurons[i].value << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}