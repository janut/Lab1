#include <stdio.h>
#include <stdlib.h>

int main()
{
    // an array with 10 numbers
    int arList[10] = {45,78,67,3,57,97,35,2,65,42};



    int i, j,temp, swap;

    //int i =0 ;

    bubbleSort(arList,10);




    // print the loop
    for(i=0; i<10; i++)
    {
       printf("%d\n", arList[i]);
    }


    return 0;
}



void bubbleSort(int array[],int n){
  int i,j, temp;

  // go through the array and if the first number is bigger than the next number swap it
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if (i!=j)
                {
                    if(array[i] > array[j])
                    {
                        temp = array[i];
                        array[i] = array[j];
                        array[j] = temp;

                    }
                }


            }

        }



}
