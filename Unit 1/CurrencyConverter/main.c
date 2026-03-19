#include <stdio.h>
#include <stdlib.h>

int main()
{
    float source_currency, target_currency, conversion_rate;
    char source_currency_name[10], target_currency_name[10];

    printf("Enter the name of source currency (USD/INR/SAR/BHD etc.): ");
    scanf("%s", source_currency_name);
    printf("Enter the name of target currency (USD/INR/SAR/BHD etc.): ");
    scanf("%s", target_currency_name);

    printf("Enter the amount of source currency %s: ",source_currency_name);
    scanf("%f",&source_currency);
    printf("Enter the conversion rate for %s to %s: ",source_currency_name, target_currency_name);
    scanf("%f",&conversion_rate);

    target_currency = source_currency * conversion_rate;
    printf("After conversion, %f %s = %f %s\n",source_currency, source_currency_name, target_currency, target_currency_name);

    return 0;
}
