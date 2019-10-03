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

		static float GetMagnitude(Vector3 const & v3);

		static Vector3 Normalize(Vector3 const& v3);
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
}
#endif