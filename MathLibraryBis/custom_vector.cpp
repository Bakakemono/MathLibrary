#include "custom_vector.h"
#include <cmath>

namespace poke {
#pragma region Vector2
	Vector2::Vector2(float x, float y)
	{						
		vector_[0] = x;
		vector_[1] = y;
	}

	float& Vector2::x()
	{
		return vector_[0];
	}

	float& Vector2::y()
	{
		return vector_[1];
	}

	Vector2 Vector2::operator+(Vector2 v2)
	{
		return Vector2(x() + v2.x(), y() + v2.y());
	}

	void Vector2::operator+=(Vector2 v2)
	{
		vector_[0] += v2.x();
		vector_[1] += v2.y();
	}

	Vector2 Vector2::operator-(Vector2 v2)
	{
		return Vector2(x() - v2.x(), y() - v2.y());
	}

	void Vector2::operator-=(Vector2 v2)
	{
		vector_[0] -= v2.x();
		vector_[1] -= v2.y();
	}

	Vector2 Vector2::operator*(float const & value)
	{
		return Vector2(x() * value, y() * value);
	}

	void Vector2::operator*=(float const& value)
	{
		vector_[0] *= value;
		vector_[1] *= value;
	}

	Vector2 Vector2::operator/(float const & value)
	{
		return Vector2(x() / value, y() / value);
	}

	void Vector2::operator/=(float const& value)
	{
		vector_[0] /= value;
		vector_[1] /= value;
	}

	float Vector2::GetMagnitude()
	{
		return sqrt(x() * x() + y() * y());
	}

	Vector2 Vector2::Normalize()
	{
		return Vector2(x(), y()) / GetMagnitude();
	}

	float Vector2::Cross(Vector2 v1, Vector2 v2)
	{
		return (v1.x() * v2.y()) - (v1.y() * v2.x());
	}

	float Vector2::GetDistance(Vector2 begin, Vector2 end)
	{
		return (end - begin).GetMagnitude();
	}

	float Vector2::GetDistanceManhattan(Vector2 begin, Vector2 end)
	{
		return abs(end.x() - begin.x() + end.y() - begin.y());
	}
#pragma endregion 

#pragma region Vector3
	Vector3::Vector3(float x, float y, float z)
	{
		vector_[0] = x;
		vector_[1] = y;
		vector_[2] = z;
	}

	float& Vector3::x()
	{
		return vector_[0];
	}

	float& Vector3::y()
	{
		return vector_[1];
	}

	float& Vector3::z()
	{
		return vector_[2];
	}

	Vector3 Vector3::operator+(Vector2 v2)
	{
		return Vector3(x() + v2.x(), y() + v2.y(), z());
	}

	Vector3 Vector3::operator+(Vector3 v3)
	{
		return Vector3(x() + v3.x(), y() + v3.y(), z() + v3.z());
	}

	void Vector3::operator+=(Vector2 v2)
	{
		vector_[0] += v2.x();
		vector_[1] += v2.y();
	}

	void Vector3::operator+=(Vector3 v3)
	{
		vector_[0] += v3.x();
		vector_[1] += v3.y();
		vector_[2] += v3.z();
	}

	Vector3 Vector3::operator-(Vector2 v2)
	{
		return Vector3(x() - v2.x(), y() - v2.y(), z());
	}

	Vector3 Vector3::operator-(Vector3 v3)
	{
		return Vector3(x() - v3.x(), y() - v3.y(), z() - v3.z());
	}

	void Vector3::operator-=(Vector2 v2)
	{
		vector_[0] -= v2.x();
		vector_[1] -= v2.y();
	}

	void Vector3::operator-=(Vector3 v3)
	{
		vector_[0] -= v3.x();
		vector_[1] -= v3.y();
		vector_[2] -= v3.z();
	}

	Vector3 Vector3::operator*(float const& value)
	{
		return Vector3(x() * value, y() * value, z() * value);
	}

	void Vector3::operator*=(float const& value)
	{
		vector_[0] *= value;
		vector_[1] *= value;
		vector_[2] *= value;
	}

	Vector3 Vector3::operator/(float const & value)
	{
		return Vector3(x() / value, y() / value, z() / value);
	}

	void Vector3::operator/=(float const& value)
	{
		vector_[0] /= value;
		vector_[1] /= value;
		vector_[2] /= value;
	}

	float Vector3::GetMagnitude()
	{
		return sqrt(x() * x() + y() * y() + z() * z());
	}

