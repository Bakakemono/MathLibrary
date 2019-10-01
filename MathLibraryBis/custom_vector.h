#ifndef CUSTOM_VECTOR_H
#define CUSTOM_VECTOR_H

namespace poke {

	class Vector2 {
	public:
		Vector2(float x, float y);

		static float GetDistance(Vector2& begin, Vector2& end);
		static float GetDistanceManhattan(Vector2& begin, Vector2& end);

		float x, y;
	};

	class Vector3 {
		Vector3(float x, float y, float z);

		static float GetDistance(Vector3& begin, Vector3& end);
		static float GetDistanceManhattan(Vector3& begin, Vector3& end);

		float x, y, z;
	};

	class Vector4 {
		Vector4(float x, float y, float z, float w);

		float x, y, z, w;
	};
}
#endif