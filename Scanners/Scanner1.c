#include <stdlib.h>
#include <stdio.h>


int main() {

        char buffer[100];
        char word[];


        printf("Word? ");
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%c", &word);

                printf("Your Word %c Was:\n", word);


        return 0;

}