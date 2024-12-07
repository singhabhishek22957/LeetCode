package com.sorting;


import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class FindAllMissingNumInArray {
    static void swap(int i , int j , int arr[]){
        arr[i] = arr[i]+arr[j];
        arr[j] = arr[i]-arr[j];
        arr[i] = arr[i]-arr[j];
    }

    public  static List<Integer> findDisappearedNumbers(int arr[]){
        List<Integer> list = new ArrayList<>();
        // sorting
        int i = 0;
        while (i< arr.length){
            int correct = arr[i]-1;
//            &&arr[i]!=arr[i+1]  &&arr[i]!=i+1
            if(arr[i]!=arr[correct]){
                swap(i,correct,arr);
            }else {
                i++;
            }
        }

//        System.out.println(Arrays.toString(arr));

        // searching
        for (int index =0;index< arr.length;index++){
            if(arr[index]!=index+1){
                list.add(index+1);
            }
        }
        return list;
    }

    public static void main(String[] args) {
        int arr[] = {4,3,2,7,8,2,3,1};
        List<Integer> missingNumbers = findDisappearedNumbers(arr);
        System.out.println(missingNumbers);
    }

}
