### [0. Slide line](./0-slide_line.c)

Write a function that slides and merges an array of integers.

* Prototype: `void slide_line(int *line, size_t size, int direction);`
  * Where `line` is a pointer to an array of integers containing `size` elements, that must be slided & merged
  * And `direction` is either:
    * `SLIDE_LEFT`
    * `SLIDE_RIGHT`

### [1. Slide line Exercises](./1-main.c)

Add the following functions:

* `void print_array(int *a, size_t size)`
* `void slide_line(int *line, size_t size, int direction)`

### [2. Slide line Extended](./100-slide_line.c)

Write a function that slides and merges an array of integers.

* Prototype: `void slide_line(int *line, size_t size, int direction);`
  * Where `line` is a pointer to an array of integers containing `size` elements, that must be slided & merged
  * And `direction` is either:
    * `SLIDE_LEFT`
    * `SLIDE_RIGHT`
  * The function can assume that `line` contains at least 2 elements

* The function should slide the `line` according to the direction parameter
  * If `direction` is `SLIDE_LEFT`, all the elements of `line` should be slided to the beginning of the array
    * The order of the elements should not be changed
    * The `SLIDE_LEFT` should merge the numbers in the `line` to the left
    * If two identical numbers are adjacent, it should add both of them
  * If `direction` is `SLIDE_RIGHT`, all the elements of `line` should be slided to the end of the array
    * The order of the elements should not be changed
    * The `SLIDE_RIGHT` should merge the numbers in the `line` to the right
    * If two identical numbers are adjacent, it should add both of them

* Examples:

```
$ ./100-slide_line

SLIDE_LEFT
------------------------------
{ 0, 0, 0, 0, 0 }
{ 0, 0, 0, 0, 0 }

SLIDE_RIGHT
------------------------------
{ 0, 0, 0, 0, 0 }
{ 0, 0, 0, 0, 0 }

SLIDE_LEFT
------------------------------
{ 2, 2, 2, 2, 2 }
{ 4, 4, 0, 0, 0 }

SLIDE_RIGHT
------------------------------
{ 2, 2, 2, 2, 2 }
{ 0, 0, 0, 4, 4 }

SLIDE_LEFT
------------------------------
{ 2, 2, 2, 0, 0 }
{ 4, 4, 0, 0, 0 }

SLIDE_RIGHT
------------------------------
{ 2, 2, 2, 0, 0 }
{ 0, 0, 0, 4, 4 }

SLIDE_LEFT
------------------------------
{ 0, 0, 2, 2, 0 }
{ 4, 4, 0, 0, 0 }