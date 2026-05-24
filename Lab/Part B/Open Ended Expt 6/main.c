#include <stdio.h>

#define FNAME_MAX_LENGTH 50
#define LNAME_MAX_LENGTH 50

int main(){
    char fname[FNAME_MAX_LENGTH], lname[LNAME_MAX_LENGTH];
    char full_name[FNAME_MAX_LENGTH + LNAME_MAX_LENGTH];
    int len = 0;

    printf("Enter the first name of the contact: ");
    gets(fname);
    printf("Enter the last name of the contact: ");
    gets(lname);

    // copy f_name into full_name first
    for(int i=0; fname[i]!='\0'; i++){
        full_name[len] = fname[i];
        len++;
    }
    full_name[len] = ' '; // add a single whitespace after copying fname
    len++; // increment length of full_name by 1 to move to the index after the whitespace

    // append l_name into full_name now
    for(int j=0; lname[j]!='\0'; j++){
        full_name[len] = lname[j];
        len++;
    }
    full_name[len] = '\0'; // terminate full_name with the NULL terminator to enable proper string handling in subsequent operations

    printf("The full name of the contact is: %s\n",full_name);
    const int max_length_allowed = 20; // this is the maximum number of characters that the mobile screen supports displaying
    if(len > max_length_allowed){
        printf("The full name is TOO LONG TO BE DISPLAYED on the mobile screen as its length exceeds the maximum length supported by the mobile.\n");
    }
    else{
        printf("The full name CAN BE DISPLAYED on the mobile screen as its length is within the maximum length supported by the mobile.\n");
    }

    return 0;
}
