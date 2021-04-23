#include<stdio.h>    
int main()
{    
char v;    
printf("enter alphabet");  
scanf("%s",&v); 
switch(v)
{
case 'a':
printf("a is vowel");
break;
case 'e':
printf("e isvowel");
break;
case 'i':
printf("i is vowel");
break;
case 'o':
printf("o is vowel");
break;
case 'u':
printf("u it vowel");
break;
default:
printf("its consonant");
}
return 0;  
}    