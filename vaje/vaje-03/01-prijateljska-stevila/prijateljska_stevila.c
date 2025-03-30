#include <stdio.h>

#define NO_FRIEND -1

int get_friendly_number(int n);
int get_divisiors_sum(int n);

int main()
{
    int n;
    scanf("%d", &n);

    int friendly_number = get_friendly_number(n);

    if (friendly_number == NO_FRIEND)
    {
        printf("NIMA");
    }
    else
    {
        printf("%d", friendly_number);
    }

    printf("\n");

    return 0;
}

int get_friendly_number(int n)
{
    int friend = get_divisiors_sum(n);
    int friend_divisors = get_divisiors_sum(friend);

    if (friend == n)
    {
        return NO_FRIEND;
    }

    return (friend_divisors == n) ? friend : NO_FRIEND;
}

int get_divisiors_sum(int n)
{
    int sum = 0;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    return sum;
}
