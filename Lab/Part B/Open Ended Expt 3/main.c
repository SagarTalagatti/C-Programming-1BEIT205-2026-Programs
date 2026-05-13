#include <stdio.h>

int main()
{
    unsigned int book_ids[50];
    unsigned int book_id_to_search, n_books;

    printf("Enter the number of books(<=50): ");
    scanf("%u", &n_books);

    printf("Enter the book ids of the %u books in ascending order:\n", n_books);
    for(int i=0; i<n_books; i++){
        scanf("%u",&book_ids[i]);
    }

    printf("Enter the book id to search for: ");
    scanf("%u", &book_id_to_search);

    int low, high, mid;
    low = 0;
    high = n_books - 1;
    int found = 0;

    while(low <= high){ // binary search algorithm, needs a sorted array to work!
        mid = (low + high) / 2;
        if(book_ids[mid] == book_id_to_search){
            found = 1;
            break;
        }
        else if(book_ids[mid] < book_id_to_search){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    if(found){
        printf("The book with book id of %u was FOUND in the book shelf!\n", book_id_to_search);
    }
    else{
        printf("The book with book id of %u was NOT FOUND in the book shelf!\n", book_id_to_search);
    }

    return 0;
}
