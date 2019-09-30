#ifndef MATH_H
#define MATH_H

#include <random>
// Demander si j'ai le droit à cette librairy mathematique
#define _USE_MATH_DEFINES
#include <math.h>

namespace Math
{
	static class Math
	{
	public:
		Math();
		~Math();

		static float Random(float min, float max);
		static float Random(float min, float max, int seed);

		static int Random(int min, int max);
		static int Random(int min, int max, int seed);

		const static float Deg2Rad(float degree);
		const static float Rad2Deg(float radian);

	private:
		// j'essaye de faire une variable static qui s'incremente qui fera que le 1er rand sera different du 2e rand avec la même seed
		static int randIteration;
	};
}

class Vector2
{
public:
	Vector2();
	Vector2(float x, float y);
	~Vector2();

	static float Distance(Vector2 start, Vector2 end);

	// Variable
	float x;
	float y;
};

class Vector3
{
	
};

class Vector4
{
	
};

class Matrix22
{
	
};

class Matrix33
{
	
};

class Matrix44
{
	
};
#endif

