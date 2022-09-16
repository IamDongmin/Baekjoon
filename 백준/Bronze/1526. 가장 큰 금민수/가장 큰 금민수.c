#include<stdio.h>

int goldminsu(int N)
{
	int num;

	while (1)
	{
		num = N;		//정수 N을 num이라는 변수에 저장 
						//이유 N이 4와 7로만 이루어진 수 인지 확인하는 과정에서 값이 변하기 때문에

		while (1)
		{
			if (num % 10 == 4 || num % 10 == 7)		//num이 4와 7로 이루어졌는데 아랫자리 수 부터 확인
			{
				num /= 10;

				if (num == 0)		//0이 되는 순간 N은 4와 7로만 이루어 졌기 때문에 main으로 return
				{
					return N;
				}
			}
			else
			{
				break;		//한 자리라도 4와 7이 아니면 확인하는 while문을 탈출
			}
		}
		N--;		//N에서 1을 빼서 확인
	}
}
int main()
{
	int N;

	scanf("%d", &N);				//정수 N 입력

	printf("%d\n", goldminsu(N));	//N을 goldminsu 함수로 호출


	return 0;
}