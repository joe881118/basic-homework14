#include<stdio.h> 
#include<stdlib.h>
int main()
{
	int  length1,length2,length3;
	printf("請輸入三角形三邊長:\n");
	scanf("%d%d%d",&length1,&length2,&length3);
	printf("length1=%d,length2=%d,length3=%d\n",length1,length2,length3);
	
	if (( length1+length2)>length3&&(length2+length3)>length1&&(length1+length3)>length2)
	printf("三角形成立喔\n");
	 
	else
	printf("三角形不能成立喔\n");
	system("PAUSE");
	return 0;
  
}
