#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    struct
    {
        int x,y;
    }point1;

    puts("Enter x :");
    scanf("%d",&point1.x);
    puts("Enter y :");
    scanf("%d",&point1.y);
    printf("Point Coordinate:(%d,%d)\n",point1.x,point1.y);

    struct
    {
        int width,height;
    }rect={5,8};

    printf("Point Coordinate:(%d,%d)\n",rect.width,rect.height);

    return 0;
}
