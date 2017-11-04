#include <cs50.h>
#include <stdio.h>

// MARIO'S HALF PYRAMID
void printSpace(int num);
void printHash(int num);



int main(void)
{
    int height;                    // USER INPUT

// Get user input
do
{
    printf("Height:\n ");
    height = get_int();        // TAKES INPUT

}
while (height < 0 || height > 23); // PRINTS LINES

//Loop through the height
for (int i = 2; i <= height + 1; i++)
{
        printSpace((height-i)+1);
        printHash(i);
        printf("\n");
}
}

// Loop through the spaces
void printSpace(int num)
{
    for(int s = 0; s<num; s++)
    {
      printf("%s"," ");
    }
}

// Loop through the # marks
void printHash(int num)
{
    for(int h=0; h < num; h++)
    {
      printf("#");
    }
}