	Vector3 Vector3::Normalize()
	{
		return Vector3(x(), y(), z()) / GetMagnitude();
	}

	Vector3 Vector3::Cross(Vector3 v1, Vector3 v2)
	{
		return Vector3(v1.y() * v2.z() - v1.z() * v2.y(), v1.z() * v2.x() - v1.x() * v2.z(), v1.x() * v2.y() - v1.y() * v2.x());
	}

	float Vector3::Dot(Vector3 v1, Vector3 v2)
	{
		return v1.x() * v2.x() + v1.y() * v2.y();
	}

	float Vector3::GetDistance(Vector3 begin, Vector3 end)
	{
		return (end - begin).GetMagnitude();
	}

	float Vector3::GetDistanceManhattan(Vector3 begin, Vector3 end)
	{
		return abs(end.x() - begin.x() + end.y() - begin.y() + end.z() - begin.z());
	}
#pragma endregion 

#pragma region Vector4
	Vector4::Vector4(float x, float y, float z, float w)
	{
		vector_[0] = x;
		vector_[1] = y;
		vector_[2] = z;
		vector_[3] = w;
	}

	Vector4::Vector4(std::array<float&, 4> newArray)
	{
		vector_[0] = newArray[0];
		vector_[1] = newArray[1];
		vector_[2] = newArray[2];
		vector_[3] = newArray[3];
	}

	float& Vector4::x()
	{
		return vector_[0];
	}

	float& Vector4::y()
	{
		return vector_[1];
	}

	float& Vector4::z()
	{
		return vector_[2];
	}

	float& Vector4::w()
	{
		return vector_[3];
	}

	Vector4 Vector4::operator+(Vector2 v2)
	{
		return Vector4(x() + v2.x(), y() + v2.y(), z(), w());
	}

	Vector4 Vector4::operator+(Vector3 v3)
	{
		return Vector4(x() + v3.x(), y() + v3.y(), z() + v3.z(), w());
	}

	Vector4 Vector4::operator+(Vector4 v4)
	{
		return Vector4(x() + v4.x(), y() + v4.y(), z() + v4.z(), w() + v4.w());
	}

	void Vector4::operator+=(Vector2 v2)
	{
		vector_[0] += v2.x();
		vector_[1] += v2.y();
	}
	
	void Vector4::operator+=(Vector3 v3)
	{
		vector_[0] += v3.x();
		vector_[1] += v3.y();
		vector_[2] += v3.z();
	}

	void Vector4::operator+=(Vector4 v4)
	{
		vector_[0] += v4.x();
		vector_[1] += v4.y();
		vector_[2] += v4.z();
		vector_[3] += v4.w();
	}

	Vector4 Vector4::operator-(Vector2 v2)
	{
		return Vector4(x() - v2.x(), y() - v2.y(), z(), w());
	}

	Vector4 Vector4::operator-(Vector3 v3)
	{
		return Vector4(x() - v3.x(), y() - v3.y(), z() - v3.z(), w());
	}

	Vector4 Vector4::operator-(Vector4 v4)
	{
		return Vector4(x() - v4.x(), y() - v4.y(), z() - v4.z(), w() - v4.w());
	}

	void Vector4::operator-=(Vector2 v2)
	{
		vector_[0] -= v2.x();
		vector_[1] -= v2.y();
	}
	
	void Vector4::operator-=(Vector3 v3)
	{
		vector_[0] -= v3.x();
		vector_[1] -= v3.y();
		vector_[2] -= v3.z();
	}

	void Vector4::operator-=(Vector4 v4)
	{
		vector_[0] -= v4.x();
		vector_[1] -= v4.y();
		vector_[2] -= v4.z();
		vector_[3] -= v4.w();
	}


	Vector4 Vector4::operator*(float const & value)
	{
		return Vector4(x() * value, y() * value, z() * value, w() * value);
	}

	void Vector4::operator*=(float const& value)
	{
		vector_[0] *= value;
		vector_[1] *= value;
		vector_[2] *= value;
		vector_[3] *= value;
	}

	Vector4 Vector4::operator/(float const & value)
	{
		return Vector4(x() / value, y() / value, z() / value, w() / value);
	}

	void Vector4::operator/=(float const& value)
	{
		vector_[0] /= value;
		vector_[1] /= value;
		vector_[2] /= value;
		vector_[3] /= value;
	}
#pragma endregion
	

#pragma region Vector2Int
	Vector2Int::Vector2Int(int x, int y)
	{
		vector_[0] = x;
		vector_[1] = y;
	}

