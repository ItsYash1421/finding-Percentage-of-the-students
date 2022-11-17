#include <stdio.h>

int main() {
	int s1,s2,s3,s4,s5;
	
	float per;
	float average;

	printf("enter the gained mark\n");

	printf("maths\n");
	scanf("%d", &s1);
	printf("physics\n");
	scanf("%d",&s2);
	printf("chemistry\n");
	scanf("%d", &s3);
	printf("english\n");
	scanf("%d", &s4);
	printf("computer\n");
	scanf("%d", &s5);
	per = (s1+s2+s3+s4+s5)*100/500;
	average = (s1+s2+s3+s4+s5)/5;
	printf("percentage of student is :%f\n",per);
  printf("average marks of student is :%f\n",average);
  return 0;
}