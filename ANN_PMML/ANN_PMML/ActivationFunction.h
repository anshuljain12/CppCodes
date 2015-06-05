#pragma once
class ActivationFunction
{
public:
	ActivationFunction();
	static double getThresholdActivation(double Z);
	static double getLogisticActivation(double Z);
	static double getTanHActivation(double Z);
	static double getIdentityActivation(double Z);
	static double getExponentialActivation(double Z);
	static double getReciprocalActivation(double Z);
	static double getSquareActivation(double Z);
	static double getGaussActivation(double Z);
	static double getSineActivation(double Z);
	static double getCosineActivation(double Z);
	static double getElliottActivation(double Z);
	static double getArcTanActivation(double Z);

	~ActivationFunction();
};

