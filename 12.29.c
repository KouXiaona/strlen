#include<stdio.h>
#include<Windows.h>

int my_strlen1(const char * str)//��������ʽ
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
int my_strlen2(const char * str)//�ݹ鷽ʽ�����ܴ�����ʱ����������
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen2(str + 1);

}
int my_strlen3( char * str)
{
	char *p = str;
	while (*p != '\0')
		p++;
	return p - str;
}


int main()//ģ��ʵ��strlen����
{
	char str[] = "asdfgfhgj";
	printf("first way:%d\n",my_strlen1(str));
    printf("second way:%d\n", my_strlen2(str));
	printf("third way:%d\n", my_strlen3(str));
	system("pause");
	return 0;
}