#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int GetDigits(long number)
{
    int digits = 1;

    do
    {
        number /= 10;
        digits++;
    }
    while (number > 10);

    return digits;
}

void GetStringOfNumber(long number, int size, char *outputNormal, char *outputBackwards)
{
    for (int i = (size - 1), counter = 0; i >= 0; i--, counter++)
    {
        int result = number % 10;
        number /= 10;
        char digit = result + '0';
        outputNormal[i] = digit;
        outputBackwards[counter] = digit;
    }

    outputNormal[size] = '\0';
}

void GetEveryDigit(int size, const char *input, char *outputEveryOther, char *outputNonEvery)
{
    for (int i = 0; i < size; i++)
    {
        int result = i % 2;
        if (result == 1)
        {
            outputEveryOther[i / 2] = input[i];
        }
        else
        {
            outputNonEvery[i / 2] = input[i];
        }
    }
}

int GetSumDigit(const char *input, bool isMultiplied)
{
    int totalValue = 0;
    int count = 0;
    while (input[count] != '\0')
    {
        int value = input[count] - '0';
        if (isMultiplied)
        {
            value *= 2;
        }

        do
        {
            int result = value % 10;
            value /= 10;
            totalValue += result;
        }
        while (value > 0);

        count++;
    }

    return totalValue;
}

int main(void)
{
    long card_number;

    do
    {
        card_number = get_long("Enter the card number: ");
    }
    while (card_number < 1);

    long card_number_copy = card_number;
    int digits = GetDigits(card_number);

    if (digits != 13 && digits != 15 && digits != 16)
    {
        printf("INVALID\n");
        return 0;
    }

    char stringNumbers[digits];
    char stringNumbersBackwards[digits];

    int halfDigitsPair = digits / 2;
    int halfDigitsOdd = 0;

    if (digits % 2 == 0)
    {
        halfDigitsOdd = digits / 2;
    }
    else
    {
        halfDigitsOdd = (digits / 2) + 1;
    }

    char charsHighlighted[halfDigitsPair];
    char charsNonHighlighted[halfDigitsOdd];
    charsHighlighted[halfDigitsPair] = '\0';
    charsNonHighlighted[halfDigitsOdd] = '\0';

    GetStringOfNumber(card_number, digits, stringNumbers, stringNumbersBackwards);
    GetEveryDigit(digits, stringNumbersBackwards, charsHighlighted, charsNonHighlighted);

    int sumEveryOtherDigit = GetSumDigit(charsHighlighted, true);
    int sumNonMultipliedDigit = GetSumDigit(charsNonHighlighted, false);

    int totalSumOfDigits = sumEveryOtherDigit + sumNonMultipliedDigit;

    int sumDigits = GetDigits(totalSumOfDigits);

    char stringSumNumbers[sumDigits];
    char stringSumNumbersBackwards[digits];

    GetStringOfNumber(totalSumOfDigits, sumDigits, stringSumNumbers, stringSumNumbersBackwards);

    if (stringSumNumbersBackwards[0] != '0')
    {
        printf("INVALID\n");
        return 0;
    }

    char auxiliarStart[3];
    for (int i = 0; i < 2; i++)
    {
        auxiliarStart[i] = stringNumbers[i];
    }

    auxiliarStart[2] = '\0';
    int starting_number = atoi(auxiliarStart);

    if ((digits == 13 && auxiliarStart[0] == '4') || (digits == 16 && auxiliarStart[0] == '4'))
    {
        printf("VISA\n");
    }
    else if (digits == 15 && (starting_number == 34 || starting_number == 37))
    {
        printf("AMEX\n");
    }
    else if (digits == 16 && (starting_number >= 51 && starting_number <= 55))
    {
        printf("MASTERCARD\n");
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}