#include <stdio.h>

int getLength(long n);
long powerOf10(long n);

int main()
{
    long n;
    long m;

    scanf("%ld %ld", &n, &m);

    int count = getLength(m);
    int len = getLength(n);

    for (int i = 0; i < count; i++)
    {
        long p10_partition = powerOf10(count - i - 1);
        int partition = m / p10_partition;
        m -= partition * p10_partition;

        long p10_segment = powerOf10(len - partition);
        long segment = n / p10_segment;
        n -= segment * p10_segment;
        len -= partition;

        printf("%ld\n", segment);
    }

    return 0;
}

long powerOf10(long n)
{
    long output = 1;
    for (int i = 0; i < n; i++)
    {
        output *= 10;
    }

    return output;
}

int getLength(long n)
{
    int len = 0;
    while (n != 0)
    {
        n /= 10;
        len++;
    }

    return len;
}
