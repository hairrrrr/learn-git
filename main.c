#include <stdio.h>

int main()
{
	for(int i = 0; i < 5; ++i)
	{
		printf("hello world");

		// 新功能
		puts("program ends");
		putchar('x');

		// 这里继续开发新功能
	}

	return 0;
}
