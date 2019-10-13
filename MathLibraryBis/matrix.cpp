#include "matrix.h"

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
			v1.x, v1.y, // column 1
			v2.x, v2.y  // column 2
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
			v1.x, v1.y, v1.z, // column 1

			v2.x, v2.y, v2.z, // column 2

			v3.x, v3.y, v3.z  // column 3
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
		this->matrix = {
			value, value, value, value, // column 1
			value, value, value, value, // column 2
			value, value, value, value, // column 3
			value, value, value, value  // column 4
		};
	}

	Matrix4::Matrix4(std::array<float, 16> const newMatrix)
	{
		matrix = newMatrix;
	}

	Matrix4::Matrix4(poke::Vector4 v1, poke::Vector4 v2, poke::Vector4 v3, poke::Vector4 v4)
	{
		matrix = {
			v1.x, v1.y, v1.z, v1.w, // column 1
								
			v2.x, v2.y, v2.z, v2.w, // column 2
								   
			v3.x, v3.y, v3.z, v3.w, // column 3
								   
			v4.x, v4.y, v4.z, v4.w  // column 4
		};						   
	}							   
								   
	float& Matrix4::operator[](int index)
	{
		return &matrix[index];
	}

	Matrix4 Matrix4::operator*(Matrix4& matrix4)
	{
		float i = matrix4[1][1];
		return Matrix4({
			matrix[0] * matrix4[0][0] + matrix[4] * matrix4[0][1] + matrix[8]  * matrix4[0][2] + matrix[12] * matrix4[0][3], // column 1
			matrix[1] * matrix4[0][0] + matrix[5] * matrix4[0][1] + matrix[9]  * matrix4[0][2] + matrix[13] * matrix4[0][3],
			matrix[2] * matrix4[0][0] + matrix[6] * matrix4[0][1] + matrix[10] * matrix4[0][2] + matrix[14] * matrix4[0][3],
			matrix[3] * matrix4[0][0] + matrix[7] * matrix4[0][1] + matrix[11] * matrix4[0][2] + matrix[15] * matrix4[0][3],
						  					  							   							 
			matrix[0] * matrix4[1][0] + matrix[4] * matrix4[1][1] + matrix[8]  * matrix4[1][2] + matrix[12] * matrix4[1][3], // column 2
			matrix[1] * matrix4[1][0] + matrix[5] * matrix4[1][1] + matrix[9]  * matrix4[1][2] + matrix[13] * matrix4[1][3],
			matrix[2] * matrix4[1][0] + matrix[6] * matrix4[1][1] + matrix[10] * matrix4[1][2] + matrix[14] * matrix4[1][3],
			matrix[3] * matrix4[1][0] + matrix[7] * matrix4[1][1] + matrix[11] * matrix4[1][2] + matrix[15] * matrix4[1][3],
					 						   							   							 
			matrix[0] * matrix4[2][0] + matrix[4] * matrix4[2][1] + matrix[8]  * matrix4[2][2] + matrix[12] * matrix4[2][3], // column 3
			matrix[1] * matrix4[2][0] + matrix[5] * matrix4[2][1] + matrix[9]  * matrix4[2][2] + matrix[13] * matrix4[2][3],
			matrix[2] * matrix4[2][0] + matrix[6] * matrix4[2][1] + matrix[10] * matrix4[2][2] + matrix[14] * matrix4[2][3],
			matrix[3] * matrix4[2][0] + matrix[7] * matrix4[2][1] + matrix[11] * matrix4[2][2] + matrix[15] * matrix4[2][3],
												 						   							 
			matrix[0] * matrix4[3][0] + matrix[4] * matrix4[3][1] + matrix[8]  * matrix4[3][2] + matrix[12] * matrix4[3][3], // column 4
			matrix[1] * matrix4[3][0] + matrix[5] * matrix4[3][1] + matrix[9]  * matrix4[3][2] + matrix[13] * matrix4[3][3],
			matrix[2] * matrix4[3][0] + matrix[6] * matrix4[3][1] + matrix[10] * matrix4[3][2] + matrix[14] * matrix4[3][3],
			matrix[3] * matrix4[3][0] + matrix[7] * matrix4[3][1] + matrix[11] * matrix4[3][2] + matrix[15] * matrix4[3][3],
			}																									 
		);
	}

	Matrix4 Matrix4::Rotate(Matrix4 modelMatrix, const float angle, Vector3 axis)
	{
		float angleCos = cos(angle);
		float angleSin = sin(angle);

		Vector3 axisNorma = axis.Normalize();
		Vector3 temp = axis * (1.0f - angleCos);

		Matrix4 rotate(0.0f);

		*rotate[0][0] = angleCos + temp.x * axis.x;
		*rotate[0][1] = temp.x * axis.y + angleSin * axis.z;
		*rotate[0][2] = temp.x * axis.z - angleSin * axis.z;
		
		*rotate[1][0] = temp.y * axis.x - angleSin * axis.z;
		*rotate[1][1] = angleCos + temp.y * axis.y;
		*rotate[1][2] = temp.y * axis.z + angleSin * axis.x;
		
		*rotate[2][0] = temp.z * axis.x + angleSin * axis.y;
		*rotate[2][1] = temp.z * axis.y - angleSin * axis.x;
		*rotate[2][2] = angleSin + temp.z * axis.z;

		Matrix4 result(0);

		result[0] = modelMatrix[0] * rotate[0][0] + modelMatrix[1] * rotate[0][1] + modelMatrix[2] * rotate[0][2];
		result[1] = modelMatrix[0] * rotate[1][0] + modelMatrix[1] * rotate[1][1] + modelMatrix[2] * rotate[1][2];
		result[2] = modelMatrix[0] * rotate[2][0] + modelMatrix[1] * rotate[2][1] + modelMatrix[2] * rotate[2][2];
		result[3] = modelMatrix[3];

		return result;
	}

#pragma endregion 
}
