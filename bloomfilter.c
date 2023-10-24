#include <stdint.h>
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define SIZE 10

int hash(int key);
bool if_found(int key);
uint64_t* ptr;
//#define START ptr

int main(int book_no){
    ptr = (uint64_t*)calloc(SIZE, sizeof(bool));
    printf("%p\n",ptr);
    printf("%p\n",*ptr);
    int x = hash(21);
    *ptr |= (0x1<<x);
    //*ptr &= ~(0x1<<x);
    printf("%d\n",*ptr);
    if_found(22);
    return 1;
}

int hash(int key){
    int hash_index = key%SIZE;
    return hash_index;
}

bool if_found(int key){
    int x = hash(key);
    if(*ptr &= (1<<x)){
        printf("Found");
    }else{
        printf("no");
    }
}
