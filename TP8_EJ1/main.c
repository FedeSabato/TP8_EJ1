/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: fede
 *
 * Created on October 11, 2020, 3:00 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(void) {

    char a = 'h';
    void *p;
    p = &a;
    printf("a: %c\n", *p);
    
    return (0);
}

