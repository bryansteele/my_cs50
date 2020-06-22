#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("Please enter your name:\n");
    printf("Hello, %s! Wonderfull to meet you.\n", answer);
}