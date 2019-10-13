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

	float Vector2::GetMagnitude() const
	{
		return sqrt(this->x * this->x + this->y * this->y);
	}

	Vector2 Vector2::Normalize()
	{
		const float magnitude = this->GetMagnitude();

		return Vector2(this->x, this->y) / this->GetMagnitude();
	}

	float Vector2::Cross(Vector2 const & v1, Vector2 const & v2)
	{
		return (v1.x * v2.y) - (v1.y * v2.x);
	}

	float Vector2::GetDistance(Vector2 & begin, Vector2 & end)
	{
		return (end - begin).GetMagnitude();
	}

	float Vector2::GetDistanceManhattan(Vector2 & begin, Vector2 & end)
	{
		return abs(end.x - begin.x + end.y - begin.y);
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

	float Vector3::GetMagnitude() const
	{
		return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
	}

	Vector3 Vector3::Normalize() const
	{
		return Vector3(this->x, this->y, this->z) / this->GetMagnitude();
	}

	Vector3 Vector3::Cross(Vector3 v1, Vector3 v2)
	{
		return Vector3(v1.y * v2.z - v1.z * v2.y, v1.z * v2.x - v1.x * v2.z, v1.x * v2.y - v1.y * v2.x);
	}

	float Vector3::GetDistance(Vector3 & begin, Vector3 & end)
	{
		return (end - begin).GetMagnitude();
	}

	float Vector3::GetDistanceManhattan(Vector3 & begin, Vector3 & end)
	{
		return abs(end.x - begin.x + end.y - begin.y + end.z - begin.z);
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

	Vector4 Vector4::operator+(Vector2& v2)
	{
		return Vector4(this->x() + v2.x, this->y() + v2.y, this->z(), this->w());
	}

	Vector4 Vector4::operator+(Vector3& v3)
	{
		return Vector4(this->x() + v3.x, this->y() + v3.y, this->z() + v3.z, this->w());
	}

	Vector4 Vector4::operator+(Vector4& v4)
	{
		return Vector4(this->x() + v4.x(), this->y() + v4.y(), this->z() + v4.z(), this->w() + v4.w());
	}


	Vector4 Vector4::operator-(Vector2& v2)
	{
		return Vector4(this->x() - v2.x, this->y() - v2.y, this->z(), this->w());
	}

	Vector4 Vector4::operator-(Vector3& v3)
	{
		return Vector4(this->x() - v3.x, this->y() - v3.y, this->z() - v3.z, this->w());
	}

	Vector4 Vector4::operator-(Vector4& v4)
	{
		return Vector4(this->x() - v4.x(), this->y() - v4.y(), this->z() - v4.z(), this->w() - v4.w());
	}


	Vector4 Vector4::operator*(float const & value)
	{
		return Vector4(this->x() * value, this->y() * value, this->z() * value, this->w() * value);
	}

	Vector4 Vector4::operator/(float const & value)
	{
		return Vector4(this->x() / value, this->y() / value, this->z() / value, this->w() / value);
	}
#pragma endregion
	

#pragma region Vector2Int
	Vector2Int::Vector2Int(int x, int y) : x(x), y(y) {}

	Vector2Int Vector2Int::operator+(Vector2Int const & v2)
	{
		return Vector2Int(this->x + v2.x, this->y + v2.y);
	}
	Vector2Int Vector2Int::operator-(Vector2Int const & v2)
	{
		return Vector2Int(this->x - v2.x, this->y - v2.y);
	}
	Vector2 Vector2Int::operator*(float const & value)
	{
		return Vector2(this->x * value, this->y * value);
	}
	Vector2 Vector2Int::operator/(float const & value)
	{
		return Vector2(this->x / value, this->y / value);
	}
	float Vector2Int::GetMagnitude() const
	{
		return sqrt(this->x * this->x + this->y * this->y);
	}
	Vector2 Vector2Int::Normalize()
	{
		const float magnitude = this->GetMagnitude();

		return Vector2(this->x / magnitude, this->y / magnitude);
	}
	int Vector2Int::Cross(Vector2Int const & v1, Vector2Int const & v2)
	{
		return (v1.x * v2.y) - (v1.y * v2.x);
	}
	float Vector2Int::GetDistance(Vector2Int & begin, Vector2Int & end)
	{
		return (end - begin).GetMagnitude();
	}
	int Vector2Int::GetDistanceManhattan(Vector2Int & begin, Vector2Int & end)
	{
		return abs(end.x - begin.x + end.y - begin.y);
	}
#pragma endregion 

#pragma region Vector3Int
	Vector3Int::Vector3Int(int x, int y, int z) : x(x), y(y), z(z) {}

	Vector3Int Vector3Int::operator+(Vector2Int const& v2)
	{
		return Vector3Int(this->x + v2.x, this->y + v2.y, this->z);
	}

	Vector3Int Vector3Int::operator+(Vector3Int const& v3)
	{
		return Vector3Int(this->x + v3.x, this->y + v3.y, this->z + v3.y);
	}

	Vector3Int Vector3Int::operator-(Vector2Int const& v2)
	{
		return Vector3Int(this->x - v2.x, this->y - v2.y, this->z);
	}

	Vector3Int Vector3Int::operator-(Vector3Int const& v3)
	{
		return Vector3Int(this->x - v3.x, this->y - v3.y, this->z - v3.y);
	}

	Vector3 Vector3Int::operator*(float const& value)
	{
		return Vector3(this->x * value, this->y * value, this->z * value);
	}

	Vector3 Vector3Int::operator/(float const& value)
	{
		return Vector3(this->x / value, this->y / value, this->z / value);
	}

	float Vector3Int::GetMagnitude() const
	{
		return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
	}

	Vector3 Vector3Int::Normalize() const
	{
		float magnitude = this->GetMagnitude();

		return Vector3(this->x / magnitude, this->y / magnitude, this->z / magnitude);
	}
	Vector3Int Vector3Int::Cross(Vector3Int v1, Vector3Int v2)
	{
		return Vector3Int(v1.y * v2.z - v1.z * v2.y, v1.z * v2.x - v1.x * v2.z, v1.x * v2.y - v1.y * v2.x);
	}
	float Vector3Int::GetDistance(Vector3Int & begin, Vector3Int & end)
	{
		return (end - begin).GetMagnitude();
	}
	int Vector3Int::GetDistanceManhattan(Vector3Int & begin, Vector3Int & end)
	{
		return abs(end.x - begin.x + end.y - begin.y + end.z - begin.z);
	}

#pragma endregion 

#pragma region Vector4Int
	Vector4Int::Vector4Int(int x, int y, int z, int w) : x(x), y(y), z(z), w(w)	{}

	Vector4Int Vector4Int::operator+(Vector2Int const& v2)
	{
		return Vector4Int(this->x + v2.x, this->y + v2.y, this->z, this->w);
	}
	Vector4Int Vector4Int::operator+(Vector3Int const & v3)
	{
		return Vector4Int(this->x + v3.x, this->y + v3.y, this->z + v3.z, this->w);
	}
	Vector4Int Vector4Int::operator+(Vector4Int const & v4)
	{
		return Vector4Int(this->x + v4.x, this->y + v4.y, this->z + v4.z, this->w + v4.w);
	}
	Vector4Int Vector4Int::operator-(Vector2Int const & v2)
	{
		return Vector4Int(this->x - v2.x, this->y - v2.y, this->z, this->w);
	}
	Vector4Int Vector4Int::operator-(Vector3Int const & v3)
	{
		return Vector4Int(this->x - v3.x, this->y - v3.y, this->z - v3.z, this->w);
	}
	Vector4Int Vector4Int::operator-(Vector4Int const & v4)
	{
		return Vector4Int(this->x - v4.x, this->y - v4.y, this->z - v4.z, this->w - v4.w);
	}
	Vector4 Vector4Int::operator*(float const & value)
	{
		return Vector4(this->x * value, this->y * value, this->z * value, this->w * value);
	}
	Vector4 Vector4Int::operator/(float const & value)
	{
		return Vector4(this->x / value, this->y / value, this->z / value, this->w / value);
	}
#pragma endregion


#pragma region Vector2Short
	Vector2Short::Vector2Short(short x, short y) : x(x), y(y) {}

	Vector2Short Vector2Short::operator+(Vector2Short const & v2)
	{
		return Vector2Short(this->x + v2.x, this->y + v2.y);
	}
	Vector2Short Vector2Short::operator-(Vector2Short const & v2)
	{
		return Vector2Short(this->x - v2.x, this->y - v2.y);
	}
	Vector2 Vector2Short::operator*(float const & value)
	{
		return Vector2(this->x * value, this->y * value);
	}
	Vector2 Vector2Short::operator/(float const & value)
	{
		return Vector2(this->x / value, this->y / value);
	}
	float Vector2Short::GetMagnitude() const
	{
		return sqrt(this->x * this->x + this->y * this->y);
	}
	Vector2 Vector2Short::Normalize()
	{
		return Vector2(this->x, this->y) / this->GetMagnitude();
	}
	short Vector2Short::Cross(Vector2Short const & v1, Vector2Short const & v2)
	{
		return (v1.x * v2.y) - (v1.y * v2.x);
	}
	float Vector2Short::GetDistance(Vector2Short & begin, Vector2Short & end)
	{
		return (end - begin).GetMagnitude();
	}
	float Vector2Short::GetDistanceManhattan(Vector2Short & begin, Vector2Short & end)
	{
		return abs(end.x - begin.x + end.y - begin.y);
	}
#pragma endregion 

#pragma region Vector3Short
	Vector3Short::Vector3Short(short x, short y, short z) : x(x), y(y), z(z) {}

	Vector3Short Vector3Short::operator+(Vector2Short const & v2)
	{
		return Vector3Short(this->x + v2.x, this->y + v2.y, this->z);
	}

	Vector3Short Vector3Short::operator+(Vector3Short const & v3)
	{
		return Vector3Short(this->x + v3.x, this->y + v3.y, this->z + v3.z);
	}

	Vector3Short Vector3Short::operator-(Vector2Short const & v2)
	{
		return Vector3Short(this->x - v2.x, this->y - v2.y, this->z);
	}

	Vector3Short Vector3Short::operator-(Vector3Short const & v3)
	{
		return Vector3Short(this->x - v3.x, this->y - v3.y, this->z - v3.z);
	}

	Vector3 Vector3Short::operator*(float const & value)
	{
		return Vector3(this->x * value, this->y * value, this->z * value);
	}

	Vector3 Vector3Short::operator/(float const & value)
	{
		return Vector3(this->x / value, this->y / value, this->z / value);
	}

	float Vector3Short::GetMagnitude() const
	{
		return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
	}

	Vector3 Vector3Short::Normalize() const
	{
		return Vector3(this->x, this->y, this->z) / this->GetMagnitude();
	}

	Vector3Short Vector3Short::Cross(Vector3Short v1, Vector3Short v2)
	{
		return Vector3Short(v1.y * v2.z - v1.z * v2.y, v1.z * v2.x - v1.x * v2.z, v1.x * v2.y - v1.y * v2.x);
	}

	float Vector3Short::GetDistance(Vector3Short & begin, Vector3Short & end)
	{
		return (end - begin).GetMagnitude();
	}

	short Vector3Short::GetDistanceManhattan(Vector3Short & begin, Vector3Short & end)
	{
		return abs(end.x - begin.x + end.y - begin.y + end.z - begin.z);
	}
#pragma endregion 

#pragma region Vector4Short
	Vector4Short::Vector4Short(short x, short y, short z, short w) : x(x), y(y), z(z), w(w) {}

	Vector4Short Vector4Short::operator+(Vector2Short const & v2)
	{
		return Vector4Short(this->x + v2.x, this->y + v2.y, this->z, this->w);
	}

	Vector4Short Vector4Short::operator+(Vector3Short const & v3)
	{
		return Vector4Short(this->x + v3.x, this->y + v3.y, this->z + v3.z, this->w);
	}
	 
	Vector4Short Vector4Short::operator+(Vector4Short const & v4)
	{
		return Vector4Short(this->x + v4.x, this->y + v4.y, this->z + v4.z, this->w + v4.w);
	}

	Vector4Short Vector4Short::operator-(Vector2Short const & v2)
	{
		return Vector4Short(this->x - v2.x, this->y - v2.y, this->z, this->w);
	}

	Vector4Short Vector4Short::operator-(Vector3Short const & v3)
	{
		return Vector4Short(this->x - v3.x, this->y - v3.y, this->z - v3.z, this->w);
	}

	Vector4Short Vector4Short::operator-(Vector4Short const & v4)
	{
		return Vector4Short(this->x - v4.x, this->y - v4.y, this->z - v4.z, this->w - v4.w);
	}

	Vector4 Vector4Short::operator*(float const & value)
	{
		return Vector4(this->x * value, this->y * value, this->z * value, this->w * value);
	}

	Vector4 Vector4Short::operator/(float const & value)
	{
		return Vector4(this->x / value, this->y / value, this->z / value, this->w / value);
	}
#pragma endregion 
}
