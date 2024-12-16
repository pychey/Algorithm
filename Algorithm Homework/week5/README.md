[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/uOgTQ8jP)
# Week 5 - Stack & Queue

## 1. Stack
By using `stack`, write a method in [Exercise1.hpp](Exercise1.hpp) which accept a string as an argument and return `true` if it contains a valid parenthesis (no parenthesis included) pattern, `false` otherwise.

### Example:
* Sentence: `I love programming` -> `true`
* Sentence: `f(x) = ax + b` -> `true`
* Sentence: `This is invalid ( that's never end` -> `false`


## 2. Queue
By using `queue`, write methods in [Exercise2.hpp](Exercise2.hpp) which simulate a printer queue.
* `add()` method should accept the list of integers which represent for pages.
* `run` method is the process of printer takes the jobs one by one until finish all the job.

### Tasks:
Simulate the Printer Queue:
* Add all print jobs (integers) to the queue.
* Process each job by printing its page count and removing it from the queue.
* Return the total number of pages printed after the queue is empty.

### Example:
* Input: `[5, 3, 8, 6]`
* Output:
    ```mathematica
    Printing 5 pages
    Printing 3 pages
    Printing 8 pages
    Printing 6 pages
    Total pages printed: 22
    ```


## 3. Test Your code
In [main.cpp](main.cpp), try to test if your code is working properly both Stack and Queue implementation.


## **Happy Coding!**
