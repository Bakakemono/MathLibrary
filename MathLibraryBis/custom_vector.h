#ifndef CUSTOM_VECTOR_H
#define CUSTOM_VECTOR_H

namespace poke {

	class Vector2 {
	public:
		Vector2(float x, float y);

		Vector2 operator+ (Vector2 const& v2);
		Vector2 operator- (Vector2 const& v2);
		Vector2 operator* (float const& value);
		Vector2 operator/ (float const& value);

		float GetMagnitude() const;
		Vector2 Normalize();
		static float Cross(Vector2 const & v1, Vector2 const & v2);

		static float GetDistance(Vector2& begin, Vector2& end);
		static float GetDistanceManhattan(Vector2& begin, Vector2& end);

		float x, y;
	};

	class Vector3 {
	public:
		Vector3(float x, float y, float z);

		Vector3 operator+ (Vector2 const& v2);
		Vector3 operator+ (Vector3 const& v3);

		Vector3 operator- (Vector2 const& v2);
		Vector3 operator- (Vector3 const& v3);

		Vector3 operator* (float const& value);
		Vector3 operator/ (float const& value);

		float GetMagnitude() const;

		Vector3 Normalize() const;
		static Vector3 Cross(Vector3 v1, Vector3 v2);

		static float GetDistance(Vector3& begin, Vector3& end);
		static float GetDistanceManhattan(Vector3& begin, Vector3& end);

		float x, y, z;
	};

	class Vector4 {
	public:
		Vector4(float x, float y, float z, float w);

		Vector4 operator+ (Vector2 const& v2);
		Vector4 operator+ (Vector3 const& v3);
		Vector4 operator+ (Vector4 const& v4);

		Vector4 operator- (Vector2 const& v2);
		Vector4 operator- (Vector3 const& v3);
		Vector4 operator- (Vector4 const& v4);

		Vector4 operator* (float const& value);
		Vector4 operator/ (float const& value);

		float x, y, z, w;
	};

	class Vector2Int {
	public:
		Vector2Int(int x, int y);

		Vector2Int operator+ (Vector2Int const& v2);
		Vector2Int operator- (Vector2Int const& v2);
		Vector2 operator* (float const& value);
		Vector2 operator/ (float const& value);

		float GetMagnitude() const;
		Vector2 Normalize();
		static int Cross(Vector2Int const & v1, Vector2Int const & v2);

		static float GetDistance(Vector2Int& begin, Vector2Int& end);
		static int GetDistanceManhattan(Vector2Int& begin, Vector2Int& end);

		int x, y;
	};

	class Vector3Int {
	public:
		Vector3Int(int x, int y, int z);

		Vector3Int operator+ (Vector2Int const& v2);
		Vector3Int operator+ (Vector3Int const& v3);

		Vector3Int operator- (Vector2Int const& v2);
		Vector3Int operator- (Vector3Int const& v3);

		Vector3 operator* (float const& value);
		Vector3 operator/ (float const& value);

		float GetMagnitude() const;

		Vector3 Normalize() const;
		static Vector3Int Cross(Vector3Int v1, Vector3Int v2);

		static float GetDistance(Vector3Int& begin, Vector3Int& end);
		static int GetDistanceManhattan(Vector3Int& begin, Vector3Int& end);

		int x, y, z;
	};

	class Vector4Int {
	public:
		Vector4Int(int x, int y, int z, int w);

		Vector4Int operator+ (Vector2Int const& v2);
		Vector4Int operator+ (Vector3Int const& v3);
		Vector4Int operator+ (Vector4Int const& v4);

		Vector4Int operator- (Vector2Int const& v2);
		Vector4Int operator- (Vector3Int const& v3);
		Vector4Int operator- (Vector4Int const& v4);

		Vector4 operator* (float const& value);
		Vector4 operator/ (float const& value);

		int x, y, z, w;
	};

	class Vector2Short {
	public:
		Vector2Short(short x, short y);

		Vector2Short operator+ (Vector2Short const& v2);
		Vector2Short operator- (Vector2Short const& v2);
		Vector2 operator* (float const& value);
		Vector2 operator/ (float const& value);

		float GetMagnitude() const;
		Vector2 Normalize();
		static short Cross(Vector2Short const & v1, Vector2Short const & v2);

		static float GetDistance(Vector2Short& begin, Vector2Short& end);
		static float GetDistanceManhattan(Vector2Short& begin, Vector2Short& end);

		short x, y;
	};

	class Vector3Short {
	public:
		Vector3Short(short x, short y, short z);

		Vector3Short operator+ (Vector2Short const& v2);
		Vector3Short operator+ (Vector3Short const& v3);

		Vector3Short operator- (Vector2Short const& v2);
		Vector3Short operator- (Vector3Short const& v3);

		Vector3 operator* (float const& value);
		Vector3 operator/ (float const& value);

		float GetMagnitude() const;

		Vector3 Normalize() const;
		static Vector3Short Cross(Vector3Short v1, Vector3Short v2);

		static float GetDistance(Vector3Short& begin, Vector3Short& end);
		static short GetDistanceManhattan(Vector3Short& begin, Vector3Short& end);

		short x, y, z;
	};

	class Vector4Short {
	public:
		Vector4Short(short x, short y, short z, short w);

		Vector4Short operator+ (Vector2Short const& v2);
		Vector4Short operator+ (Vector3Short const& v3);
		Vector4Short operator+ (Vector4Short const& v4);

		Vector4Short operator- (Vector2Short const& v2);
		Vector4Short operator- (Vector3Short const& v3);
		Vector4Short operator- (Vector4Short const& v4);

		Vector4 operator* (float const& value);
		Vector4 operator/ (float const& value);

		short x, y, z, w;
	};
}
#endif