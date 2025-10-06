#include <stdio.h>

int main()
{
    int id1, id2, id3;
    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &id1, &id2, &id3);

    if (id1 > id2 && id1 < id3)   // id1 está entre id2 e id3
    {
        printf("Francisca tem %d anos\n", id1);
    }
    else if (id1 < id2 && id1 > id3)   // id1 está entre id3 e id2
    {
        printf("Francisca tem %d anos\n", id1);
    }
    else if (id2 > id1 && id2 < id3)   // id2 está entre id1 e id3
    {
        printf("Francisca tem %d anos\n", id2);
    }
    else if (id2 < id1 && id2 > id3)   // id2 está entre id3 e id1
    {
        printf("Francisca tem %d anos\n", id2);
    }
    else if (id3 > id1 && id3 < id2)   // id3 está entre id1 e id2
    {
        printf("Francisca tem %d anos\n", id3);
    }
    else if (id3 < id1 && id3 > id2)   // id3 está entre id2 e id1
    {
        printf("Francisca tem %d anos\n", id3);
    }

    return 0;
}
