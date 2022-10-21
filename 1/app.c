#include <stdio.h>

#include "vec3f.h"

int consume_until_nf(void)
{
	int ch;

	while ((ch = getchar()) != EOF && ch != '\n')
		;

	return ch == '\n';
}

int let_user_input(const char * label, vec3f_t * vec)
{
	printf("%s = ", label);
	int taken = scanf("%f %f %f", &vec->x, &vec->y, &vec->z);

	return consume_until_nf() && taken == 3;
}

void display_vec3f(const char * label, const vec3f_t * v)
{
	printf("%s = (% 6.2f, % 6.2f, % 6.2f)\n", label, v->x, v->y, v->z);
}

int main(void)
{
	vec3f_t a, b, result;

	while (let_user_input("a", &a) && let_user_input("b", &b))
	{
		putchar('\n');

		display_vec3f("          a", &a);
		display_vec3f("          b", &b);

		putchar('\n');

		display_vec3f("  sum(a, b)", vec3f_sum(&result, &a, &b));
		display_vec3f("  sub(a, b)", vec3f_sub(&result, &a, &b));
		display_vec3f("cross(a, b)", vec3f_cross(&result, &a, &b));

		putchar('\n');
	}

	printf("Bye.\n");

	return 0;
}

