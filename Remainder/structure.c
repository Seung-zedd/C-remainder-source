#include <stdio.h>
//����ü ����(JS�� ������ �Լ�ó�� �빮�ڷ� ���°� ����)
struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendgame; //���� ��ü ����
};

typedef struct GameInfomation {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendgame;
}GAME_INFO; //struct GameInfomation�� GAME_INFO�� ����ü ���� 

int main_struct(void)
{
	char* name = "��������";
	int year = 2017;
	int price = 50;
	char* company = "����ȸ��";

	char* name2 = "�ʵ�����";
	int year2 = 2017;
	int price2 = 100;
	char* company2 = "�ʵ�ȸ��";

	//����ü ���
	struct GameInfo gameInfo1;
	gameInfo1.name = "��������";
	gameInfo1.year = 2017;
	gameInfo1.price = 50;
	gameInfo1.company = "����ȸ��";

	//����ü ���
	printf("--���� ��� ����--\n");
	printf("���Ӹ�: %s\n", gameInfo1.name);
	printf("�߸ų⵵: %d\n", gameInfo1.year);
	printf("����: %d\n", gameInfo1.price);
	printf("���ۻ�: %s\n", gameInfo1.company);

	//����ü�� �迭ó�� �ʱ�ȭ
	struct GameInfo gameInfo2 = { "�ʵ�����",2017,100,"�ʵ�ȸ��" };
	printf("\n--�Ǵٸ� ���� ��� ����--\n");
	printf("���Ӹ�: %s\n", gameInfo2.name);
	printf("�߸ų⵵: %d\n", gameInfo2.year);
	printf("����: %d\n", gameInfo2.price);
	printf("���ۻ�: %s\n", gameInfo2.company);

	//����ü �迭
	struct GameInfo gameArray[2] = {
		{ "��������",2017,50,"����ȸ��"},
		{ "�ʵ�����",2017,100,"�ʵ�ȸ��" }
	};

	//����ü ������(��������� '.'�� '*'���� ���⶧���� ��ȣ�� �������)
	//����ü�� ȭ��ǥ �����ڰ� �� �������̹Ƿ� ���� ���� ��
	struct GameInfo* gamePtr;
	gamePtr = &gameInfo1;
	printf("\n\n--�̼Ǹ��� ���� ��� ����--\n");
	printf("���Ӹ�: %s\n", gamePtr->name);
	printf("�߸ų⵵: %d\n", gamePtr->year);
	printf("����: %d\n", gamePtr->price);
	printf("���ۻ�: %s\n", gamePtr->company);

	//��������� '.'�� '*'���� ���⶧���� ��ȣ�� �������
	/*printf("���Ӹ�: %s\n", (*gamePtr).name);
	printf("�߸ų⵵: %d\n", (*gamePtr).year);
	printf("����: %d\n", (*gamePtr).price);
	printf("���ۻ�: %s\n", (*gamePtr).company);*/

	//���� ��ü �Ұ�
	gameInfo1.friendgame = &gameInfo2;
	printf("\n\n--���� ��ü�� ���� ��� ����--\n");
	printf("���Ӹ�: %s\n", gameInfo1.friendgame->name);
	printf("�߸ų⵵: %d\n", gameInfo1.friendgame->year);
	printf("����: %d\n", gameInfo1.friendgame->price);
	printf("���ۻ�: %s\n", gameInfo1.friendgame->company);

	//typedef:�ڷ����� ���� ����
	//typedef ����ü �������
	//(1)typedef struct GameInfo game1;
	//(2)���� struct �տ� typedef�� ���� ;�տ� struct��
	int i = 1;
	typedef int ����;
	���� �������� = 3;

	typedef float �Ǽ�;
	�Ǽ� �Ǽ����� = 3.23f;
	printf("\n\n ��������: %d, �Ǽ�����:%.2f\n", ��������, �Ǽ�����);

	typedef struct GameInfo ��������; //struct GameInfo �پ��� �������ϱ� ����ü�� ���������� ����
	�������� game1; //game1�� ����ü ������
	game1.name = "��������";
	game1.year = 2017;
	game1.price = 50;
	game1.company = "����ȸ��";
	printf("\n\n--typedef ���� �� ���Ȯ��--\n");
	printf("���Ӹ�: %s\n", game1.name);
	printf("�߸ų⵵: %d\n", game1.year);
	printf("����: %d\n", game1.price);
	printf("���ۻ�: %s\n", game1.company);

	GAME_INFO game2;
	game2.name = "�ѱ� ����2";
	game2, year = 2014;

	return 0;
}