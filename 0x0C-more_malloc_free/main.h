#ifndef MAIN_H
#define MAiN_H

#define min(x, y) (((x) < (y)) ? (x) : (y))

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int len(char *str);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _strleng(char *s);
char *create_array(int s);
char *is_zero(char *s);
void _prod(char *prod, char *mul, int d, int z);
void add_n(char *fprod, char *nprod, int nleng);
int is_d(char s);
void print_s(char *s);
void err_r(void);


#endif
