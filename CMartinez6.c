//Cecilia Martinez
//CSC-321


#include <stdio.h>
#include <stdlib.h>

int main(){
	int a=9;
	int b=25;
	

	double c=9.0;
	double d=25.0;

	printf("for integers:\n");
	printf("first result:%d\n ", a+b*a/b-a);
	printf("second result:%d\n ", -a-b/a*b+a);
	printf("thid result:%d\n ", a+b-a/b);

	//double
	printf("for doubles:\n");
	printf("first result:%.2f\n ", c+d*c/d-c);
	printf("second result:%.2f\n ", -c-d/c*d+c);
	printf("third result:%.2f\n ", c+d-c/d);
	


	return EXIT_SUCCESS;
}
