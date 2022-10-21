#include "vec3f.h"

int main(void)
{
	vec3f_t a = {0};
	vec3f_t b = {0};
	vec3f_t result;

	vec3f_sum(&result, &a, &b);
	vec3f_sub(&result, &a, &b);
	vec3f_dot(&a, &b);
	vec3f_cross(&result, &a, &b);

	return 0;
}

