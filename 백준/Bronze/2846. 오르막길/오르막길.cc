#include<stdio.h>

int main()
{
    
    int T;
    
    int a, b, up, max = 0, currentmax = 0;
    
    scanf("%d", &T);
    scanf("%d", &a);
    
    for(int i = 1; i < T; i++)
    {
        scanf("%d", &b);
        
        if(a < b)
        {
            up = b - a;
            currentmax += up;
            
            if(currentmax > max)
            {
                max = currentmax;
            }
        }
        else
        {
            up = 0;
            currentmax = 0;
        }
        a = b;
    }
    
    printf("%d", max);
    
    
    return 0;
}