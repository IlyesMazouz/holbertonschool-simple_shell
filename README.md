<h1 align="center">
    💡 _simple_shell:
<p align="center">
    </p>

![1_lqEaA1-6gGQhdLS3k8X0xw](https://user-images.githubusercontent.com/31927278/182706961-e087c64e-9d7b-40db-a931-67009dc34089.gif)

# INTROCUDTION:

A simple shell is a program that allows users to interact with the operating system by executing commands.
It is a simplified version of the UNIX shell that provides a user-friendly interface for executing commands. The shell accepts user input, parses it into a command and arguments, and then executes the command with the specified arguments.




# :bulb: CODE OVERVIEW:

The code for the simple shell project is divided into multiple files, each with a specific purpose. Here is an overview of each file and its purpose:

1.shell.h:

This file contains the function prototypes and header files required for the project.

2.shell_loop.c:

This file contains the main loop of the shell, where user input is accepted, parsed, and executed.

3.split_string.c:

This file contains a function that splits a string into an array of strings based on a specified delimiter.

4.get_path.c:

This file contains a function that finds the full path of a given command.

5.execute_command.c:

This file contains a function that executes a command.

6.free_array.c:

This file contains a function that frees an array of strings.

7.handle_exit_command.c:

This file contains a function that handles the exit command.

8.main.c:

This file contains the main function that calls the shell loop function.




# :bulb: FUNCTIONALITY:

The simple shell project implements the following functionality:

1.Accept user input from the command line.

2.Parse the input into a command and arguments.

3.Execute the command with the specified arguments.

4.Handle the exit command.

5.Print the environment variables.



# :bulb: compilation and testing:

```{r mon_bloc, echo = FALSE, WARNING = TRUE}
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
# :bulb: execute:

./hsh
# :bulb: how we use shell:

shell display each time a command that we executed
 the comand that most user excute in shell:
|- ls        |to list files and directory            |
| :--------- | ------------------------------------: |
|- cd        | change directory                      |
|- pwd       | print working directory               |
|- cat       | show you what we wrote in our file    |
|- env       | print the environment variable        |
|- printenv  | print the shell variable              |
|- exit      | shell will end and it gonna exit      |




# CONCLUTION:

The simple shell project provides a basic understanding of how a shell works and how it interacts with the operating system.
It demonstrates how to accept user input, parse it, and execute the commands with specified arguments.
The project also includes functionality for handling the exit command and printing the environment variables.



# AUTHORS:

ILYES MAZOUZ

GHAITH GHARSALLI
