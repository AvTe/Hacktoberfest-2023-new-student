#include <stdio.h>

int main() {
    FILE* file;
    file = fopen("sample.txt", "w");
    
    if (file == NULL) {
        printf("File could not be opened.");
        return 1;
    }
    
    fprintf(file, "Hello, File!\n");
    fclose(file);
    
    return 0;
}
