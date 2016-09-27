#include <cstdio>
#include <cstdlib>

int main()
{
    // an array with 10 numbers
    int arList[10] = {45,78,67,3,57,97,35,2,65,42};



    int i, j,temp;

    int result;

    //int i =0 ;

    // bubble sort takes place
    bubbleSort(arList,10);





    // print the loop
    for(i=0; i<10; i++)
    {
       printf("%d\n", arList[i]);
    }


      // find an element once the array is sorted
    result  = binarySearch(65,arList,10);

    printf( "%d\n" , result);

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
                    if(array[i] < array[j])
                    {
                        temp = array[i];
                        array[i] = array[j];
                        array[j] = temp;

                    }
                }


            }

        }



}


 //search the array using binary search
int binarySearch(int key,int array[],int n)
{
      int low, high, currentIndex;
        //int i =0 ;

    low = 0;
    high = n-1;

    while(low<=high)
    {
        currentIndex = (high+low)/2;
        //printf("%d\n", currentIndex);
        if(key == array[currentIndex])
        {
            return currentIndex;
        }
        else if(key < array[currentIndex])
        {
            high = currentIndex - 1;
        }
        else
        {
            low = currentIndex + 1;

        }
    }

    return -1;
}