	int& Vector2Int::x()
	{
		return vector_[0];
	}

	int& Vector2Int::y()
	{
		return vector_[1];
	}

	Vector2Int Vector2Int::operator+(Vector2Int v2)
	{
		return Vector2Int(x() + v2.x(), y() + v2.y());
	}

	void Vector2Int::operator+=(Vector2Int v2)
	{
		vector_[0] += v2.x();
		vector_[1] += v2.y();
	}

	Vector2Int Vector2Int::operator-(Vector2Int v2)
	{
		return Vector2Int(x() - v2.x(), y() - v2.y());
	}

	void Vector2Int::operator-=(Vector2Int v2)
	{
		vector_[0] -= v2.x();
		vector_[1] -= v2.y();
	}

	Vector2 Vector2Int::operator*(float const & value)
	{
		return Vector2(x() * value, y() * value);
	}

	void Vector2Int::operator*=(int const& value)
	{
		vector_[0] *= value;
		vector_[1] *= value;
	}

	Vector2 Vector2Int::operator/(float const & value)
	{
		return Vector2(x() / value, y() / value);
	}

	void Vector2Int::operator/=(int const& value)
	{
		vector_[0] /= value;
		vector_[1] /= value;
	}

	float Vector2Int::GetMagnitude()
	{
		return sqrt(x() * x() + y() * y());
	}
	
	Vector2 Vector2Int::Normalize()
	{
		return Vector2(x(), y()) / GetMagnitude();
	}
	
	int Vector2Int::Cross(Vector2Int v1, Vector2Int v2)
	{
		return (v1.x() * v2.y()) - (v1.y() * v2.x());
	}
	
	float Vector2Int::GetDistance(Vector2Int begin, Vector2Int end)
	{
		return (end - begin).GetMagnitude();
	}
	
	int Vector2Int::GetDistanceManhattan(Vector2Int begin, Vector2Int end)
	{
		int result = end.x() - begin.x() + end.y() - begin.y();
		if (result < 0)
			result *= -1;
		return result;
	}
#pragma endregion 

#pragma region Vector3Int
	Vector3Int::Vector3Int(int x, int y, int z)
	{
		vector_[0] = x;
		vector_[1] = y;
		vector_[2] = z;
	}

	int& Vector3Int::x()
	{
		return vector_[0];
	}

	int& Vector3Int::y()
	{
		return vector_[1];
	}

	int& Vector3Int::z()
	{
		return vector_[2];
	}

	Vector3Int Vector3Int::operator+(Vector2Int v2)
	{
		return Vector3Int(x() + v2.x(), y() + v2.y(), z());
	}

	Vector3Int Vector3Int::operator+(Vector3Int v3)
	{
		return Vector3Int(x() + v3.x(), y() + v3.y(), z() + v3.y());
	}

	void Vector3Int::operator+=(Vector2Int v2)
	{
		vector_[0] += v2.x();
		vector_[1] += v2.y();
	}

	void Vector3Int::operator+=(Vector3Int v3)
	{
		vector_[0] += v3.x();
		vector_[1] += v3.y();
		vector_[2] += v3.z();
	}

	Vector3Int Vector3Int::operator-(Vector2Int v2)
	{
		return Vector3Int(x() - v2.x(), y() - v2.y(), z());
	}

	Vector3Int Vector3Int::operator-(Vector3Int v3)
	{
		return Vector3Int(x() - v3.x(), y() - v3.y(), z() - v3.y());
	}

	void Vector3Int::operator-=(Vector2Int v2)
	{
		vector_[0] -= v2.x();
		vector_[1] -= v2.y();
	}

	void Vector3Int::operator-=(Vector3Int v3)
	{
		vector_[0] -= v3.x();
		vector_[1] -= v3.y();
		vector_[2] -= v3.z();
	}

	Vector3 Vector3Int::operator*(float const& value)
	{
		return Vector3(x() * value, y() * value, z() * value);
	}

	void Vector3Int::operator*=(int const& value)
	{
		vector_[0] *= value;
		vector_[1] *= value;
		vector_[2] *= value;
	}

	Vector3 Vector3Int::operator/(float const& value)
	{
		return Vector3(x() / value, y() / value, z() / value);
	}

	void Vector3Int::operator/=(int const& value)
	{
		vector_[0] /= value;
		vector_[1] /= value;
		vector_[2] /= value;
	}

