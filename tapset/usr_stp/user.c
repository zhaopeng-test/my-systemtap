#include <stdio.h>


int fun2(int b)
{

   int c;
   c = b + 1;

   printf("c = %d \n", c);
   return c;
}

int fun1(int a)
{
    int b = 0;
    int iret = 0;

    b = a + 1;

    iret = fun2(b);

    return iret;
}


int main()
{
	int t = 1;
		
	fun1(t);

	return 0;
}


