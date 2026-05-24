#include <stdio.h>

struct Book{
	char title[50];
	char author[50];
	int year;
};

int main(){
	struct Book books[100];
	int n;

	printf("Enter the number of books(1-100): ");
	scanf("%d",&n);
	// Reading details of n books
	for(int i=0; i<n; i++){
        getchar();
		printf("Details of Book %d:\n",i+1);
		printf("Enter the book title: ");
		gets(books[i].title);
		printf("Enter the author name: ");
		gets(books[i].author);
		printf("Enter the book publication year: ");
		scanf("%d", &books[i].year);
	}

	printf("\nPrinting the details of all the books...\n");
	for(int i=0; i<n; i++){
        printf("=======================================================\n");
        printf("Book %d:\n",i+1);
        printf("Title: %s\n",books[i].title);
        printf("Author name: %s\n",books[i].author);
        printf("Publication year: %d\n",books[i].year);
	}

	return 0;
}
