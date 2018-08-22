/*
检索给定单词，检索并输出该单词所在的行号、该行中出现的次数以及在该行中的相应位置。
每一个符号也算一个单词。
*/

#include "custom.h"

void Retrieval(FILE *fp)
{
	int ch, i = 0, count = 0, countt = 0, j = 1, k = 0;
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
			k++;
			temp[i] = '\0';
			if ((strcmp(find, temp)) == 0)
			{
				count++;
				countt++;
				printf("在%d行中查找到单词\"%s\"，是本行中找到的第%d个\"%s\"，在本行的第%d个单词位置上。\n", j, find, count, find, k);
			}
			i = 0;
			if (ch == '\n')
			{
				j++;
				if (count != 0)
				{
					printf("在%d行中共查找到单词\"%s\" %d 个。\n", j - 1, find, count);
				}
				k = 0;
				count = 0;
			}
		}
	}
	printf("共在文件中查找到单词\"%s\" %d 个。\n", find, countt);
	fclose(fp);
}