#include <stdio.h>
//구조체 선언(JS의 생성자 함수처럼 대문자로 쓰는게 관례)
struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendgame; //연관 업체 게임
};

typedef struct GameInfomation {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendgame;
}GAME_INFO; //struct GameInfomation을 GAME_INFO로 구조체 선언 

int main_struct(void)
{
	char* name = "나도게임";
	int year = 2017;
	int price = 50;
	char* company = "나도회사";

	char* name2 = "너도게임";
	int year2 = 2017;
	int price2 = 100;
	char* company2 = "너도회사";

	//구조체 사용
	struct GameInfo gameInfo1;
	gameInfo1.name = "나도게임";
	gameInfo1.year = 2017;
	gameInfo1.price = 50;
	gameInfo1.company = "나도회사";

	//구조체 출력
	printf("--게임 출시 정보--\n");
	printf("게임명: %s\n", gameInfo1.name);
	printf("발매년도: %d\n", gameInfo1.year);
	printf("가격: %d\n", gameInfo1.price);
	printf("제작사: %s\n", gameInfo1.company);

	//구조체를 배열처럼 초기화
	struct GameInfo gameInfo2 = { "너도게임",2017,100,"너도회사" };
	printf("\n--또다른 게임 출시 정보--\n");
	printf("게임명: %s\n", gameInfo2.name);
	printf("발매년도: %d\n", gameInfo2.year);
	printf("가격: %d\n", gameInfo2.price);
	printf("제작사: %s\n", gameInfo2.company);

	//구조체 배열
	struct GameInfo gameArray[2] = {
		{ "나도게임",2017,50,"나도회사"},
		{ "너도게임",2017,100,"너도회사" }
	};

	//구조체 포인터(연산순위가 '.'가 '*'보다 높기때문에 괄호를 해줘야함)
	//구조체는 화살표 연산자가 더 직관적이므로 눈에 익힐 것
	struct GameInfo* gamePtr;
	gamePtr = &gameInfo1;
	printf("\n\n--미션맨의 게임 출시 정보--\n");
	printf("게임명: %s\n", gamePtr->name);
	printf("발매년도: %d\n", gamePtr->year);
	printf("가격: %d\n", gamePtr->price);
	printf("제작사: %s\n", gamePtr->company);

	//연산순위가 '.'가 '*'보다 높기때문에 괄호를 해줘야함
	/*printf("게임명: %s\n", (*gamePtr).name);
	printf("발매년도: %d\n", (*gamePtr).year);
	printf("가격: %d\n", (*gamePtr).price);
	printf("제작사: %s\n", (*gamePtr).company);*/

	//연관 업체 소개
	gameInfo1.friendgame = &gameInfo2;
	printf("\n\n--연관 업체의 게임 출시 정보--\n");
	printf("게임명: %s\n", gameInfo1.friendgame->name);
	printf("발매년도: %d\n", gameInfo1.friendgame->year);
	printf("가격: %d\n", gameInfo1.friendgame->price);
	printf("제작사: %s\n", gameInfo1.friendgame->company);

	//typedef:자료형에 별명 지정
	//typedef 구조체 설정방법
	//(1)typedef struct GameInfo game1;
	//(2)위의 struct 앞에 typedef를 쓰고 ;앞에 struct명
	int i = 1;
	typedef int 정수;
	정수 정수변수 = 3;

	typedef float 실수;
	실수 실수변수 = 3.23f;
	printf("\n\n 정수변수: %d, 실수변수:%.2f\n", 정수변수, 실수변수);

	typedef struct GameInfo 게임정보; //struct GameInfo 다쓰기 귀찮으니까 구조체를 게임정보로 선언
	게임정보 game1; //game1은 구조체 변수명
	game1.name = "나도게임";
	game1.year = 2017;
	game1.price = 50;
	game1.company = "나도회사";
	printf("\n\n--typedef 변경 후 출력확인--\n");
	printf("게임명: %s\n", game1.name);
	printf("발매년도: %d\n", game1.year);
	printf("가격: %d\n", game1.price);
	printf("제작사: %s\n", game1.company);

	GAME_INFO game2;
	game2.name = "한글 게임2";
	game2, year = 2014;

	return 0;
}