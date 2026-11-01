#include<stdio.h>
#include<stdlib.h>
void Display(char *str)
{
    printf("%s\n",str);

}
int main()
{
    char Arr[100];

    printf("Enter a String :");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return EXIT_SUCCESS;
}