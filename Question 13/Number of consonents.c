#include <stdio.h>
#include <string.h>
int main(){
    int count = 0;
    char *str = "hello world";
    char *consonent = "bcdfghjklmnpqrstvwxyz";
    for(int i=0;i<strlen(str);i++){
        for(int j=0;j<strlen(consonent);j++){
            if(str[i]==consonent[j]){
                count++;
                break;
            }
        }
    }
    printf("%d",count);
}
