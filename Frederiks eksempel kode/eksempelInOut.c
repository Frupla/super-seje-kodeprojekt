#include <stdio.h> // Virker ikke hvis den ikke er der

int main(){
    char string[20];
    int n;
    scanf("%s", string); // bemærk, her giver vi bare string som input, 
    //da den allerede er en pointer
    scanf("%d", &n); // Her giver vi &n, som er adressen på n 
    //altså en pointer til n
    
    printf("%d, %s\n", n, string);
    
    return 0;
}