#include <stdio.h>

int main(){
	int x, y;
	printf("2개의 정수를 입력하세요.\n");
	printf("정수 1 : ");
	scanf("%d", &x);
	printf("정수 2 : ");
	scanf("%d", &y);

	printf("이 두 값의 합은 %d입니다.\n", x+y);
	printf("이 두 값의 차는 %d입니다.\n", x-y);
	printf("이 두 값의 곱은 %d입니다.\n", x*y);
	printf("이 두 값의 몫은 %d입니다.\n", x/y);
	return 0;
}
