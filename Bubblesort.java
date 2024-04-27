public class Bubblesort <T extends Comparable<T>>{
    void bubblesort(T arr[]){
        for(int i=0;i<arr.length;i++){
            for(int j=1;j<=arr.length-i-1;j++){
                if(arr[j-1].compareTo(arr[j])>0){
                    T temp= arr[j-1];
                    arr[j-1]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
    }
    public static void main(String[] args){
        Bubblesort<Integer> obj = new Bubblesort<>();
        Integer arr[] ={23,21,22,45,43,32};
        obj.bubblesort(arr);
        Bubblesort<String> obj1= new Bubblesort<>();
        String strar[]={"k","e","e","r"};
        obj1.bubblesort(strar);
    }
}   

