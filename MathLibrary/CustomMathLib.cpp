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
	if(seed == 0)
	{
		return Math::Random(min, max);
	}
	
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
	if (seed == 0)
	{
		return Math::Random(min, max);
	}
	
	std::random_device random;
	std::mt19937 generator(random());
	generator.seed(seed);

	std::uniform_int_distribution<int> distribution(0, max - min);

	return distribution(generator) + min;
}

const float Math::Math::Deg2Rad(float degree)
{
	return degree * M_PI / 180;
}

const float Math::Math::Rad2Deg(float radian)
{
	return radian * 180 / M_PI;
}

Vector2::Vector2()
{
}

Vector2::Vector2(float x, float y): x(x), y(y) {}

Vector2::~Vector2()
{
}
