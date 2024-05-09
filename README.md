<h1> The Holberton Shell </h1></p>

The Gates of Shell is a Holberton School project designed to be explored in teams of 2.
<p align="center">
<img src="https://blog.holbertonschool.com/wp-content/uploads/2019/04/instagram_feed180-1024x1024.jpg" width="500" height="400">
<h1> C - Simple Shell project </h1></p>

## Learning Objectives
When you work on a Holberton Shell project, it involves creating a simple shell program that can interpret and execute commands. At the end of this project, you are expected to be able to explain to anyone, without the help of Google:


## General


- *Who designed and implemented the original Unix operating system:*
 - The original Unix operating system was designed and implemented by Ken Thompson, Dennis Ritchie, and others at Bell Labs (AT&T) in the early 1970s.
- *Who wrote the first version of the UNIX shell:*
 - Ken Thompson is the author of the original version of the UNIX shell known as the Thompson shell or sh.
- *Who invented the B programming language (the direct predecessor to the C programming language):*
 - Ken Thompson is credited with inventing the B programming language, which directly preceded the C programming language.
- *Who is Ken Thompson:*
 - A computer scientist pivotal in Unix OS development, significant contributions to the B programming language, and co-creation of the C programming language.
- *How does a shell work?*
 - A shell serves as a pivotal command-line interpreter, bridging the interaction between users and the operating system. Functioning as an intermediary interface, it welcomes commands from users and orchestrates their execution. Essentially, the shell operates as a conduit, facilitating seamless communication between the user's instructions and the underlying functions of the operating system.

### Shell Operations

- *Shell Functionality:*
  - Acts as a command-line interpreter, executing user-provided commands, bridging user and OS interactions.
- *PID and PPID:*
  - Processes are spawned using system calls like fork() in C, duplicating the calling process.PID (Process ID) uniquely identifies each process, while PPID denotes the parent process ID.
- *Environment Manipulation:*
  - Utilizes environment variables; commands like export in Unix/Linux modify the process environment.
- * Function vs. System Call:*
  - Functions are specific code segments within a program, whereas system calls request services from the OS kernel.
- *Process Creation:*
  - Processes are spawned using system calls like fork() in C, duplicating the calling process.

### Main Prototypes

- Three 'main' Prototypes in C:
  - 'int main(void)'
  - 'int main(int argc, char *argv[])'
  - 'int main(int argc, char *argv[], char *envp[])'

### Execution and Control

- *Program Execution via execve:*
  - The execve() system call in C executes another program, replacing the current process image.
- *Suspending Process Execution:*
  - The wait() system call suspends a process until one of its child processes terminates.
- *EOF (End-of-File):*
  - Denotes the end of data in a file or stream, triggered in Unix-like systems by Ctrl+D.


## Requirments


*	Allowed editors: vi, vim, emacs
*	All your files should end with a new line
*	A README.md file, at the root of the folder of the project is mandatory
*	Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
*	Your shell should not have any memory leaks
*	No more than 5 functions per file
*	All your header files should be include guarded
*	Use system calls only when you need to (why?)

## Compilation

Your code will be compiled this way:


$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

