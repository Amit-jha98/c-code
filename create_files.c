#include <stdio.h>
#include <sys/stat.h>

int main() {
    int x = 1,count=0, n;
    char folder_name[25],temp[25];
    printf("Enter initials of folder name (no spaces allowed)\n");
    scanf("%s",&temp);
    printf("Enter Number of files to be generated\n");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        sprintf(folder_name, "%s%d",temp, x);
       int check= mkdir(folder_name, 0777);
    if (!check)
    {
        count++;
    }
    if (check)
    {
    printf("failed to create file n");
    return 0;
    }
        ++x;
    }
    printf("Total number of files created %d \n",count);
    return 1;
}
