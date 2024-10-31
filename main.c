#include <stdio.h>

typedef struct A
{
	int id;
	char *name;
}A;

typedef struct B
{
	int id;
	char *name;
}B;

int main()
{
	A a = { 1, "aachen" };
	B b = { 2, "axuan" };
	A *pa = (A *)&b;
	B *pb = (B *)&a;
	printf("%d\n%s\n", pa->id, pa->name);
	printf("%d\n%s\n", pb->id, pb->name);
}