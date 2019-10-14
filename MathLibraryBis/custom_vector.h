#ifndef CUSTOM_VECTOR_H
#define CUSTOM_VECTOR_H
#include <array>

namespace poke {

	class Vector2 {
	public:
		Vector2(float x, float y);

		float& x();
		float& y();

		Vector2 operator+ (Vector2 v2);
		void operator+= (Vector2 v2);
		
		Vector2 operator- (Vector2 v2);
		void operator-= (Vector2 v2);
		
		Vector2 operator* (float const& value);
		void operator*= (float const& value);
		
		Vector2 operator/ (float const& value);
		void operator/= (float const& value);
		
		float GetMagnitude();
		Vector2 Normalize();
		static float Cross(Vector2 v1, Vector2 v2);

		static float GetDistance(Vector2 begin, Vector2 end);
		static float GetDistanceManhattan(Vector2 begin, Vector2 end);

	private:
		std::array<float, 2> vector_;
	};

	class Vector3 {
	public:
		Vector3(float x, float y, float z);

		float& x();
		float& y();
		float& z();
		
		Vector3 operator+ (Vector2 v2);
		Vector3 operator+ (Vector3 v3);

		void operator+= (Vector2 v2);
		void operator+= (Vector3 v3);

		Vector3 operator- (Vector2 v2);
		Vector3 operator- (Vector3 v3);

		void operator-= (Vector2 v2);
		void operator-= (Vector3 v3);

		Vector3 operator* (float const& value);
		void operator*= (float const& value);

		Vector3 operator/ (float const& value);
		void operator/= (float const& value);

		float GetMagnitude();

		Vector3 Normalize();
		static Vector3 Cross(Vector3 v1, Vector3 v2);
		static float Dot(Vector3 v1, Vector3 v2);

		static float GetDistance(Vector3 begin, Vector3 end);
		static float GetDistanceManhattan(Vector3 begin, Vector3 end);

	private:
		std::array<float, 3> vector_;
	};

	class Vector4 {
	public:
		Vector4(float x, float y, float z, float w);
		Vector4(std::array<float&, 4> newArray);

		float& x();
		float& y();
		float& z();
		float& w();

		Vector4 operator+ (Vector3 v3);
		Vector4 operator+ (Vector2 v2);
		Vector4 operator+ (Vector4 v4);

		void operator+= (Vector2 v2);
		void operator+= (Vector3 v3);
		void operator+= (Vector4 v4);

		Vector4 operator- (Vector2 v2);
		Vector4 operator- (Vector3 v3);
		Vector4 operator- (Vector4 v4);

		void operator-= (Vector2 v2);
		void operator-= (Vector3 v3);
		void operator-= (Vector4 v4);

		Vector4 operator* (float const& value);
		void operator*= (float const& value);

		Vector4 operator/ (float const& value);
		void operator/= (float const& value);

	private:
		std::array<float, 4> vector_;
	};
	

	class Vector2Int {
	public:
		Vector2Int(int x, int y);

		int& x();
		int& y();

		Vector2Int operator+ (Vector2Int v2);
		void operator+= (Vector2Int v2);
		
		Vector2Int operator- (Vector2Int v2);
		void operator-= (Vector2Int v2);
		
		Vector2 operator* (float const& value);
		void operator*= (int const& value);

		Vector2 operator/ (float const& value);
		void operator/= (int const& value);

		float GetMagnitude();
		Vector2 Normalize();
		static int Cross(Vector2Int v1, Vector2Int v2);

		static float GetDistance(Vector2Int begin, Vector2Int end);
		static int GetDistanceManhattan(Vector2Int begin, Vector2Int end);

	private:
		std::array<int, 2> vector_;
	};

	class Vector3Int {
	public:
		Vector3Int(int x, int y, int z);

		int& x();
		int& y();
		int& z();

		Vector3Int operator+ (Vector2Int v2);
		Vector3Int operator+ (Vector3Int v3);

		void operator+= (Vector2Int v2);
		void operator+= (Vector3Int v3);

		Vector3Int operator- (Vector2Int v2);
		Vector3Int operator- (Vector3Int v3);

		void operator-= (Vector2Int v2);
		void operator-= (Vector3Int v3);
								
