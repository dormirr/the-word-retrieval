/*
复制文件
*/

#include "custom.h"


void CopyFile(FILE *fp)
{
	FILE *in;
	if ((in = fopen("D:\\张天赐\\Documents\\数据结构与算法综合设计\\文本文件中单词的检索与计数\\资源文件\\Decompression.txt", "r")) == NULL)
	{
		printf("无法打开将要复制的文件！\n");
		exit(1);
	}
	char c;
	while ((c = getc(in)) != EOF)
	{
		putc(c,fp);
	}
	fclose(in);
	printf("已写入内容。\n");
	fclose(fp);
}