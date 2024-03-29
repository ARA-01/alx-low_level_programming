#ifndef MAIN_H
#define MAIN_H

char *_strstr(char *haystack, char *needle);
char *_strpbrk(char *s, char *accept);
char *_strchr(char *s, char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _atoi(char *s);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
void _puts(char *s);
unsigned int _strspn(char *s, char *accept);

#endif
