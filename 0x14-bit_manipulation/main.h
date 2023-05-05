#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *y);
void print_binary(unsigned long int i);
int get_bit(unsigned long int i, unsigned int index);
int set_bit(unsigned long int *i, unsigned int index);
int clear_bit(unsigned long int *i, unsigned int index);
unsigned int flip_bits(unsigned long int i, unsigned long int k);
int get_endianness(void);

int _putchar(char z);

#endif
