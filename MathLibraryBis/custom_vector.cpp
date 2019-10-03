#include "custom_vector.h"
#include <cmath>

namespace poke {
#pragma region Vector2
	Vector2::Vector2(float x, float y) : x(x), y(y) {}

	Vector2 Vector2::operator+(Vector2 const & v2)
	{
		return Vector2(this->x + v2.x, this->y + v2.y);
	}

	Vector2 Vector2::operator-(Vector2 const & v2)
	{
		return Vector2(this->x - v2.x, this->y - v2.y);
	}

	Vector2 Vector2::operator*(float const & value)
	{
		return Vector2(this->x * value, this->y * value);
	}

	Vector2 Vector2::operator/(float const & value)
	{
		return Vector2(this->x / value, this->y / value);
	}

	float Vector2::GetDistance(Vector2 & begin, Vector2 & end)
	{
		float newX = end.x - begin.x;
		float newY = end.y - begin.y;

		return sqrt(newX * newX + newY * newY);
	}

	float Vector2::GetDistanceManhattan(Vector2 & begin, Vector2 & end)
	{
		return abs(end.x - begin.x + end.y + begin.y);
	}
#pragma endregion 

#pragma region Vector3
	Vector3::Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

	Vector3 Vector3::operator+(Vector2 const & v2)
	{
		return Vector3(this->x + v2.x, this->y + v2.y, this->z);
	}

	Vector3 Vector3::operator+(Vector3 const & v3)
	{
		return Vector3(this->x + v3.x, this->y + v3.y, this->z + v3.z);
	}

	Vector3 Vector3::operator-(Vector2 const & v2)
	{
		return Vector3(this->x - v2.x, this->y - v2.y, this->z);
	}

	Vector3 Vector3::operator-(Vector3 const & v3)
	{
		return Vector3(this->x - v3.x, this->y - v3.y, this->z - v3.z);
	}

	Vector3 Vector3::operator*(float const & value)
	{
		return Vector3(this->x * value, this->y * value, this->z * value);
	}

	Vector3 Vector3::operator/(float const & value)
	{
		return Vector3(this->x / value, this->y / value, this->z / value);
	}

	float Vector3::GetMagnitude(Vector3 const & v3)
	{
		return sqrt(v3.x * v3.x + v3.y * v3.y + v3.z * v3.z);
	}

	Vector3 Vector3::Normalize(Vector3 const & v3)
	{
		float magnitude = GetMagnitude(v3);
		return Vector3(v3.x / magnitude, v3.y / magnitude, v3.z / magnitude);
	}

	Vector3 Vector3::Cross(Vector3 v1, Vector3 v2)
	{
		return Vector3(v1.y * v2.z - v1.z * v2.y, v1.z * v2.x - v1.x * v2.z, v1.x * v2.y - v1.y * v2.x);
	}

	float Vector3::GetDistance(Vector3 & begin, Vector3 & end)
	{
		return GetMagnitude(Vector3(end.x - begin.x, end.y - begin.y, end.z - begin.z));
	}

	float Vector3::GetDistanceManhattan(Vector3 & begin, Vector3 & end)
	{
		return abs(end.x - begin.x + end.y - begin.y + end.z - begin.z);
	}
#pragma endregion 

#pragma region Vector4
	Vector4::Vector4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}

	Vector4 Vector4::operator+(Vector2 const & v2)
	{
		return Vector4(this->x + v2.x, this->y + v2.y, this->z, this->w);
	}

	Vector4 Vector4::operator+(Vector3 const & v3)
	{
		return Vector4(this->x + v3.x, this->y + v3.y, this->z + v3.z, this->w);
	}

	Vector4 Vector4::operator+(Vector4 const & v4)
	{
		return Vector4(this->x + v4.x, this->y + v4.y, this->z + v4.z, this->w + v4.w);
	}


	Vector4 Vector4::operator-(Vector2 const & v2)
	{
		return Vector4(this->x - v2.x, this->y - v2.y, this->z, this->w);
	}

	Vector4 Vector4::operator-(Vector3 const & v3)
	{
		return Vector4(this->x - v3.x, this->y - v3.y, this->z - v3.z, this->w);
	}

	Vector4 Vector4::operator-(Vector4 const & v4)
	{
		return Vector4(this->x - v4.x, this->y - v4.y, this->z - v4.z, this->w - v4.w);
	}


	Vector4 Vector4::operator*(float const & value)
	{
		return Vector4(this->x * value, this->y * value, this->z * value, this->w * value);
	}

	Vector4 Vector4::operator/(float const & value)
	{
		return Vector4(this->x / value, this->y / value, this->z / value, this->w / value);
	}
#pragma endregion 
}
