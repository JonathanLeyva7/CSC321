//Jonathan Leyva
//CSC 321
//Lab#5

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
        int x = 5;
        double y = 2.23;
        char J = 'J';
        float z = 3.14;

        printf("int variable x = %d , address = %p\n",x,&x);
        printf("double variable y = %f, address = %p\n", y,&y);
        printf("char variable J = %c, address = %p\n", J,&J);
        printf("float variable z = %f, adress = %p\n", z, &z);

        if(x < 6)
        {
                int a = 4;
        }
        printf("int a = %d\n", a);

        int b[10] = {1,2,3,4,5,6,7,8,9,10};
        int i;

        for(i = 0;i < 10; i++)
        {
                printf("b[%d] = %d, address%p\n",i,i,&b[i]);
        }

        return EXIT_SUCCESS;
}
