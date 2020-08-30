#include<stdio.h>
int main()
{
	int a, b, c, hrm, krn, x, y, z, n;
	printf("enter number :");
	scanf_s("%d %d %d", &a, &b, &c);
		
			for (n = 1; (a > n) && (b > n) && (c > n); n++)
			{if ((a % n == 0) && (b % n == 0) && (c % n == 0))
					hrm = n;
			printf("%d", hrm);
			a /= hrm;
			b /= hrm;
			c /= hrm;
			printf("%d %d %d", a, b, c);
		}/*
			for (z = 2; z <= c; z++)
				for (x = 2; x <= a; x++)
					for (y = 2; y <= b; y++) {
						while (a >= x)
						{
							if (a % x == 0)
							{
								a /= x; hrm *= a;
							}
							else x++;
						}
						while (b >= y)
						{
							if (b % y == 0)
							{
								b /= y; hrm *= b;
							}
							else y++;
						}
						while (c >= z)
						{
							if (c % z == 0)
							{
								c /= z; hrm *= c;
							}
							else z++;
						}
					}
	printf("%d", hrm);

	*/
	return 0;
}