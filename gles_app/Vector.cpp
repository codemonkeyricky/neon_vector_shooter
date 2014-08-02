#include "Vector.h"
#include <cmath> 

float Vector2f::lengthSquared() const 
{
	return dot(*this);
}


float Vector2f::dot(const Vector2f &v2) const
{
	return x * v2.x + y * v2.y;
}


float Vector2f::distanceSquared(const Vector2f &v2) const 
{
	return (v2 - (*this)).lengthSquared();
}

Vector2f operator *(const float &s, const Vector2f &v) 
{
	return Vector2f(v.x * s, v.y * s);
}

//float Vector2f::lengthSquared() const { return dot(*this); }
float Vector2f::length() const { return sqrtf(lengthSquared()); }

Vector2f Vector2f::normalize() const { return (*this) / length(); }
