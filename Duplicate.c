#include<stdio.h>
 
int main() 
{
   int array[50], i, size;
 
   scanf("%d", &size); 

   for (i = 0; i < size; i++)
   scanf("%d", &array[i]); 
int a, b;

for(i = 0; i < size; i++)
{
    for(a = i + 1; a < size; )
    {
        if(array[i] == array[a])
        {
            for(b = a; b < size - 1; b++)
            {
                array[b] = array[b + 1];
            }
            size--;  
        }
        else
        {
            a++;
        }
    }
}
for (i = 0; i < size; i++) {
      printf("%d\n", array[i]);
   }

}
