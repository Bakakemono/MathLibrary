#pragma once
#include <array>

#include "vector"
#include "custom_vector.h"

namespace poke {
	class Matrix2 {
	public:
		Matrix2(float const& value);
		Matrix2(std::array<float, 4> const newMatrix);
		Matrix2(poke::Vector2 v1, poke::Vector2 v2);

		std::array<float, 2> operator[](int indexColumn);

		Matrix2 operator* (Matrix2& matrix2);

	private:
		std::array<float, 4> matrix;
	};

	class Matrix3 {
	public:
		Matrix3(float const& value);
		Matrix3(std::array<float, 9> const newMatrix);
		Matrix3(poke::Vector3 v1, poke::Vector3 v2, poke::Vector3 v3);

		std::array<float, 3> operator[](int indexColumn);

		Matrix3 operator* (Matrix3& matrix3);

	private:
		std::array<float, 9> matrix;
	};

	class Matrix4 {
	public:
		Matrix4(float const& value);
		Matrix4(std::array<float, 16> const newMatrix);
		Matrix4(poke::Vector4 v1, poke::Vector4 v2, poke::Vector4 v3, poke::Vector4 v4);

		float& operator[](int index);

		Matrix4 operator* (Matrix4& matrix4);

		Matrix4 Rotate(const Matrix4 modelMatrix, const float angle, const Vector3 axis);

	private:
		std::array<float, 16> matrix;
	};
}
