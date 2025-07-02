#include <stdio.h>
#include <string.h>

void main(){
char a[10000];
int b[26]={0};
printf("Enter a string::");
gets(a);
strlwr(a);
for(int i=0;a[i]!='\0';i++){
if(a[i]>='a' && a[i]<='z'){
b[a[i] - 'a']++;
}
}
for(int i=0;i<26;i++){
printf("%c\t\t%d\n",'a'+i,b[i]);
}
}