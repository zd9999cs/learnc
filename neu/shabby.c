#include <string.h>
#include <stdio.h>
char *getMem()
{
	char buf[64]; //局部变量 栈区存放
	strcpy(buf, "123456789");//向buf所代表的内存中写入内容
	//printf("buf:%s\n", buf);
	return buf;//返回所分配内存区域的第一个元素的地址
}

void main()
{
	char *tmp = NULL;
	tmp = getMem(10);
	if (tmp == NULL)
	{
		return ;
	}
	printf("tmp:%s\n", tmp);//输出tmp:
	system("pause");
	return ;
}

