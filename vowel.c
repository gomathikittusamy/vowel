#include<stdio.h>
#include<conio.h>
void main()
{
char v;
clrscr();
scanf("%c",&v);
if((v>='a'&&v<='z')||(v>='A'&&v<='Z'))
{
if((v=='a'||v=='e'||v=='i'||v=='o'||v=='u')||(v=='A'||v=='E'||v=='I'||v=='O'||v=='U'))
printf("%c is vowel");
else
printf("%c is consonant");
}
else
{
printf("%c is not a vowel or consonant");
}
getch();
}
