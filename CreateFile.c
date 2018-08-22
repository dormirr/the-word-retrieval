/*
建立文本文件，文件名由用户键盘输入。
*/

#include "custom.h"

FILE* CreateFile(char file_name[])
{
	FILE *fp;
	strcpy(file_name, "D:\\张天赐\\Documents\\数据结构与算法综合设计\\文本文件中单词的检索与计数\\资源文件\\");
	printf("请输入要创建或打开的文件名:");
	scanf("%s", file_name + 79);
	if ((fp = fopen(file_name, "a+")) == NULL)
	{
		printf("无法打开！\n");
		exit(1);
	}
	return fp;
}