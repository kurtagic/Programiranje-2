// Largest Palindrome Product

#include <stdbool.h>
#include <stdio.h>

bool isPalindrome(int n);
int generateReverseNumber(int n);
int main()
{
    int largestPalindromeProduct = 0;

    for (int i = 100; i < 1000; i++)
    {
        for (int j = 100; j < 1000; j++)
        {
            int product = i * j;
            if (isPalindrome(product) && product > largestPalindromeProduct)
            {
                largestPalindromeProduct = product;
            }
        }
    }

    printf("%d\n", largestPalindromeProduct);

    return 0;
}

bool isPalindrome(int n)
{
    int original = n;
    int reversed = generateReverseNumber(n);

    return original == reversed;
}

int generateReverseNumber(int n)
{
    int reversed = 0;

    while (n != 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return reversed;
}