	float Vector3Int::GetMagnitude()
	{
		return sqrt(x() * x() + y() * y() + z() * z());
	}

	Vector3 Vector3Int::Normalize()
	{
		return Vector3(x(), y(), z()) / GetMagnitude();
	}
	
	Vector3Int Vector3Int::Cross(Vector3Int v1, Vector3Int v2)
	{
		return Vector3Int(v1.y() * v2.z() - v1.z() * v2.y(), v1.z() * v2.x() - v1.x() * v2.z(), v1.x() * v2.y() - v1.y() * v2.x());
	}
	
	float Vector3Int::GetDistance(Vector3Int begin, Vector3Int end)
	{
		return (end - begin).GetMagnitude();
	}
	
	int Vector3Int::GetDistanceManhattan(Vector3Int begin, Vector3Int end)
	{
		int result = end.x() - begin.x() + end.y() - begin.y() + end.z() - begin.z();
		if (result < 0)
			result *= -1;
		return result;
	}

#pragma endregion 

#pragma region Vector4Int
	Vector4Int::Vector4Int(int x, int y, int z, int w)
	{
		vector_[0] = x;
		vector_[1] = y;
		vector_[2] = z;
		vector_[3] = w;

	}

	int& Vector4Int::x()
	{
		return vector_[0];
	}

	int& Vector4Int::y()
	{
		return vector_[1];
	}

	int& Vector4Int::z()
	{
		return vector_[2];
	}

	int& Vector4Int::w()
	{
		return vector_[3];
	}

	Vector4Int Vector4Int::operator+(Vector2Int v2)
	{
		return Vector4Int(x() + v2.x(), y() + y(), z(), w());
	}
	
	Vector4Int Vector4Int::operator+(Vector3Int v3)
	{
		return Vector4Int(x() + v3.x(), y() + v3.y(), z() + v3.z(), w());
	}
	
	Vector4Int Vector4Int::operator+(Vector4Int v4)
	{
		return Vector4Int(x() + v4.x(), y() + v4.y(), z() + v4.z(), w() + v4.w());
	}

	void Vector4Int::operator+=(Vector2Int v2)
	{
		vector_[0] += v2.x();
		vector_[1] += v2.y();
	}

	void Vector4Int::operator+=(Vector3Int v3)
	{
		vector_[0] += v3.x();
		vector_[1] += v3.y();
		vector_[2] += v3.z();
	}

	void Vector4Int::operator+=(Vector4Int v4)
	{
		vector_[0] += v4.x();
		vector_[1] += v4.y();
		vector_[2] += v4.z();
		vector_[3] += v4.w();
	}

	Vector4Int Vector4Int::operator-(Vector2Int v2)
	{
		return Vector4Int(x() - v2.x(), y() - v2.y(), z(), w());
	}
	
	Vector4Int Vector4Int::operator-(Vector3Int v3)
	{
		return Vector4Int(x() - v3.x(), y() - v3.y(), z() - v3.z(), w());
	}
	
	Vector4Int Vector4Int::operator-(Vector4Int v4)
	{
		return Vector4Int(x() - v4.x(), y() - v4.y(), z() - v4.z(), w() - v4.w());
	}

	void Vector4Int::operator-=(Vector2Int v2)
	{
		vector_[0] -= v2.x();
		vector_[1] -= v2.y();
	}

	void Vector4Int::operator-=(Vector3Int v3)
	{
		vector_[0] -= v3.x();
		vector_[1] -= v3.y();
		vector_[2] -= v3.z();
	}

	void Vector4Int::operator-=(Vector4Int v4)
	{
		vector_[0] -= v4.x();
		vector_[1] -= v4.y();
		vector_[2] -= v4.z();
		vector_[3] -= v4.w();
	}

	Vector4 Vector4Int::operator*(float const & value)
	{
		return Vector4(x() * value, y() * value, z() * value, w() * value);
	}

	void Vector4Int::operator*=(int const& value)
	{
		vector_[0] *= value;
		vector_[1] *= value;
		vector_[2] *= value;
		vector_[3] *= value;
	}

	Vector4 Vector4Int::operator/(float const & value)
	{
		return Vector4(x() / value, y() / value, z() / value, w() / value);
	}

	void Vector4Int::operator/=(int const& value)
	{
		vector_[0] /= value;
		vector_[1] /= value;
		vector_[2] /= value;
		vector_[3] /= value;
	}
#pragma endregion


#pragma region Vector2Short
	Vector2Short::Vector2Short(short x, short y)
	{
		vector_[0] = x;
		vector_[1] = y;
	}

