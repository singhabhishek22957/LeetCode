package com.sorting;

public class MissingNumberCyclic {
    static void swap(int i,int j, int arr[] ){
        arr[i] = arr[i]+arr[j];
        arr[j] = arr[i]-arr[j];
        arr[i] = arr[i]-arr[j];
    }

    static int missingNumber(int arr[]){

        // sorting
        int i = 0;
        while (i<arr.length){
            int correct = arr[i];
            if(arr[i]< arr.length&&arr[i]!=arr[correct]){
                swap(i,correct,arr);
            }else {
                i++;
            }
        }

        // searching
        for (int index = 0; index<arr.length;index++){
            if(arr[index]!=index){
                return index;
            }
        }
        return arr.length;
    }

    public static void main(String[] args) {
        int arr[]= {1,0};
        System.out.println(missingNumber(arr));
    }
}
