#include <limits.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#define CHARS 256
int max(int a, int b)
{
    return (a > b) ? a : b;
}
void badCharHeuristic(char *str, int size, int badchar[CHARS])
{
    int i;
    for (i = 0; i < CHARS; i++)
        badchar[i] = -1;
    for (i = 0; i < size; i++)
        badchar[(int)str[i]] = i;
}
void search(char *txt, char *pat)
{
    int m = strlen(pat);
    int n = strlen(txt);
    int badchar[CHARS];
    int s = 0;
    badCharHeuristic(pat, m, badchar);
    while (s <= (n - m))
{
int j = m - 1;
while (j >= 0 && pat[j] == txt[s + j])j--;
if (j < 0) { printf("\n pattern occurs at shift = %d", s);
s += (s + m < n) ? m - badchar[txt[s + m]] : 1;
}
else
s += max(1, j - badchar[txt[s + j]]);
}
}
int main() {
char txt[] = "Hello My Name is Abhishek";
char pat[] = "Abhishek";
search(txt, pat);
}