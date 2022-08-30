#include <stdio.h>
#include<conio.h>
int main() {
    char line[150];
    int vowels, consonant, digit, space;

    vowels = consonant = digit = space = 0;

    printf("Enter a line of string: ");
    fgets(line, 150, stdin);

    for (int i = 0; line[i] != '\0'; ++i) {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
            line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
            line[i] == 'U') {
            ++vowels;
        } else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
            ++consonant;
        } else if (line[i] >= '0' && line[i] <= '9') {
            ++digit;
        } else if (line[i] == ' ') {
            ++space;
        }
    }

    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    printf("\nDigits: %d", digit);
    printf("\nWhite spaces: %d", space);
    
    return 0;
}

/*
#include<stdio.h>
#include<conio.h>
int main ()
{
char line[150];
  int i, len=0, vowels=0, consonants=0, digits=0, spaces=0;
  printf("Enter string: ");
  gets(line);

 while(line[len]!='\0') {++len;}

for (i = 0; line[i]<len; ++i) 
{
if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
      line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U') {++vowels;}
else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) { ++consonants;} 
else if (line[i] >= '0' && line[i] <= '9') {++digits;} 
else if (line[i] == ' ') {++spaces;}
}

 printf("Vowels: %d", vowels);
 printf("\nConsonants: %d", consonants);
 printf("\nDigits: %d", digits);
 printf("\nWhite spaces: %d", spaces);
 return  0;
}
*/
