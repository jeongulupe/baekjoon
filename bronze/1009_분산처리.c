#include <stdio.h>
int main(){
    int T;
    scanf("%d", &T);

    int a,b;
    for(int i=0; i<T; i++){
        scanf("%d %d", &a, &b);
        int mod = 1;
        int num;

        for(int j=0; j<b; j++){
            num = mod*a;
            mod = num%10;
        }

        if(mod == 0) printf("10\n");
        else printf("%d\n", mod);
    }   
    return 0;
}