#include <stdio.h>

struct stack
{
    char arr[50];
    int top;
};
struct stack st;
//create function
void create(struct stack *s)
{
    s->top = -1;
}

//pushing function
void push(struct stack *s, char a)
{
    s->top++;
    s->arr[s->top] = a;
}

//popping function
char pop(struct stack *s)
{
    if (s->top < 0)
    {
        return 1;
    }
    else
    {
        char k = s->arr[s->top];
        s->top--;

        return k;
    }
}
//checking operand function
int operand(char a)
{
    if (a == '+' || a == '-' || a == '*' || a == '/')
    {
        return 1;
    }
    return 0;
}
//checking precedence
int prec(char a)
{
    if (a == '+' || a == '-')
    {
        return 1;
    }
    else if (a == '*' || a == '/')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

//stacktop function return top element
int stacktop(struct stack *s)
{
    return s->arr[s->top];
}

//function for changing infix to postfix
char ip(char exp[], char postexp[], struct stack *s)
{
    int j = 0;
    int i = 0;
    for (int i = 0; exp[i] != '\0'; i++)
    {
        int m = operand(exp[i]);
        if (m == 0)
        {
            postexp[j] = exp[i];
            j++;
        }
        else
        {
            if (prec(exp[i]) > prec(stacktop(&st)))
            {
                push(&st, exp[i]);
            }
            else
            {
                while (prec(exp[i]) <= prec(stacktop(&st)))
                {
                    postexp[j] = pop(&st);

                    j++;
                }
                push(&st, exp[i]);
            }
        }
    }

    while (s->top != -1)
    {
        postexp[j] = pop(&st);

        j++;
    }
    postexp[j] = '\0';
    int k = 0;
    printf("post fix exp is : ");
    while (postexp[k] != '\0')
    {
        printf("%c", postexp[k]);
        k++;
    }
    return 0;
}

int main()
{
    //calling create function to create stack
    create(&st);
    char exp[25];
    char postexp[25];

    printf("********************\nenter expression : ");
    scanf("%s", exp);
    //callong infix to postfix function
    ip(exp, postexp, &st);
    printf("\n********************\n");
    return 0;
}