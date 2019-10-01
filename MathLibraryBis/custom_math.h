#ifndef CUSTOM_MATH_H
#define CUSTOM_MATH_H

#include <random>

namespace poke {
	namespace customMath {
		static int seed;
		static const int NO_SEED = 0;

		static float Random(float minimum, float maximum)
		{
			static std::random_device random;
			static std::mt19937 generator(random());

			if(seed != NO_SEED)
			{
				static int iteration;
				generator.seed(seed + iteration);

				iteration++;
				if(seed + iteration == NO_SEED)
				{
					iteration++;
				}
			}

			std::uniform_real_distribution<float> distribution(0, maximum - minimum);

			return distribution(generator) + minimum;
		}

		static int Random(int minimum, int maximum)
		{
			static std::random_device random;
			static std::mt19937 generator(random());

			if (seed != NO_SEED)
			{
				static int iteration;

				generator.seed(seed + iteration);

				iteration++;
				if (seed + iteration == NO_SEED)
				{
					iteration++;
				}
			}

			std::uniform_int_distribution<int> distribution(0, maximum - minimum);

			return distribution(generator) + minimum;
		}

		static float Random(float maximum)
		{
			static std::random_device random;
			static std::mt19937 generator(random());

			if (seed != NO_SEED)
			{
				static int iteration;

				generator.seed(seed + iteration);

				iteration++;
				if (seed + iteration == NO_SEED)
				{
					iteration++;
				}
			}

			std::uniform_real_distribution<float> distribution(0, maximum);

			return distribution(generator);
		}

		static int Random(int maximum)
		{
			static std::random_device random;
			static std::mt19937 generator(random());

			if (seed != NO_SEED)
			{
				static int iteration;

				generator.seed(seed + iteration);

				iteration++;
				if (seed + iteration == NO_SEED)
				{
					iteration++;
				}
			}

			std::uniform_int_distribution<int> distribution(0, maximum);

			return distribution(generator);
		}

		static void SetSeedForRandom(int newSeed)
		{
			seed = newSeed;
		}

		const static float PI()
		{
			return 3.141592653f;
		}

		static float Rad2Deg(float radian)
		{
			return radian * 180 / PI();
		}

		static float Deg2Rad(float degree)
		{
			return degree * PI() / 180;
		}
	}
}
#endif