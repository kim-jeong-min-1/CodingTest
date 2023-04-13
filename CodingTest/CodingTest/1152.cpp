#include <iostream>
using namespace std;
#define MAX_WORD 1000000 // 최대문자열

int main()
{
	char str[MAX_WORD]; //입력할 문장
	int wordCnt = 1; //단어 갯수

	cin.getline(str, MAX_WORD); // 문장 입력

	if (str[0] == ' ') // 처음이 공백일떄
	{
		wordCnt = 0;
	}

	for (int i = 0; i < MAX_WORD; i++) // 검사 시작
	{
		if (str[i] == ' ')
		{
			wordCnt++; // 갯수 증가
		}
	}

	if (str[ - 1] == ' ')//뒤가 공백일떄
	{
		wordCnt--; // 갯수 감소
	}
	cout << wordCnt; // 갯수 출력
}