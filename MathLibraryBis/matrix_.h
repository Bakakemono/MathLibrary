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

		float& operator[](int index);

		float& GetValue(int x, int y);
		Vector2 GetColumn(int index) const;
		void SetColumn(int index, Vector2 newValue);

		Matrix2 operator* (Matrix2 matrix2);

	private:
		std::array<float, 4> matrix_;
	};

	class Matrix3 {
	public:
		Matrix3(float const& value);
		Matrix3(std::array<float, 9> const newMatrix);
		Matrix3(poke::Vector3 v1, poke::Vector3 v2, poke::Vector3 v3);

		float& operator[](int indexColumn);

		float& GetValue(int x, int y);
		Vector3 GetColumn(int index) const;
		void SetColumn(int index, Vector3 newValue);

		Matrix3 operator* (Matrix3 matrix3);

	private:
		std::array<float, 9> matrix_;
	};

	class Matrix4 {
	public:
		Matrix4(float const& value);
		Matrix4(std::array<float, 16> const newMatrix);
		Matrix4(poke::Vector4 v1, poke::Vector4 v2, poke::Vector4 v3, poke::Vector4 v4);

		float& operator[](int index);

		float& GetValue(int x, int y);
		Vector4 GetColumn(int index) const;
		void SetColumn(int index, Vector4 newValue);

		Matrix4 operator* (Matrix4 matrix4);

		static Matrix4 Rotate(const Matrix4 modelMatrix, const float angle, Vector3 axis);
		static Matrix4 Translate(const Matrix4 modelMatrix, Vector3 position);
		static Matrix4 Scale(const Matrix4 modelMatrix, Vector3 scale);

		static Matrix4 LookAt(Vector3 eye, Vector3 center, Vector3 up = Vector3(0, 1, 0));
		static Matrix4 Perspective(float fov, float aspect, float near, float far);
		
	private:
		std::array<float, 16> matrix_;
	};
}
