#include <stdio.h>

#define MAX 10000
int main(void)
{	
	//fputs, fgets 쌍 -> 문자열을 불러옴
	char line[MAX];
	//파일에 쓰기
	/*FILE * file = fopen("C:\\Users\\sdok1\\OneDrive\\test1.txt", "wb");

	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}

	fputs("fputs 를 이용해서 글을 적어볼게요\n", file);
	fputs("잘 적히는지 확인해주세요\n", file);*/

	//파일을 닫지 않으면 데이터 손실이 발생하므로 항상 닫는 습관을 들일 것!!
	
	////파일 읽기
	//FILE * file = fopen("C:\\Users\\sdok1\\OneDrive\\test1.txt", "rb");

	//if (file == NULL)
	//{
	//	printf("파일 열기 실패\n");
	//	return 1;
	//}

	//while (fgets(line, MAX, file) != NULL)
	//{
	//	printf("%s", line);
	//}

	//fclose(file);

	int num[6] = { 0,0,0,0,0,0 }; // 추첨번호
	int bonus = 0; //보너스 번호
	char str1[MAX];
	char str2[MAX];

	//파일에 쓰기
	//FILE* file = fopen("C:\\Users\\sdok1\\OneDrive\\test2.txt", "wb");
	//if (file == NULL)
	//{
	//	printf("파일 열기 실패\n");
	//	return 1;
	//}

	////로또 추첨 번호 저장
	//fprintf(file, "%s %d %d %d %d %d %d\n", "추첨번호", 1, 2, 3, 4, 5, 6);
	//fprintf(file, "%s %d\n", "보너스번호", 7);

	//fclose(file);

	//파일에 읽기
	FILE* file = fopen("C:\\Users\\sdok1\\OneDrive\\test2.txt", "rb");
	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}

	fscanf(file, "%s %d %d %d %d %d %d", str1,
		&num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);

	printf("%s %d %d %d %d %d %d \n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);
	
	fscanf(file, "%s %d", str2, &bonus);
	printf("%s %d\n", str2, bonus);

	fclose(file);
	return 0;
}