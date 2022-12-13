#include <stdio.h>
void printTriangle(int n)
{
    if (n < 1)
    {
        return;
    }
    else if (n <= 3)
    {
        int i = 1;
        int j = 1;
        while (i <= n)
        {
            while (j <= n)
            {
                if (j < (n - i + 1))
                {
                    printf(" ");
                }
                else
                {
                    printf("+");
                }
                j++;
            }
            printf("\n");
            j = 1;

            i++;
        }
    }
    else
    {
        int i = 1;
        int j = 1;
        while (i < n)
        {
            while (j <= n)
            {
                if (j < (n - i + 1))
                {
                    printf(" ");
                }
                else
                {
                    if (i <= 2)
                    {
                        printf("+");
                    }
                    else
                    {
                        if (j == (n - i + 1) || j == n)
                        {
                            printf("+");
                        }

                        else
                        {
                            printf("-");
                        }
                    }
                }

                j++;
            }

            printf("\n");
            j = 1;

            i++;
            if (i == n)
            {
                int x = 0;
                while (x < n)
                {
                    printf("+");
                    x++;
                }
                printf("\n");
            }
        }
    }
}
void printRectangle(int x, int y)
{
    if (x < 1 || y < 1)
    {
        return;
    }
    else
    {
        for (int i = 1; i <= y; i++)
        {
            for (int j = 1; j <= x; j++)
            {
                if (i == 1 || i == y)
                {
                    printf("+");
                }
                else
                {
                    if (j == 1 || j == x)
                    {
                        printf("+");
                    }
                    else
                    {
                        printf("-");
                    }
                }
            }
            printf("\n");
        }
    }
    return;
}
void printFormat(int x, int y, int z)
{
    int v = 1;

    if ((x < 1 && y < 1) || (x < 1 && z < 2))
    {
        return;
    }

    else if (y < 1 && z < 2)
    {
        for (int i = 1; i <= x; i++)
        {
            if (i == x)
            {
                printf("%-d\n", i);
                return;
            }
            else
            {
                printf("%-d\t", i);
            }
        }
        return;
    }
    if (x < 0)
    {
        return;
    }
    else if (y < 1)
    {
        for (int i = 1; i <= x; i++)
        {
            if ((v % z) == 0)
            {
            }

            else if (v < x)
            {
                if ((v + 1) == x && ((v + 1) % z) == 0)
                {
                    printf("%-d\n", v);
                    return;
                }
                else
                {
                    printf("%-d\t", v);
                }
            }
            else if (v == x)
            {
                if ((v % z) == 0)
                {
                    printf("\n");
                }
                else
                {
                    printf("%-d\n", v);
                }
                return;
            }

            v++;
        }
    }
    else if (z < 2)
    {
        while (v <= x)
        {
            for (int i = 1; i <= y; i++)
            {
                if (v < x)
                {
                    if (i == y)
                    {
                        printf("%-d", v);
                    }
                    else
                    {
                        printf("%-d\t", v);
                    }
                }
                else if (v == x)
                {
                    printf("%-d\n", v);
                    return;
                }

                v++;
            }
            printf("\n");
        }
    }

    else
    {

        while (v <= x)
        {
            for (int i = 1; i <= y; i++)
            {
                if (v < (x - 1))
                {
                    if ((v % z) != 0)
                    {
                        if (i == y)
                        {
                            printf("%-d", v);
                        }
                        else
                        {
                            printf("%-d\t", v);
                        }
                    }
                    else
                    {
                        i--;
                    }
                }
                else if (v == (x - 1))
                {

                    if (((v) % z) != 0)
                    {

                        if (i == y)
                        {
                            printf("%d", v);
                        }
                        else
                        {
                            if (((v + 1) % z) == 0)
                            {
                                printf("%d\n", v);
                                return;
                            }
                            else
                            {
                                printf("%d\t", v);
                            }
                        }
                    }
                    else
                    {
                        i--;
                    }
                }
                else
                {
                    if ((v % z) != 0)
                    {
                        printf("%-d\n", v);
                    }

                    return;
                }
                v++;
            }
            printf("\n");
        }
    }
}