package com.sorting;

import java.util.ArrayList;
import java.util.List;

public class findAllDublicateNumber {

    static void swap(int i, int j , int arr[]){
        arr[i]=arr[i]+arr[j];
        arr[j]= arr[i]-arr[j];
        arr[i] = arr[i]-arr[j];
    }

    static List<Integer> findAllDublicate(int arr[]){
        List<Integer> list = new ArrayList<>();

        // sorting
        int i = 0;
        while (i<arr.length){
            int current = arr[i]-1;
            if(arr[i]!=arr[current]){
                swap(i,current,arr);
            }else {
                i++;
            }

        }


        // searching
        for (int j = 0; j < arr.length; j++) {
            if(arr[j]!=j+1){
                list.add(arr[j]);
            }

        }


        return list;
    }

    public static void main(String[] args) {
        int arr[] = {3,1,5,2,7,5,3};
        List<Integer> min = findAllDublicate(arr);
        System.out.println(min);
    }
}
