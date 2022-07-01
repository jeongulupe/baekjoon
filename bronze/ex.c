//Recursion 2
float power(float x, int n) {
    float result = 1;
    for(int i=0; i<n; i++){
        result *= x;
    }
    return result;
}

//Linked List Section 4.4.5 1번
#include <stdio.h>
#include <stdlib.h>
typedef struct polyNode *polyPointer;
typedef struct polyNode{
    float coef;
    int expon;
    polyPointer link;
};

void pread(int n){
    polyPointer head, tail, temp;
    float coefficient;
    int exponent;
    head = NULL;
    tail = NULL;
    for(int i=0; i<n; i++){
        scanf("%f %d", &coefficient, &exponent);
        temp = (polyPointer)malloc(sizeof(struct polyNode));
        temp -> coef = coefficient;
        temp -> expon = exponent;
        temp -> link = NULL;

        if(head == NULL) {
            head = temp; 
        }
        else{
            tail->link = temp;
        }
        tail = temp;
    }
}
//Linked List Section 4.4.5 3번
float peval(float x, polyPointer a){
    polyPointer temp;
    float sum = 0;
    for(temp = a; temp; temp = temp->link){
        sum += (temp->coef)*pow(x,temp->expon);
    }
    return sum;
}


