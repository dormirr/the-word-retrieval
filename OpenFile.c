/*
打开创建的文本文档
*/

#include "custom.h"

FILE* OpenFile(char file_name[]) {
	FILE* fp;
	if ((fp = fopen(file_name, "a+")) == NULL)
	{
		printf("无法打开！\n");
		exit(1);
	}
	return fp;
}