	short& Vector2Short::x()
	{
		return vector_[0];
	}

	short& Vector2Short::y()
	{
		return vector_[1];
	}

	Vector2Short Vector2Short::operator+(Vector2Short v2)
	{
		return Vector2Short(x() + v2.x(), y() + v2.y());
	}

	void Vector2Short::operator+=(Vector2Short v2)
	{
		vector_[0] += v2.x();
		vector_[1] += v2.y();
	}

	Vector2Short Vector2Short::operator-(Vector2Short v2)
	{
		return Vector2Short(x() - v2.x(), y() - v2.y());
	}

	void Vector2Short::operator-=(Vector2Short v2)
	{
		vector_[0] -= v2.x();
		vector_[1] -= v2.y();
	}

	Vector2 Vector2Short::operator*(float const & value)
	{
		return Vector2(x() * value, y() * value);
	}

	void Vector2Short::operator*=(short const& value)
	{
		vector_[0] *= value;
		vector_[1] *= value;
	}

	Vector2 Vector2Short::operator/(float const & value)
	{
		return Vector2(x() / value, y() / value);
	}

	void Vector2Short::operator/=(short const& value)
	{
		vector_[0] /= value;
		vector_[1] /= value;
	}

	float Vector2Short::GetMagnitude()
	{
		return sqrt(x() * x() + y() * y());
	}
	
	Vector2 Vector2Short::Normalize()
	{
		return Vector2(x(), y()) / GetMagnitude();
	}
	
	short Vector2Short::Cross(Vector2Short v1, Vector2Short v2)
	{
		return (v1.x() * v2.y()) - (v1.y() * v2.x());
	}

	float Vector2Short::GetDistance(Vector2Short begin, Vector2Short end)
	{
		return (end - begin).GetMagnitude();
	}
	
	float Vector2Short::GetDistanceManhattan(Vector2Short begin, Vector2Short end)
	{
		short result = end.x() - begin.x() + end.y() - begin.y();
		if (result < 0)
			result *= -1;
		return result;
	}
#pragma endregion 

#pragma region Vector3Short
	Vector3Short::Vector3Short(short x, short y, short z)
	{
		vector_[0] = x;
		vector_[1] = y;
		vector_[2] = z;
	}

	short& Vector3Short::x()
	{
		return vector_[0];
	}

	short& Vector3Short::y()
	{
		return vector_[1];
	}

	short& Vector3Short::z()
	{
		return vector_[2];
	}

	Vector3Short Vector3Short::operator+(Vector2Short v2)
	{
		return Vector3Short(x() + v2.x(), y() + v2.y(), z());
	}

	Vector3Short Vector3Short::operator+(Vector3Short v3)
	{
		return Vector3Short(x() + v3.x(), y() + v3.y(), z() + v3.z());
	}

	void Vector3Short::operator+=(Vector2Short v2)
	{
		vector_[0] += v2.x();
		vector_[1] += v2.y();
	}

	void Vector3Short::operator+=(Vector3Short v3)
	{
		vector_[0] += v3.x();
		vector_[1] += v3.y();
		vector_[2] += v3.z();
	}

	Vector3Short Vector3Short::operator-(Vector2Short v2)
	{
		return Vector3Short(x() - v2.x(), y() - v2.y(), z());
	}

	Vector3Short Vector3Short::operator-(Vector3Short v3)
	{
		return Vector3Short(x() - v3.x(), y() - v3.y(), z() - v3.z());
	}

	void Vector3Short::operator-=(Vector2Short v2)
	{
		vector_[0] -= v2.x();
		vector_[1] -= v2.y();
	}

	void Vector3Short::operator-=(Vector3Short v3)
	{
		vector_[0] -= v3.x();
		vector_[1] -= v3.y();
		vector_[2] -= v3.z();
	}

	Vector3 Vector3Short::operator*(float const & value)
	{
		return Vector3(x() * value, y() * value, z() * value);
	}

	void Vector3Short::operator*=(short const& value)
	{
		vector_[0] *= value;
		vector_[1] *= value;
		vector_[2] *= value;
	}

	Vector3 Vector3Short::operator/(float const & value)
	{
		return Vector3(x() / value, y() / value, z() / value);
	}

	void Vector3Short::operator/=(short const& value)
	{
		vector_[0] /= value;
		vector_[1] /= value;
		vector_[2] /= value;
	}

