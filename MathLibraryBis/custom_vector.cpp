#include "custom_vector.h"
#include <cmath>

poke::Vector2::Vector2(float x, float y): x(x), y(y) {}

float poke::Vector2::GetDistance(Vector2 & begin, Vector2 & end)
{
	float newX = end.x - begin.x;
	float newY = end.y - begin.y;

	return sqrt(newX * newX + newY * newY);
}

float poke::Vector2::GetDistanceManhattan(Vector2 & begin, Vector2 & end)
{
	return abs(end.x - begin.x + end.y + begin.y);
}



poke::Vector3::Vector3(float x, float y, float z): x(x), y(y), z(z) {}

float poke::Vector3::GetDistance(Vector3 & begin, Vector3 & end)
{
	float newX = end.x - begin.x;
	float newY = end.y - begin.y;
	float newZ = end.z - begin.z;

	return sqrt(newX * newX + newY * newY + newZ * newZ);

}

float poke::Vector3::GetDistanceManhattan(Vector3 & begin, Vector3 & end)
{
	return abs(end.x - begin.x + end.y - begin.y + end.z - begin.z);
}

poke::Vector4::Vector4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}
