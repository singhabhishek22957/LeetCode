 class BinarySearch{

    static   char nextGreatestLetter(char[] letters,char target){
        int start=0;
        int end =letters.length-1;
        if(letters[end]<=target) return letters[start];
        if(letters[start]>target) return letters[start];
        while (start<=end) {
            int mid = start+(end-start)/2;
            if(target<letters[mid]){
                end = mid-1;
            }else if(target>letters[mid]){
                start = mid+1;
            }else{
                return letters[mid+1];
            }
            
        }
        return letters[start];
    }

    public static void main(String args[]){
        char[] letters = {'a','c','j','f'};
        char target = 'f';
        System.out.println(nextGreatestLetter(letters, target));
    }


}