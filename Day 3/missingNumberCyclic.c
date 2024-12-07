#include<stdio.h>

void swap(int *a, int *b){

    int temp = *a;  
    *a = *b;
    *b = temp;
}

int missingNumber(int arr[], int size){

    // sorting
    int i = 0;
    while (i<size)
    {
        int correct = arr[i];
        if(arr[i]<size&&arr[i]!=arr[correct]){
            swap(&arr[i],&arr[correct]);
        }else{
            i++;
        }
    }

    // serching
    for(int index = 0 ; index<size; index++){
        if (arr[index]!=index)
        {
            return index;
        }
        
    }


    return size;

    
}

int main(){

    printf(" \n");
    int arr[] = {3,5,2,1,4,0,6,10,7,9}; 
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Missing number is %d",missingNumber(arr,size));
    


    return 0;
}