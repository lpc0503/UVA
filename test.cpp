/*
 * Uva 11541 - Decoding
 * author: roy4801
 * AC(C++) 0.000
 */
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("2.out", "w", stdout);
    #endif
    int cases, i = 1, time;
    char c;

    scanf("%d ", &cases);

    while(cases--)
    {
        printf("Case %d: ", i++);
        while(scanf("%c%d", &c, &time) == 2)
        {
            for(int i = 0; i < time; i++)
                putchar(c);
        }
        putchar('\n');
    }

    return 0;
}