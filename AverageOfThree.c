/* #include <stdio.h>



const int N = 3;

float average( int lenght, int array[]);

int main(void)

// get scores
  for (i=0; i < N; i++;);
{
  scores[i] = 
}
*/



#include <stdio.h>

// Constant
const int N = 3;

// Prototype
float average(int length, int array[]);
int get_int(void);

int main(void)
{
    // Get scores
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        printf("Score: ");
        scores[i] = get_int();
    }

    // Print average
    printf("Average: %f\n", average(N, scores));
}

float average(int length, int array[])
{
    // Calculate average
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}

int get_int(void)
{
    int number;
    scanf("%d", &number);
    return number;
}

