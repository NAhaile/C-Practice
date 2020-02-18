#include <stdlib.h>
#include <stdio.h>


int main() {

        char buffer[100];
        char word[];
        int number;


        printf("Word? ");
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%c", &word);
        
        
        printf("Number? ")l
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%d", &number);

                printf("Your Word Was: %c \n", word);
                printf("Your number Was: %d \n", number);


        return 0;

}
