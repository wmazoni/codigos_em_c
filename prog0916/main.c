#include <stdio.h>

int main(int argc, char** argv, char **env) {
    while (*env)
        puts(*env++);
}