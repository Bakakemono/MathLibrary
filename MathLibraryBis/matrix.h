#pragma once
#include <array>

#include "vector"
#include "custom_vector.h"

namespace poke {
	class Matrix2 {
	public:
		Matrix2(int const& value);
		Matrix2(poke::Vector2 v1, poke::Vector2 v2);

		Matrix2 operator* (Matrix2 const& matrix2);

	private:
		std::array<float, 4> matrix;
		const int totalSize = 4;
	};
}