		Vector3 operator* (float const& value);
		void operator*= (int const& value);

		Vector3 operator/ (float const& value);
		void operator/= (int const& value);

		float GetMagnitude();

		Vector3 Normalize();
		static Vector3Int Cross(Vector3Int v1, Vector3Int v2);

		static float GetDistance(Vector3Int begin, Vector3Int end);
		static int GetDistanceManhattan(Vector3Int begin, Vector3Int end);

	private:
		std::array<int, 3> vector_;
	};

	class Vector4Int {
	public:
		Vector4Int(int x, int y, int z, int w);

		int& x();
		int& y();
		int& z();
		int& w();

		Vector4Int operator+ (Vector2Int v2);
		Vector4Int operator+ (Vector3Int v3);
		Vector4Int operator+ (Vector4Int v4);

		void operator+= (Vector2Int v2);
		void operator+= (Vector3Int v3);
		void operator+= (Vector4Int v4);

		Vector4Int operator- (Vector2Int v2);
		Vector4Int operator- (Vector3Int v3);
		Vector4Int operator- (Vector4Int v4);

		void operator-= (Vector2Int v2);
		void operator-= (Vector3Int v3);
		void operator-= (Vector4Int v4);

		Vector4 operator* (float const& value);
		void operator*= (int const& value);

		Vector4 operator/ (float const& value);
		void operator/= (int const& value);

	private:
		std::array<int, 4> vector_;
	};
	

	class Vector2Short {
	public:
		Vector2Short(short x, short y);

		short& x();
		short& y();

		Vector2Short operator+ (Vector2Short v2);
		void operator+= (Vector2Short v2);
		
		Vector2Short operator- (Vector2Short v2);
		void operator-= (Vector2Short v2);
		
		Vector2 operator* (float const& value);
		void operator*= (short const& value);
		
		Vector2 operator/ (float const& value);
		void operator/= (short const& value);

		float GetMagnitude();
		Vector2 Normalize();
		static short Cross(Vector2Short v1, Vector2Short v2);

		static float GetDistance(Vector2Short begin, Vector2Short end);
		static float GetDistanceManhattan(Vector2Short begin, Vector2Short end);

	private:
		std::array<short, 2> vector_;
	};

	class Vector3Short {
	public:
		Vector3Short(short x, short y, short z);

		short& x();
		short& y();
		short& z();

		Vector3Short operator+ (Vector2Short v2);
		Vector3Short operator+ (Vector3Short v3);

		void operator+= (Vector2Short v2);
		void operator+= (Vector3Short v3);

		Vector3Short operator- (Vector2Short v2);
		Vector3Short operator- (Vector3Short v3);

		void operator-= (Vector2Short v2);
		void operator-= (Vector3Short v3);

		Vector3 operator* (float const& value);
		void operator*= (short const& value);

		Vector3 operator/ (float const& value);
		void operator/= (short const& value);

		float GetMagnitude();

		Vector3 Normalize();
		static Vector3Short Cross(Vector3Short v1, Vector3Short v2);

		static float GetDistance(Vector3Short begin, Vector3Short end);
		static short GetDistanceManhattan(Vector3Short begin, Vector3Short end);

	private:
		std::array<short, 3> vector_;
	};

	class Vector4Short {
	public:
		Vector4Short(short x, short y, short z, short w);

		short& x();
		short& y();
		short& z();
		short& w();
		
		Vector4Short operator+ (Vector2Short v2);
		Vector4Short operator+ (Vector3Short v3);
		Vector4Short operator+ (Vector4Short v4);

		void operator+= (Vector2Short v2);
		void operator+= (Vector3Short v3);
		void operator+= (Vector4Short v4);

		Vector4Short operator- (Vector2Short v2);
		Vector4Short operator- (Vector3Short v3);
		Vector4Short operator- (Vector4Short v4);

		void operator-= (Vector2Short v2);
		void operator-= (Vector3Short v3);
		void operator-= (Vector4Short v4);

		Vector4 operator* (float const& value);
		void operator*= (short const& value);
		
		Vector4 operator/ (float const& value);
		void operator/= (short const& value);
		
	private:
		std::array<short, 4> vector_;
	};
}
#endif