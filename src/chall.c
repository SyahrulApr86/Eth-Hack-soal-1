# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void vuln()
{
    char buf[21];
    gets(buf);
}

void win()
{
    char flag[64];
    FILE *f = fopen("flag.txt","r");
    fgets(flag,64,f);
    puts(flag);
}

int main()
{
    vuln();
    return 0;
}

// Compile with:
// gcc -no-pie -fno-pic -fno-stack-protector -fno-builtin chall.c -o chall