	float Vector3Short::GetMagnitude()
	{
		return sqrt(x() * x() + y() * y() + z() * z());
	}

	Vector3 Vector3Short::Normalize()
	{
		return Vector3(x(), y(), z()) / GetMagnitude();
	}

	Vector3Short Vector3Short::Cross(Vector3Short v1, Vector3Short v2)
	{
		return Vector3Short(v1.y() * v2.z() - v1.z() * v2.y(), v1.z() * v2.x() - v1.x() * v2.z(), v1.x() * v2.y() - v1.y() * v2.x());
	}

	float Vector3Short::GetDistance(Vector3Short begin, Vector3Short end)
	{
		return (end - begin).GetMagnitude();
	}

	short Vector3Short::GetDistanceManhattan(Vector3Short begin, Vector3Short end)
	{
		short result = end.x() - begin.x() + end.y() - begin.y() + end.z() - begin.z();
		if (result < 0)
			result *= -1;
		return result;
	}
#pragma endregion 

#pragma region Vector4Short
	Vector4Short::Vector4Short(short x, short y, short z, short w)
	{
		vector_[0] = x;
		vector_[1] = y;
		vector_[2] = z;
		vector_[3] = w;
	}

	short& Vector4Short::x()
	{
		return vector_[0];
	}

	short& Vector4Short::y()
	{
		return vector_[1];
	}

	short& Vector4Short::z()
	{
		return vector_[2];
	}

	short& Vector4Short::w()
	{
		return vector_[3];
	}

	Vector4Short Vector4Short::operator+(Vector2Short v2)
	{
		return Vector4Short(x() + v2.x(), y() + v2.y(), z(), w());
	}

	Vector4Short Vector4Short::operator+(Vector3Short v3)
	{
		return Vector4Short(x() + v3.x(), y() + v3.y(), z() + v3.z(), w());
	}
	 
	Vector4Short Vector4Short::operator+(Vector4Short v4)
	{
		return Vector4Short(x() + v4.x(), y() + v4.y(), z() + v4.z(), w() + v4.w());
	}

	void Vector4Short::operator+=(Vector2Short v2)
	{
		vector_[0] += v2.x();
		vector_[1] += v2.y();
	}

	void Vector4Short::operator+=(Vector3Short v3)
	{
		vector_[0] += v3.x();
		vector_[1] += v3.y();
		vector_[2] += v3.z();
	}

	void Vector4Short::operator+=(Vector4Short v4)
	{
		vector_[0] += v4.x();
		vector_[1] += v4.y();
		vector_[2] += v4.z();
		vector_[3] += v4.w();
	}

	Vector4Short Vector4Short::operator-(Vector2Short v2)
	{
		return Vector4Short(x() - v2.x(), y() - v2.y(), z(), w());
	}

	Vector4Short Vector4Short::operator-(Vector3Short v3)
	{
		return Vector4Short(x() - v3.x(), y() - v3.y(), z() - v3.z(), w());
	}

	Vector4Short Vector4Short::operator-(Vector4Short v4)
	{
		return Vector4Short(x() - v4.x(), y() - v4.y(), z() - v4.z(), w() - v4.w());
	}

	void Vector4Short::operator-=(Vector2Short v2)
	{
		vector_[0] -= v2.x();
		vector_[1] -= v2.y();
	}

	void Vector4Short::operator-=(Vector3Short v3)
	{
		vector_[0] -= v3.x();
		vector_[1] -= v3.y();
		vector_[2] -= v3.z();
	}

	void Vector4Short::operator-=(Vector4Short v4)
	{
		vector_[0] -= v4.x();
		vector_[1] -= v4.y();
		vector_[2] -= v4.z();
		vector_[3] -= v4.w();

	}

	Vector4 Vector4Short::operator*(float const & value)
	{
		return Vector4(x() * value, y() * value, z() * value, w() * value);
	}

	void Vector4Short::operator*=(short const& value)
	{
		vector_[0] *= value;
		vector_[1] *= value;
		vector_[2] *= value;
		vector_[3] *= value;
	}

	Vector4 Vector4Short::operator/(float const & value)
	{
		return Vector4(x() / value, y() / value, z() / value, w() / value);
	}

	void Vector4Short::operator/=(short const& value)
	{
		vector_[0] /= value;
		vector_[1] /= value;
		vector_[2] /= value;
		vector_[3] /= value;
	}


#pragma endregion 
}
