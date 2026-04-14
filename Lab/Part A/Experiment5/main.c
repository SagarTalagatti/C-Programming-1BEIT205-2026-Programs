#include <stdio.h>

int main()
{
    unsigned int pan_nums[] = {1001, 1002, 1003, 1004, 1005};
    unsigned int aadhaar_nums[] = {2001, 2002, 2003, 2004, 2005};
    unsigned int apaar_ids[] = {3001, 3002, 3003, 3004, 3005};
    unsigned int driving_lic[] = {4001, 4002, 4003, 4004, 4005};
    unsigned int passport_nums[] = {5001, 5002, 5003, 5004, 5005};

    unsigned int user_entered_id;
    int choice, is_verified = 0;

    printf("=====KYC Verification System=====\n");
    printf("1. PAN NUMBER based verification\n");
    printf("2. AADHAAR NUMBER based verification\n");
    printf("3. APAAR ID based verification\n");
    printf("4. DRIVING LICENSE based verification\n");
    printf("5. PASSPORT NUMBER based verification\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);

    printf("Enter the ID Number for your selected choice: ");
    scanf("%u",&user_entered_id);

    switch(choice){
        case 1:
            for(int i=0;i<sizeof(pan_nums)/sizeof(unsigned int);i++){
                if(pan_nums[i] == user_entered_id){
                    is_verified = 1;
                    break;
                }
            }
            if(is_verified){
                printf("User VERIFIED SUCCESSFULLY based on PAN NUMBER\n");
            }
            else{
                printf("User NOT VERIFIED as no matching record was found...\n");
            }
            break;
        case 2:
            for(int i=0;i<sizeof(aadhaar_nums)/sizeof(unsigned int);i++){
                if(aadhaar_nums[i] == user_entered_id){
                    is_verified = 1;
                    break;
                }
            }
            if(is_verified){
                printf("User VERIFIED SUCCESSFULLY based on AADHAAR NUMBER\n");
            }
            else{
                printf("User NOT VERIFIED as no matching record was found...\n");
            }
            break;
        case 3:
            for(int i=0;i<sizeof(apaar_ids)/sizeof(unsigned int);i++){
                if(apaar_ids[i] == user_entered_id){
                    is_verified = 1;
                    break;
                }
            }
            if(is_verified){
                printf("User VERIFIED SUCCESSFULLY based on APAAR ID\n");
            }
            else{
                printf("User NOT VERIFIED as no matching record was found...\n");
            }
            break;
        case 4:
            for(int i=0;i<sizeof(driving_lic)/sizeof(unsigned int);i++){
                if(driving_lic[i] == user_entered_id){
                    is_verified = 1;
                    break;
                }
            }
            if(is_verified){
                printf("User VERIFIED SUCCESSFULLY based on DRIVING LICENSE NUMBER\n");
            }
            else{
                printf("User NOT VERIFIED as no matching record was found...\n");
            }
            break;
        case 5:
            for(int i=0;i<sizeof(passport_nums)/sizeof(unsigned int);i++){
                if(passport_nums[i] == user_entered_id){
                    is_verified = 1;
                    break;
                }
            }
            if(is_verified){
                printf("User VERIFIED SUCCESSFULLY based on PASSPORT NUMBER\n");
            }
            else{
                printf("User NOT VERIFIED as no matching record was found...\n");
            }
            break;
        default:
            printf("Invalid choice... Choice must be between 1-5\n");
            return -1;
    }

    return 0;
}
