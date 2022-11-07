#include <stdio.h>

int main()
{
    int cood[1000][1000];
    int area = 0;
    int T, x, y;

     scanf("%d", &T);

     for(int i = 0; i < T; i++)
     {
        scanf("%d %d", &x, &y);

        for(int j = x; j < x + 10; j++)
        {
            for(int k = y; k < y + 10; k++)
            {
                if(cood[j][k] == 0)
                {
                    cood[j][k] = 1;
                    area++;
                }
            }
        }
     }
     
     printf("%d\n", area);

     return 0;
}