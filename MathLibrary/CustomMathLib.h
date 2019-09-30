#ifndef MATH_H
#define MATH_H

#include <random>
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

	private:
		static int iteration;
	};
#endif
}
