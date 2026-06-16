#include <stdio.h>
int main()
{
    int cells;
    int days;
    printf("welcome to our first cell growth simulation project in which we have implied basic knowledge and functions of c language\n");
    printf("note that this is only for mitotic assuming that cells double every day of input\n");
    printf("what is the day of your cell replication");
    scanf("%d", &days);
    printf("what is your current cell population ");
    scanf("%d", &cells);
    printf("based on your input your number of cells are %d", days * 2);
}
