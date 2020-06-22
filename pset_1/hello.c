#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("Please enter your name:\n");
    printf("Hello, %s! Nice to meet you.\n", answer);
}