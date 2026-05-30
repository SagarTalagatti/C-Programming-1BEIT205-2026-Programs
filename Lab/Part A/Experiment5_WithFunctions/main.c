#include <stdio.h>

int verify_user(unsigned int *records, int num_entries, unsigned int id_to_search){
    for(int i=0; i < num_entries; i++){
        if(records[i] == id_to_search){
            return 1;
        }
    }
    return 0;
}

int main()
{
    unsigned int pan_nums[] = {1001, 1002, 1003, 1004, 1005};
    unsigned int aadhaar_nums[] = {2001, 2002, 2003, 2004, 2005};
    unsigned int apaar_ids[] = {3001, 3002, 3003, 3004, 3005};
    unsigned int driving_lic[] = {4001, 4002, 4003, 4004, 4005};
    unsigned int passport_nums[] = {5001, 5002, 5003, 5004, 5005};

    unsigned int user_entered_id;
    int choice, num_entries, is_verified = 0;
    unsigned int *arr_ptr = NULL;
    char *id_name;

    printf("=====KYC Verification System=====\n");
    printf("1. PAN NUMBER based verification\n");
    printf("2. AADHAAR NUMBER based verification\n");
    printf("3. APAAR ID based verification\n");
    printf("4. DRIVING LICENSE based verification\n");
    printf("5. PASSPORT NUMBER based verification\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);

    if(choice < 1 || choice > 5){
        printf("Invalid choice... Choice must be between 1-5\n");
        return -1;
    }

    printf("Enter the ID Number for your selected choice: ");
    scanf("%u",&user_entered_id);

    switch(choice){
        case 1:
            arr_ptr = pan_nums;
            id_name = "PAN NUMBER";
            num_entries = sizeof(pan_nums) / sizeof(unsigned int);
            break;
        case 2:
            arr_ptr = aadhaar_nums;
            id_name = "AADHAAR NUMBER";
            num_entries = sizeof(aadhaar_nums) / sizeof(unsigned int);
            break;
        case 3:
            arr_ptr = apaar_ids;
            id_name = "APAAR ID";
            num_entries = sizeof(apaar_ids) / sizeof(unsigned int);
            break;
        case 4:
            arr_ptr = driving_lic;
            id_name = "DRIVING LICENSE";
            num_entries = sizeof(driving_lic) / sizeof(unsigned int);
            break;
        case 5:
            arr_ptr = passport_nums;
            id_name = "PASSPORT NUMBER";
            num_entries = sizeof(passport_nums) / sizeof(unsigned int);
    }

    is_verified = verify_user(arr_ptr, num_entries, user_entered_id);
    if(is_verified){
        printf("User VERIFIED SUCCESSFULLY based on %s\n",id_name);
    }
    else{
        printf("User NOT VERIFIED as no matching %s record was found...\n",id_name);
    }

    return 0;
}
