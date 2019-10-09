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

		float operator[](int indexRaw, int indexColumn);

		Matrix2 operator* (Matrix2 const& matrix2);

	private:
		std::array<float, 4> matrix;
	};

	class Matrix3 {
	public:
		Matrix3(float const& value);
		Matrix3(poke::Vector3 v1, poke::Vector3 v2, poke::Vector3 v3);

		Matrix3 operator* (Matrix2 const& matrix2);

	private:
		std::array<float, 9> matrix;
	};

	class Matrix4 {
	public:
		Matrix4(float const& value);
		Matrix4(poke::Vector4 v1, poke::Vector4 v2, poke::Vector4 v3, poke::Vector4 v4);

		Matrix4 operator* (Matrix2 const& matrix2);

	private:
		std::array<float, 16> matrix;
	};
}
