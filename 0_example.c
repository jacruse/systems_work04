#include <stdio.h>
#include <string.h>

/*

strcpy(char * dest, char * orig): copies an entire String from one mem address
to another

strncpy(char * dest, char * orig, int n): like strcpy but only the first n 
characters. Be careful that if you hit the limit on the length of dest while 
filling with chars from orig, there will be no null terminator

*/



int main() {
  char greeting[] = "hello there friend";
  char greet_b[5];
  char greet[6];
  char greet_f[50];

  strncpy(greet_b, greeting, 5);
  strncpy(greet, greeting, 5);
  strncpy(greet_f, greeting, 50);

  printf("using strncpy()\n----------------------\n");

  printf("strncpy(greet_b, greeting, 5);\n");
  printf("first 5 chars of \"%s\" copied into size 5 char array\nthis will result in no null ending and mess with normal string function\nresult: %s\n", greeting, greet_b);

  printf("\n");
  
  printf("first 5 chars of \"%s\" copied into size 6 char array\nthis will result in no null ending and mess with normal string function\nresult: %s\n", greeting, greet);

  printf("\n");
  printf("must set own null to make valid string\n");

  greet[5] = 0;
  printf("null of size 6 array set and will result in normal string function\nresult: %s\n", greet);

  printf("\nfirst 50 chars of \"%s\" copied into size 50 char array\nthis will result in no null ending and mess with normal string function\nresult: %s\n", greeting, greet_f);
  
  printf("\nThere are less than 50 chars in the greeting so the copy function works as \nstrcpy() when going copying from a source that has less than the desired number \nof copied chars \ncopied string:%s \n", greet_f);

  printf("\nthings learned:");
  
  printf("\n------------DON'T COPY INTO LAST ARRAY PLACE WITH STRNCPY-------------\n");

  //-----------------------------------------------------------------------

  char bye[] = "goodbye";
  char peace[15];
  char broken[5];

  printf("\n \nstrcpy();\ncopies a string (including '0') into another place s long as there is enough \nspace in new location\n \n");
  
  strcpy(peace, bye);
  printf("\"goodbye\" has been copied into array of size 15 with strcpy() and should \nfunction as normal string \nresult: %s \n \n", peace);

  //strcpy(broken, bye);
  //printf("\"goodbye\" has been copied into array of size 5 with strcpy() and shall \ncause error \nresult: %s \n", broken);
  
  printf("must uncomment to see result");
  
  

  
  

  
}
