#include <stdio.h>
#include <math.h>
int main(){
    long long int n, non = 0,tmp = 0, sum=0;
    scanf("%lld", &n);

    char str[n+1];
    scanf("%s", str);

    for(int i=0; i<n; i++){
        int k = 0, cnt = 0;
        
        if(str[i]>=48 && str[i]<= 57){
            while(str[i+k+1]<58){
                if(str[i+k+1] == '\0') break;
                cnt++;
                k++;
            }

            if(k>5){
                i += k;
            }

            else{
                sum += (long long int)(str[i]-48)*(long long int)pow(10,cnt);
                non++;
            }
        }
    }

    printf("%lld", sum);

}