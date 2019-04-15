#include <stdio.h>
#include <string.h>



int main(int argc, char** argv, char **env) {
    while (*env)
        puts(strchr(*env++,'=')+1);
}