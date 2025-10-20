# MODULE-1-
Module 1 respository for lab
# C Programming Practice Programs

1.# Program: Display Character from ASCII Value

**Aim:**  
To write a C program that reads an integer value and displays its corresponding ASCII character.

---

**Algorithm:**  
1. Start the program.  
2. Declare an integer variable `num`.  
3. Read the integer input from the user using `scanf()`.  
4. Use the `printf()` function to display the corresponding ASCII character of the entered number using `%c` format specifier.  
5. End the program.

---

**Source Code:**
```c
#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    printf("Character of ASCII Value %d is %c", num, num);
    return 0;
}
```
**output**

<img width="780" height="199" alt="image" src="https://github.com/user-attachments/assets/ed1ffff5-9456-476c-b00b-87bcc8810f8a" />


**Result\n**
The program successfully prints the character corresponding to the given ASCII value.
---

2.

