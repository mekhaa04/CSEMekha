#include <stdio.h>
#include <string.h>

int main() {
    int valid=0;
    char a[25];
    printf("enter a string with * and #\n");
    scanf("%s", &a);
    int len=strlen(a);
    for(int i=0;i<len;i++)
      {
          if(a[i]=='*')
           valid++;
          else if(a[i]=='#')
          valid--;
      }
      printf("%d", valid);
    return 0;
}
