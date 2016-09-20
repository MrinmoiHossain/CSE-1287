#include <stdio.h>

double calculator(int x, int y, char opr);

int main(void)
{
    int a, b;
    char ch;
    double res;

    printf("Enter an operator(+, -, *, /):\n");
    ch = getchar();

    if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        res = calculator(a, b, ch);
    }
    else{
        printf("You entered wrong operator\n");
    }

    printf("The result is: %0.2lf\n", res);
}

double calculator(int x, int y, char opr)
{
    double ans;

    switch(opr)
    {
        case '+':
            ans = x + y;
            break;
        case '-':
            ans = x - y;
            break;
        case '*':
            ans = x * y;
            break;
        case '/':
            if(y != 0)
                ans = (double)x / y;
                break;
    }
    return ans;
}
