#include<stdio.h>
#include<limits.h>
#include<float.h>
main()
{
	printf("size of char %d\n",sizeof(char));
	printf("size of short %d\n",sizeof(short));
	printf("size of int %d\n",sizeof(int));
	printf("size of long %d\n",sizeof(long));
	printf("size of float %d\n",sizeof(float));
	printf("size of double %d\n",sizeof(double));
	printf("size of long double %d\n",sizeof(long double));

	printf("range of signed char from %d to %d\n",SCHAR_MIN,SCHAR_MAX);
	printf("Max of unsigned char %d\n",UCHAR_MAX);
	
	printf("range of signed short from %d to %d\n",SHRT_MIN,SHRT_MAX);
	printf("max of unsigned short is %d\n",USHRT_MAX);

	printf("range of signed int from %d to %d\n",INT_MIN,INT_MAX);
	printf("max of unsigned int is %d\n",UINT_MAX);

	printf("range of signed long from %ld to %ld\n",LONG_MIN,LONG_MAX);
	printf("Max of unsigned long is %ld\n",ULONG_MAX);

	printf("range of signed float from %e to %e\n",FLT_MIN,FLT_MAX);

	printf("range of signed double from %le to %le\n",DBL_MIN,DBL_MAX);
//	printf("range of signed long_double from %lu to %lu\n",LDBL_MIN,LDBL_MAX);
}
