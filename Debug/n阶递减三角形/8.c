#include <stdio.h>

int main() 
{
    int input;
    int geshu;
    int hangshu;
    int shuru2;
    scanf("%d", &input);
    shuru2 = input;
    
    for( hangshu = 1 ; hangshu <= input; hangshu ++)
    {
        shuru2 = input - hangshu + 1;
        for(geshu = 1 ; geshu <= input ; geshu ++)
        {
            printf("%d",shuru2);
            if(shuru2 > 1)
            {
                printf(" ");
            }
            if(shuru2 == 1)
            {
                break;
            }
            shuru2 --;
        }
        printf("\n");
    }

    return 0;

}
