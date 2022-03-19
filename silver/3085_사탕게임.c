#include <stdio.h>
#include <stdbool.h>

char candy[50][50];
int n;
int Max(int a, int b);
void change(char* a, char* b);
int search();

int main(){
    int max = 0;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%s", candy[i]);
    }

    //행 변환
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(candy[i][j] != candy[i][j+1]){
                change(&candy[i][j], &candy[i][j+1]);
                max = Max(max,search());
                change(&candy[i][j+1],&candy[i][j]);
            }
        }
    }

    //열 변환
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(candy[j][i] != candy[j+1][i]){
                change(&candy[j][i], &candy[j+1][i]);
                max = Max(max,search());
                change(&candy[j+1][i],&candy[j][i]);
            }
        }
    }
    printf("%d", max);
    return 0;
}

int Max(int a, int b){
    if(a>=b) return a;
    else return b;
}

void change(char* a, char* b){
    char tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int search(){
    int row = 1, columm = 1, max = 0;
    for(int i =0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(candy[i][j] == candy[i][j+1]){
                row++;
                if(j == n-2){
                    max = Max(max,row);
                    row = 1;
                }
            }

            else {
                max = Max(max,row);
                row = 1;
            }

            if(candy[j][i] == candy[j+1][i]){
                columm++;
                if(j == n-2){
                    max = Max(max,columm);
                    columm = 1;
                }
            }

            else{
                max = Max(max,columm);
                columm = 1;
            }
            
        }
        row = 1; columm = 1;
    }
    return max;
}

int factorial_iterative(int n){
    int sum = 1;

    for(int i=1; i<=n; i++){
        sum *= i;
    }

    return sum;
}

int Fibonacci_iterative(int n){
    int num[100] = { 0 };

    num[0] = 0;
    num[1] = 1;


    for(int i = 2; i<=n; i++){
        num[i] = num[i-1] + num[i-2];
    }

    return num[n];

}