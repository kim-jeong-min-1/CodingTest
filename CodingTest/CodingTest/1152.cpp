#include <iostream>
using namespace std;
#define MAX_WORD 1000000 // �ִ빮�ڿ�

int main()
{
	char str[MAX_WORD]; //�Է��� ����
	int wordCnt = 1; //�ܾ� ����

	cin.getline(str, MAX_WORD); // ���� �Է�

	if (str[0] == ' ') // ó���� �����ϋ�
	{
		wordCnt = 0;
	}

	for (int i = 0; i < MAX_WORD; i++) // �˻� ����
	{
		if (str[i] == ' ')
		{
			wordCnt++; // ���� ����
		}
	}

	if (str[ - 1] == ' ')//�ڰ� �����ϋ�
	{
		wordCnt--; // ���� ����
	}
	cout << wordCnt; // ���� ���
}