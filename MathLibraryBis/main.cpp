#include <cstdlib>
#include <iostream>
#include "custom_math.h"
#include "custom_vector.h"
#include "matrix.h"

int main()
{
	poke::Vector3 test(1, 1, 1);

	std::cout << &test.x << " / " << &test.y << " / " << &test.z << "\n";

	system("pause");
	return EXIT_SUCCESS;
}
