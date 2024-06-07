// Q7. WAP in C to open a file & then write some content in it
#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("Akash.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fptr, "Akash is a good boy");
    fclose(fptr);

    return 0;
}


//Q2. What is the concept of Array of Structures in C?
// An array where each element is a structure.

#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
};

int main() {
    struct Student students[2] = {{1, "John"}, {2, "Jane"}};

    for (int i = 0; i < 2; i++) {
        printf("Roll No: %d, Name: %s\n", students[i].roll_no, students[i].name);
    }

    return 0;
}


// Q3. WAP in C to count the no. of words in a file
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fptr;
    char ch;
    int word_count = 0;
    int in_word = 0;

    fptr = fopen("test.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fptr)) != EOF) {
        if (isspace(ch)) {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            word_count++;
        }
    }

    fclose(fptr);
    printf("Word Count: %d\n", word_count);

    return 0;
}



// Q4. WAP in C to copy the data from one file to another file
#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch;

    src = fopen("source.txt", "r");
    dest = fopen("destination.txt", "w");

    if (src == NULL || dest == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");

    return 0;
}



// Q5. Design a structure for a Library Catalogue with the following fields: a) access numbers b) Name c) Book title d) Year of Publication

#include <stdio.h>

// Define the structure
struct LibraryCatalogue {
    int accessNumber;
    char name[100];
    char bookTitle[100];
    int yearOfPublication;
};

int main() {
    // Initialize a sample library catalogue entry
    struct LibraryCatalogue book1 = {12345, "Akash Halder", "Introduction to C Programming", 2020};

    // Print the details of the book
    printf("Access Number: %d\n", book1.accessNumber);
    printf("Name: %s\n", book1.name);
    printf("Book Title: %s\n", book1.bookTitle);
    printf("Year of Publication: %d\n", book1.yearOfPublication);

    return 0;
}
