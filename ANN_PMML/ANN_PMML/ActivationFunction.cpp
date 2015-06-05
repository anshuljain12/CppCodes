#include "ActivationFunction.h"
#include<math.h>
#include<stdlib.h>

using namespace std;

ActivationFunction::ActivationFunction()
{
}
double ActivationFunction::getThresholdActivation(double Z){
	double threshold = 2;
	if (Z > threshold)
		return 1.0;
	else
		return 0.0;
}
double ActivationFunction::getLogisticActivation(double Z){
	return ((double)1 / (1 + exp(-1 * Z)));
}
double ActivationFunction::getTanHActivation(double Z){
	double nume = 1 - exp(-2 * Z);
	double den = 1 + exp(-2 * Z);
	return nume / den;
}
double ActivationFunction::getIdentityActivation(double Z){
	return Z;
}
double ActivationFunction::getExponentialActivation(double Z){
	return exp(Z);
}
double ActivationFunction::getReciprocalActivation(double Z){
	return (double)1 / Z;
}
double ActivationFunction::getSquareActivation(double Z){
	return Z*Z;
}
double ActivationFunction::getGaussActivation(double Z){
	return exp(Z*Z*-1);
}
double ActivationFunction::getSineActivation(double Z){
	return sin(Z);
}
double ActivationFunction::getCosineActivation(double Z){
	return cos(Z);
}
double ActivationFunction::getElliottActivation(double Z){
	return Z / (1 + abs(Z));
}
double ActivationFunction::getArcTanActivation(double Z){
	return 0.0;
}

ActivationFunction::~ActivationFunction()
{
}
