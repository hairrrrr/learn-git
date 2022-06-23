#include <stdio.h>

int main()
{

	printf("hello world ~~~");

	for(int i = 0; i < 5; ++i)
	{
		printf("hello world");


		// 新功能
		puts("program ends");
		putchar('x');

		// 这里继续开发新功能
		int x;
		scanf("%d", &x);
	}

	return 0;
}
