#include<stdio.h> 
#include<stdlib.h>
int main()
{
	int  length1,length2,length3;
	printf("�п�J�T���ΤT���:\n");
	scanf("%d%d%d",&length1,&length2,&length3);
	printf("length1=%d,length2=%d,length3=%d\n",length1,length2,length3);
	
	if (( length1+length2)>length3&&(length2+length3)>length1&&(length1+length3)>length2)
	printf("�T���Φ��߳�\n");
	 
	else
	printf("�T���Τ��ন�߳�\n");
	system("PAUSE");
	return 0;
  
}
