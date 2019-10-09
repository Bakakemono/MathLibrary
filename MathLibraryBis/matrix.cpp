#include "matrix.h"

namespace poke {
	Matrix2::Matrix2(float const & value)
	{
		this->matrix = {
			value, value,
			value, value
		};
	}

	Matrix2::Matrix2(std::array<float, 4> const newMatrix)
	{
		matrix = newMatrix;
	}

	poke::Matrix2::Matrix2(poke::Vector2 v1, poke::Vector2 v2)
	{
		this->matrix = { v1.x, v1.y, v2.x, v2.y };
	}

	float Matrix2::operator[](int indexRaw, int indexColumn)
	{
		return matrix[2 * indexRaw + indexColumn];
	}


	Matrix2 Matrix2::operator*(Matrix2 const & matrix2)
	{
		return Matrix2({
			matrix[0] * matrix2[0] + matrix[2] * matrix2[1],
			matrix[1] * matrix2[0] + matrix[3] * matrix2[1],
			
			matrix[0] * matrix2[2] + matrix[2] * matrix2[3],
			matrix[1] * matrix2[2] + matrix[3] * matrix2[3]
		});
	}

	Matrix3::Matrix3(float const& value)
	{
		this->matrix = {
			value, value, value,
			value, value, value,
			value, value, value
		};
	}

	Matrix3::Matrix3(poke::Vector3 v1, poke::Vector3 v2, poke::Vector3 v3)
	{
	}

	Matrix3 Matrix3::operator*(Matrix2 const& matrix2)
	{
	}

	Matrix4::Matrix4(float const& value)
	{
		this->matrix = {
		value, value, value, value,
		value, value, value, value,
		value, value, value, value,
		value, value, value, value
		};
	}

	Matrix4::Matrix4(poke::Vector4 v1, poke::Vector4 v2, poke::Vector4 v3, poke::Vector4 v4)
	{
	}

	Matrix4 Matrix4::operator*(Matrix2 const& matrix2)
	{
	}
}
