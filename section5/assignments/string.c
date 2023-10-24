#include <stdio.h>

int main ()

{
	
	
	
      char B[20] ;
	  
	  scanf("%s",B);
      int H[26];
      printf ("String is %s \n", B);
      for (int i = 0; i < 26; i++)
      {
            H[i] = 0;
      }
      for (int i = 0; B[i] != '\0'; i++)
      {
           H[B[i]-97]+=1;
      }
      for (int i = 0; i < 26; i++)
      {
            if (H[i] > 1)
           {
                   printf ("%c is repeating", i + 97);
                   printf (": %d times\n", H[i]);
            }
      }
      return 0;
}