#include<stdio.h>

extern int add(int a,int b);

int main(){
	int a,b;
	printf("请输入数字！");
	scanf("%d %d",&a,&b);
	int c=add(a,b);
	printf("%d",c);
	return 0;
}