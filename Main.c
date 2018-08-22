#include "custom.h"

int main()
{
	FILE *fp;
	char file_name[256] = { 0 };

	while (1)
	{
		printf("1、建立或打开文本文件。文件名由用户键盘输入。(请先建立或打开文件）\n");
		printf("2、统计输出该单词在文本中的出现次数。单词由用户键盘输入。\n");
		printf("3、检索并输出该单词所在的行号、该行中出现的次数以及在该行中的相应位置。单词由用户键盘输入。\n");
		printf("输入其他退出,请输入：");

		int n;
		scanf("%d", &n);
		getchar();
		printf("\n");

		switch (n)
		{
		case 1:
			fp = CreateFile(file_name);
			printf("完成！\n");
			fclose(fp);
			fp = OpenFile(file_name);
			CopyFile(fp);
			break;

		case 2:
			fp = OpenFile(file_name);
			WordCount(fp);
			printf("完成！\n");
			break;

		case 3:
			fp = OpenFile(file_name);
			Retrieval(fp);
			printf("完成！\n");
			break;

		default:
			return 0;
		}

		printf("\n");
	}

	return 0;
}