/*
给定单词的计数，输入一个不含空格的单词，统计输出该单词在文本中的出现次数。
*/

#include "custom.h"

void WordCount(FILE *fp)
{
	int ch, i = 0, count = 0;
	char find[50], temp[1000];
	printf("请输入要查找的单词:");
	gets(find);
	while ((ch = getc(fp)) != EOF)
	{
		if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z') || (ch >= '0'&&ch <= '9'))
		{
			temp[i] = ch;
			i++;
		}
		else
		{
			temp[i] = '\0';
			if ((strcmp(find, temp)) == 0)
			{
				count++;
			}
			i = 0;
		}
	}
	printf("共在文件中查找到单词\"%s\" %d 个\n", find, count);
	fclose(fp);
}