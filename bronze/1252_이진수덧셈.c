#include <stdio.h>
#include <string.h>

int max(int a, int b){
    if(a >= b) return a;
    else return b;
}

int min(int a, int b){
	if(a >= b) return b;
    else return a;
}

int main(){
    char a[90]={0}, b[90] = {0}, binary_number1[90]={0}, binary_number2[90]={0}, binary_number[90]={0};
    int n, len1, len2, sum, next = 0;
    int cnt = 0;

    scanf("%s %s", a, b);

    len1 = strlen(a);
    len2 = strlen(b);

    if(a[0] == 48){
        for(int i=0; i<len1-1; i++){
            if(a[i+1] == 49){
                cnt ++;
                strcpy(binary_number1,a + i+1);
                break;

            }
        }
    }
    else{
        cnt++;
        strcpy(binary_number1, a);
    }

    if(b[0] == 48){
        for(int i=0; i<len2-1; i++){
            if(b[i+1] == 49){
                cnt++;
                strcpy(binary_number2,b + i +1);
                break;
            }
        }
    }
    else{
        cnt++;
        strcpy(binary_number2, b);
    }

    if(cnt == 0) printf("0");

    len1 = strlen(binary_number1);
    len2 = strlen(binary_number2);
    n = max(len1, len2);

    for(int i = 0; i< n; i++){
    	
        if(len1-i-1 <0 || len2-i-1 <0){
        	if (len1-i-1 < 0){
        		sum = next + binary_number2[len2-i-1] - 48;
			}
			else if(len2 - i - 1 < 0){
				sum = next + binary_number1[len1-i-1] - 48;
			}
        }
        else{
            sum = next + binary_number1[len1-i-1] + binary_number2[len2-i-1] - 96;
        }
        
        next = 0;
        
        if(sum == 1 || sum == 0) binary_number[i] = sum;

        else if(sum == 2){
            binary_number[i] = 0;
            next++;
        }

        else{
            binary_number[i] = 1;
            next++;
        }

        if(i == n-1 && next == 1) binary_number[n] = 1;
    }

    if(binary_number[n] == 1) printf("1"); 
    for(int i=1; i<=n; i++){
        printf("%d", binary_number[n-i]);
    }

    return 0;
}

