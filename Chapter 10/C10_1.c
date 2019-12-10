#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

/*External variables*/
char contents[STACK_SIZE];
int top = 0;

/*Function declaration*/
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow();
void stack_underflow();

int main()
{
    char input;
    bool is_nested = true;

    printf("Enter parentheses and/or braces: ");
    while((input = getchar()) != '\n')
    {
        if(input == '(' || input == '{')
            push(input);
        if(input == ')' && pop() != '(')
            is_nested = false;
        if(input == '}' && pop() != '{')
            is_nested = false;
    }

    if(is_empty() == false) //not empty
        is_nested = false;

    if(is_nested)
        printf("Parenthesis/braces are nested properly\n\n");
    else
        printf("Parenthesis/braces are not nested properly\n\n");

    return 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

char pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow()
{
    printf("Stack overflow\n\n");
    exit(0);
}

void stack_underflow()
{
    printf("Stack underflow\n\n"); //Too many right parentheses/braces
    exit(0);
}
