#ifndef __SLIDE_LINE_H__
#define __SLIDE_LINE_H__

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

#define SLIDE_LEFT 0
#define SLIDE_RIGHT 1

int slide_line(int *line, size_t size, int direction);

#endif /* __SLIDE_LINE_H__ */
