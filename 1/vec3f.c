#include "vec3f.h"

vec3f_t * vec3f_sum(vec3f_t * result, const vec3f_t * a, const vec3f_t * b)
{
	result->x = a->x + b->x;
	result->y = a->y + b->y;
	result->z = a->z + b->z;

	return result;
}

vec3f_t * vec3f_sub(vec3f_t * result, const vec3f_t * a, const vec3f_t * b)
{
	result->x = a->x - b->x;
	result->y = a->y - b->y;
	result->z = a->z - b->z;

	return result;
}

vec3f_t * vec3f_cross(vec3f_t * result, const vec3f_t * a, const vec3f_t * b)
{
	result->x = a->y * b->z - a->z * b->y;
	result->y = a->z * b->x - a->x * b->z;
	result->z = a->x * b->y - a->y * b->x;

	return result;
}



float vec3f_dot(const vec3f_t * a, const vec3f_t * b)
{
	return a->x * b->x + a->y * b->y + a->z * b->z;
}




