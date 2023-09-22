#include <stdio.h>
#include <string.h>
int main()
{
   char s[150];
   int i=0;
   printf("Enter the string: ");
   scanf("%[^\n]",s);
   for(i=0;s[i]!='\0';i++){
       if(s[i]>='a'&&s[i]<='z'){
           s[i] = s[i]-32;
       }
   }
   printf("The string in uppercase is: %s", s);
   return 0;
}
