#include <stdio.h>
#define MAX_LEN 1000
int removetrail(char s[]){
  int i ;
  for(i=0;s[i]!='\n';i++){
    ;
  }
  --i;
  for(;((s[i]==' ')||(s[i]=='\t'))&& i>= 0;--i){
    ;
  }
  if(i>=0){
    i++;
    s[i]='\n';
    i++;
    s[i]='\0';
  }
  return i;
}
int getline(char a[],int lim){
    int i , c ;
    for(i =0 ;((c=getchar())!=EOF)&& (c !='\n')&&i<lim-1;i++){
        a[i] = c;
    }
    if(c=='\n'){
        a[i] =c ;
        i++;
    }
    a[i] = '\0' ;
    return i;
}
int main()
{
   int len;
   char line[MAX_LEN];
   while((len=getline(line,MAX_LEN))>0){
    if(removetrail(line)>0){
       printf("%s",line);
       }
   }

   return 0;
}
