#include "IPNeuron.h"


IPNeuron::IPNeuron(int group, string id, string optype, string datatype, bool isContinuous, list<string> normalizations){
	this->group = group;
	this->id = id;
	this->optype = optype;
	this->dataType = dataType;
	this->isContinuous = isContinuous;
	this->normalizations = normalizations;
}

IPNeuron::~IPNeuron()
{
}
