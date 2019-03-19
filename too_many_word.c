#include <stdio.h>
#include <ctype.h>
int main(void)
{
   char ch;

   while (scanf("%c", &ch) != EOF) {
      printf("%c\n", ch);
   }
   return 0;
}
