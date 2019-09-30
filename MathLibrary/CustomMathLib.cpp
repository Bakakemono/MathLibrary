#include "pch.h"
#include "CustomMathLib.h"


Math::Math::Math() {}
Math::Math::~Math() {}


float Math::Math::Random(float min, float max)
{
	std::random_device random;
	std::mt19937 generator(random());

	std::uniform_real_distribution<float> distribution(0, max - min);

	return distribution(generator) + min;
}

float Math::Math::Random(float min, float max, int seed)
{
	std::random_device random;
	std::mt19937 generator(random());
	generator.seed(seed);

	std::uniform_real_distribution<float> distribution(0, max - min);

	return distribution(generator) + min;
}

int Math::Math::Random(int min, int max)
{
	std::random_device random;
	std::mt19937 generator(random());
	 
	std::uniform_int_distribution<int> distribution(0, max - min);

	return distribution(generator) + min;
}

int Math::Math::Random(int min, int max, int seed)
{
	std::random_device random;
	std::mt19937 generator(random());
	generator.seed(seed);

	std::uniform_int_distribution<int> distribution(0, max - min);

	return distribution(generator) + min;
}
