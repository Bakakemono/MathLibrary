#include "matrix_.h"

namespace poke {
#pragma region Matrix 2x2
	Matrix2::Matrix2(float const & value)
	{
		matrix = {
			value, value, // column 1
			value, value  // column 2
		};
	}

	Matrix2::Matrix2(std::array<float, 4> const newMatrix)
	{
		matrix = newMatrix;
	}
	 
	Matrix2::Matrix2(poke::Vector2 v1, poke::Vector2 v2)
	{
		matrix = {
			v1.x(), v1.y(), // column 1
			v2.x(), v2.y()  // column 2
		};
	}

	std::array<float, 2> Matrix2::operator[](int indexColumn)
	{
		return {
			matrix[2 * indexColumn],
			matrix[2 * indexColumn + 1]
		};
	}

	Matrix2 Matrix2::operator*(Matrix2& matrix2)
	{
		return Matrix2({
			matrix[0] * matrix2[0][0] + matrix[2] * matrix2[0][1], // column 1
			matrix[1] * matrix2[0][0] + matrix[3] * matrix2[0][1],
			
			matrix[0] * matrix2[0][1] + matrix[2] * matrix2[1][1], // column 2
			matrix[1] * matrix2[0][1] + matrix[3] * matrix2[1][1]
		});
	}
#pragma endregion

#pragma region Matrix 3x3
	Matrix3::Matrix3(float const& value)
	{
		matrix = {
			value, value, value, // column 1
			value, value, value, // column 2
			value, value, value  // column 3
		};
	}

	Matrix3::Matrix3(std::array<float, 9> const newMatrix)
	{
		matrix = newMatrix;
	}

	Matrix3::Matrix3(poke::Vector3 v1, poke::Vector3 v2, poke::Vector3 v3)
	{
		matrix = { 
			v1.x(), v1.y(), v1.z(), // column 1
			v2.x(), v2.y(), v2.z(), // column 2
			v3.x(), v3.y(), v3.z()  // column 3
		};
	}

	std::array<float, 3> Matrix3::operator[](int indexColumn)
	{
		return {
			matrix[3 * indexColumn],
			matrix[3 * indexColumn + 1],
			matrix[3 * indexColumn + 2]
		};
	}

	Matrix3 Matrix3::operator*(Matrix3& matrix3)
	{
		return Matrix3({
			matrix[0] * matrix3[0][0] + matrix[3] * matrix3[0][1] + matrix[6] * matrix3[0][2], // column 1
			matrix[1] * matrix3[0][0] + matrix[4] * matrix3[0][1] + matrix[7] * matrix3[0][2],
			matrix[2] * matrix3[0][0] + matrix[5] * matrix3[0][1] + matrix[8] * matrix3[0][2],

			matrix[0] * matrix3[1][0] + matrix[3] * matrix3[1][1] + matrix[6] * matrix3[1][2], // column 2
			matrix[1] * matrix3[1][0] + matrix[4] * matrix3[1][1] + matrix[7] * matrix3[1][2],
			matrix[2] * matrix3[1][0] + matrix[5] * matrix3[1][1] + matrix[8] * matrix3[1][2],

			matrix[0] * matrix3[2][0] + matrix[3] * matrix3[2][1] + matrix[6] * matrix3[2][2], // column 3
			matrix[1] * matrix3[2][0] + matrix[4] * matrix3[2][1] + matrix[7] * matrix3[2][2],
			matrix[2] * matrix3[2][0] + matrix[5] * matrix3[2][1] + matrix[8] * matrix3[2][2]
			}
		);
	}
#pragma endregion 

#pragma region Matrix4x4
	Matrix4::Matrix4(float const& value)
	{
		matrix_ = {
			value, value, value, value, // column 1
			value, value, value, value, // column 2
			value, value, value, value, // column 3
			value, value, value, value  // column 4
		};
	}

	Matrix4::Matrix4(std::array<float, 16> const newMatrix)
	{
		matrix_ = newMatrix;
	}

	Matrix4::Matrix4(poke::Vector4& v1, poke::Vector4& v2, poke::Vector4& v3, poke::Vector4& v4)
	{
		matrix_ = {
			v1.x(), v1.y(), v1.z(), v1.w(), // column 1
			v2.x(), v2.y(), v2.z(), v2.w(), // column 2
			v3.x(), v3.y(), v3.z(), v3.w(), // column 3		   
			v4.x(), v4.y(), v4.z(), v4.w()  // column 4
		};						   
	}							   
								   
	float& Matrix4::operator[](int const index)
	{
		return matrix_[index];
	}

	float& Matrix4::GetValue(int x, int y)
	{
		return matrix_[x * 4 + y];
	}

	Vector4 Matrix4::GetColumn(int index) const
	{
		return Vector4(matrix_[index * 4], matrix_[index * 4 + 1], matrix_[index * 4 + 2], matrix_[index * 4 + 3]);
	}

