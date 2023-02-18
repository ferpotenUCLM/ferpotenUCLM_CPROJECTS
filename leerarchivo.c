#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch;
   char file_name[] = "C:\\Users\\ferna\\Documents\\Archivos C\\prueba134.txt";
   FILE *fp;



   fp = fopen(file_name, "r"); // read mode

   if (fp == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }

   printf("The contents of %s file are:\n", file_name);

   while((ch = fgetc(fp)) != EOF)
      printf("%c", ch);

   fclose(fp);
   return 0;
}
