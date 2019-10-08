#include "matrix.h"

namespace poke {
	Matrix2::Matrix2(float const & value)
	{
		this->matrix = { value, value, value, value };
	}

	poke::Matrix2::Matrix2(poke::Vector2 v1, poke::Vector2 v2)
	{
		this->matrix = { v1.x, v1.y, v2.x, v2.y };
	}

	Matrix2 Matrix2::operator*(Matrix2 const & matrix2)
	{
		return Matrix2(1);
	}

	
}