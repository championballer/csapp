#include<stdio.h>

typedef struct {
	int a[2];
	double d;
} struct_t;

double fun(int i){
	volatile struct_t s;
	s.d = 3.14;
	s.a[i] = 1073741824;

	return s.d;
}

int main()
{
	for(int i=0;i<7;i++)
	{
		printf("%d : %f\n",i,fun(i));	
	}
	
}