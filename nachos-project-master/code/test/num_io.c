/* num_io.c
 *	Simple program to test whether the systemcall interface works.
 *
 *	Just do a syscall that read an interger and print it
 *
 */

#include "syscall.h"
#define stdout 1

int main() {

	Write("I am the Child Process\n",25,stdout);

       	PrintNum(ReadNum()); 
}
