
#include <stdio.h>

int calculateChecksum(int transactionID)
{
    if (transactionID < 10)
    {
        return transactionID;
    }

    int sum = 0;

    while (transactionID > 0)
    {
        sum += transactionID % 10;
        transactionID /= 10;
    }

    return calculateChecksum(sum);
}

int main()
{
    int transactionID;

    printf("Enter Transaction ID: ");
    scanf("%d", &transactionID);

    printf("Digital Root: %d", calculateChecksum(transactionID));

    return 0;
}
