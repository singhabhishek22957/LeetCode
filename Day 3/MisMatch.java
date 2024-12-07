package com.sorting;

import java.util.ArrayList;
import java.util.List;

public class MisMatch {
    public void swap(int i , int j , int arr[]){
        arr[i]= arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
    }

    public List<Integer> mismatch(int arr[]){
        List<Integer> list = new ArrayList<>();
        int i=0;
        while (i<arr.length){
            int current = arr[i]-1;
            if(arr[i]!=arr[current]){
                swap(i,current,arr);
            }else {
                i++;
            }

        }

        //searching
        for (int j = 0; j < arr.length; j++) {
            if(arr[j]!=j+1){
                list.add(arr[j]);
                list.add(j+1);

            }

        }
        return list;
    }

    public static void main(String[] args) {
        MisMatch mm=new MisMatch();
        int arr[] = {3,1,5,3,2,4};
        List<Integer> mmm = mm.mismatch(arr);
        System.out.println(mmm);


    }
}
