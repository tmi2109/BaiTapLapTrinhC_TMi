#include <stdio.h>
int main(void) {
    printf("Cac so nguyen co 2 chu so va la boi cua 7: \n");
    for (int i = 10; i <= 99; i++)
    {
        if (i % 7 == 0)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}