	void Matrix4::SetColumn(int index, Vector4 newValue)
	{
		matrix_[index * 4] = newValue.x();
		matrix_[index * 4 + 1] = newValue.y();
		matrix_[index * 4 + 2] = newValue.z();
		matrix_[index * 4 + 3] = newValue.w();
	}

	Matrix4 Matrix4::operator*(Matrix4& matrix4)
	{
		Matrix4 result(0.0f);

		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				result[i * 4 + j] = 
					matrix_[j] *			matrix4.GetValue(i, 0) +
					matrix_[4 + j] *		matrix4.GetValue(i, 1) +
					matrix_[8 + j] *		matrix4.GetValue(i, 2) +
					matrix_[12 + j] *	matrix4.GetValue(i, 3);
			}
		}
		return result;
	}

	Matrix4 Matrix4::Rotate(Matrix4 modelMatrix, const float angle, Vector3 axis)
	{
		float angleCos = cos(angle);
		float angleSin = sin(angle);

		Vector3 axisNorma = axis.Normalize();
		Vector3 temp = axis * (1.0f - angleCos);

		Matrix4 rotate(0.0f);

		rotate.GetValue(0, 0) = angleCos + temp.x() * axis.x();
		rotate.GetValue(0, 1) = temp.x() * axis.y() + angleSin * axis.z();
		rotate.GetValue(0, 2) = temp.x() * axis.z() - angleSin * axis.z();
		
		rotate.GetValue(1, 0) = temp.y() * axis.x() - angleSin * axis.z();
		rotate.GetValue(1, 1) = angleCos + temp.y() * axis.y();
		rotate.GetValue(1, 2) = temp.y() * axis.z() + angleSin * axis.x();
		
		rotate.GetValue(2, 0) = temp.z() * axis.x() + angleSin * axis.y();
		rotate.GetValue(2, 1) = temp.z() * axis.y() - angleSin * axis.x();
		rotate.GetValue(2, 2) = angleSin + temp.z() * axis.z();

		Matrix4 result(0);
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 4; j++) {
				result[i * 4 + j] = modelMatrix[j] * rotate.GetValue(i, 0) + modelMatrix[4 + j] * rotate.GetValue(i, 1) + modelMatrix[8 + j] * rotate.GetValue(i, 2);
			}
		}
		
		result[12] = modelMatrix[12];
		result[13] = modelMatrix[13];
		result[14] = modelMatrix[14];
		result[15] = modelMatrix[15];

		return result;
	}

	Matrix4 Matrix4::Translate(const Matrix4 modelMatrix, Vector3 position)
	{
		Vector4 translate(0, 0, 0, 0);
		translate =
			modelMatrix.GetColumn(0) * position.x() +
			modelMatrix.GetColumn(1) * position.y() +
			modelMatrix.GetColumn(2) * position.z() +
			modelMatrix.GetColumn(3);

		Matrix4 result(modelMatrix);

		result.SetColumn(3, translate);

		return result;
	}

	Matrix4 Matrix4::Scale(const Matrix4 modelMatrix, Vector3 scale)
	{
		Matrix4 result(1);
		result.SetColumn(0, modelMatrix.GetColumn(0) * scale.x());
		result.SetColumn(1, modelMatrix.GetColumn(1) * scale.y());
		result.SetColumn(2, modelMatrix.GetColumn(2) * scale.z());
		result.SetColumn(3, modelMatrix.GetColumn(3));
		return result;
	}

	Matrix4 Matrix4::LookAt(Vector3 eye, Vector3 center, Vector3 up)
	{
		Vector3 f((center - eye).Normalize());
		Vector3 s(Vector3::Cross(up, f).Normalize());
		Vector3 u(Vector3::Cross(f, s));

		Matrix4 result(1.0f);
		result.GetValue(0, 0) = s.x();
		result.GetValue(1, 0) = s.y();
		result.GetValue(2, 0) = s.z();
		result.GetValue(0, 1) = u.x();
		result.GetValue(1, 1) = u.y();
		result.GetValue(2, 1) = u.z();
		result.GetValue(0, 2) = f.x();
		result.GetValue(1, 2) = f.y();
		result.GetValue(2, 2) = f.z();
		result.GetValue(3, 0) = -Vector3::Dot(s, eye);
		result.GetValue(3, 1) = -Vector3::Dot(u, eye);
		result.GetValue(3, 2) = -Vector3::Dot(f, eye);

		return result;
	}

	Matrix4 Matrix4::Perspective(float fov, float aspect, float near, float far)
	{
		const float tanHalfFov = tan(fov / 2.0f);

		Matrix4 result(0.0f);

		result.GetValue(0, 0) = 1.0f	 / (aspect * tanHalfFov);
		result.GetValue(1, 1) = 1.0f / tanHalfFov;
		result.GetValue(2, 2) = (far + near) / (far - near);
		result.GetValue(2, 3) = 1.0f;
		result.GetValue(3, 2) = -(2.0f * far * near) / (far - near);

		return result;
	}

#pragma endregion 
}
