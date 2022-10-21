struct vec3f
{
	union
	{
		struct {
			float x;
			float y;
			float z;
		};

		float v[3];
	};
};

typedef struct vec3f vec3f_t;

vec3f_t * vec3f_sum(vec3f_t * result, const vec3f_t * a, const vec3f_t * b);
vec3f_t * vec3f_sub(vec3f_t * result, const vec3f_t * a, const vec3f_t * b);
vec3f_t * vec3f_cross(vec3f_t * result, const vec3f_t * a, const vec3f_t * b);

float vec3f_dot(const vec3f_t * a, const vec3f_t * b);

