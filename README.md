# ALizard 🦎 (a rudimentary shell implementation in C)

## Features Implemented
- Reads one input, parses its text and runs the command.
- `exit` exits the program.
- `cd` allows you to change directories.
- Parses multiple commands separated by ` ; `
- Redirection using `>` and `<`
- Piping two commands together using `|`

## Features We Attempted to Implement (unsuccessfully)
- The `up` arrow to see previous commands. There is a history.txt file that saves a list of all the commands. However, we could not figure out how to dynamically get which character was being typed so we could not cycle through these upon clicking the up arrow. We have the same issue with `backspace`.
- Using piping and redirection in the same command.
- Using more than one instance of redirection in the same command.

## Bugs :(
- Parsing doesn't work if you don't separate the arguments by spaces (i.e. `ls;ls -a` will not work, but `ls ; ls -a` will)
- If you put any number of spaces after the last argument and there isn't a semicolon, it reads the space as an argument and tells you that the command is not found, regardless of whether it's an actual command.

## Function Headers
```c
char ** parse_args(char *line, int session);
void add_to_history(char *line, int session);
char * read_args();
void print_command_not_found(char ** args);
int semi_exec(char ** args);
int execute_args(char **args);
```