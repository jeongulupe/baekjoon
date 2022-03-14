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

// 처음에 단순히 pow(a,b)로 제곱수를 구한 후 10으로 나눈 나머지를 출력할려고 하니 a와 b의 정수범위 때문에 제곱수의 값이 너무 커졌었다.
// 그래서 a를 계속 곱해 나갈 때 곱해 나간 수의 일의 자리만 필요하므로 일의 자리에다가 a를 계속 곱해 나가는 방식으로 바꿨다. 