/**
  *  Copyright (C) 2014-03-31  Handsome Zhou
  */

#ifndef STRING_H
#define STRING_H


 int my_strlen(const char *s);

 char *my_strcpy(char *dest, const char *src); 
 char *my_strncpy(char *dest, const char *src, int n);

 int my_strcmp(const char *src, const char *dst);
 int my_strncmp(const char *src, const char *dst, int n);

#endif	/*STRING_H*/
