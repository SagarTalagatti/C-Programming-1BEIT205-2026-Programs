#include <stdio.h>

int main()
{
    char mob_no[20];
    unsigned int digit;
    unsigned int digit_freq[10] = {0};

    printf("Enter a phone/mobile number: ");
    scanf("%s",&mob_no);

    for(int i=0;mob_no[i]!='\0';i++){
        digit = mob_no[i] - '0';
        digit_freq[digit]++;
    }

    printf("Digit frequency in the enter phone/mobile number:\n");
    for(int i=0;i<10;i++){
        printf("Digit = %d, Frequency = %u\n",i,digit_freq[i]);
    }

    return 0;
}
