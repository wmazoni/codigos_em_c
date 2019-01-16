#include <stdio.h>

const int n=10;

int main() {
    float v[n];
    int i;
    for (i=0;i<n;i++)
        v[i] = i*(n-1);

    for (i=0;i<n;i++)
        printf("%f\n",v[i]);
}