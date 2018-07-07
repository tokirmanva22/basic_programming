#include<stdio.h>
#include<ctype.h>
void main()
{
   char s[100];
   int i=0, w=0, v=0, c=0, n=0, sp=0;
   printf("Enter a string:\n");
   gets(s);
   fflush(stdin);
   while(s[i]!='\0')
   {
      w++;
      if(isdigit(s[i]))
      ++n;
      else if(isalpha(s[i]))
      {
         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            v++;
         else
            c++;
      }
      else
         sp++;
      i++;
   }
   printf("No. of characters: %d\nNo. of vowels=%d\nNo. of Consonants=%d\nNp. of digits=%d\nNo. of special characters=%d",w, v, c, n, sp);
}
