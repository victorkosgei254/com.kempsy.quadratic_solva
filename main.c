#include <stdio.h>

int solve(char *token)
{
    while(*token != '\0')
    {
        switch (*token) {
            case '^':
                {
                    break;
                }
            case '-':
                {
                    break;
                }
            case ';':
                {
                    break;
                }
            case '=':
                {
                    break;
                }
            case '+':
                {
                    break;
                }
            default:
                continue;
        }
        token++;
    }
    return (0);
}
int main(void)
{
    solve("a^2 + b^3 -2 = 23; a^5 + b^3 -32 =11");

    return (0);
}
