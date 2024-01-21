#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>
#include <stdarg.h>
#include <ctype.h>
#include <string.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void push(stack_t **stack, unsigned int line_number, const char *n);
void pall(stack_t **stack, unsigned int line_number);
int error_argc(void);
int error_open(char *argument);
int error_push(int line_number);
int error_inst(int line_number, char *opcode);
int pint(stack_t **stack);
int pop(stack_t **stack);
int add(stack_t **stack, int line_number);
int swap(stack_t **stack);
void cases(stack_t **stack, int line_number, char *opcode, char *argument);
void nop(stack_t **stack, int line_number);
int sub(stack_t **stack, int line_number);
int divide(stack_t **stack, int line_number);
int multiply(stack_t **stack, int line_number);

#endif
