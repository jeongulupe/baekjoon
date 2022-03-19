#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char num[100010];
int compare(const void* a, const void* b);

int main(){
    int cnt = 0, sum = 0;
    scanf("%s", num);

    int len = strlen(num);

    for(int i=0; i<len; i++){
        if(num[i] == '0') cnt ++;
        sum += (num[i]-48);
    }

    if(sum % 3 == 0 && cnt > 0){
        qsort(num,sizeof(num)/sizeof(char), sizeof(char), compare);
        printf("%s", num);
    }
    else printf("-1");
    
    return 0;
}

int compare(const void* a, const void* b) {
	const char* n1 = (const char*)a;
	const char* n2 = (const char*)b;
	if (*n1 > *n2) {
		return -1;
	}
	else if (*n1 == *n2) {
		return 0;
	}
	else {
		return 1;
	}
}


    



