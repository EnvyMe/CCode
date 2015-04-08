#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int Quart = 0, Dime = 0, Nick = 0, Penn = 0;
    float Total;

    do
    {
        printf("Input amount of money to be converted into change:");
        Total = GetFloat();
    }
    while (Total < 0.0);
    
    while (Total > 0.0)
    {
        if (Total - 0.25 > 0.0)
        {
            Quart++;
            Total = Total - 0.25;
        }
        else if (Total - 0.10 > 0.0)
        {
            Dime++;
            Total = Total - 0.10;
        }
        else if (Total - 0.05 > 0.0)
        {
            Nick++;
            Total = Total - 0.05;
        }
        else if (Total - 0.01 > 0.0)
        {
            Penn++;
            Total = Total - 0.01;
        }
    }
    
    printf("%d", Quart+Dime+Nick+Penn);
}
