import java.util.*;
public class Search {
    public static void printArray(int arr[]){
        for(int i=0; i<arr.length; i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }

    public static int search(int arr[], int key){
        for(int i=0; i<arr.length; i++){
            if(arr[i] == key){
                return i;
            }
        }
        return -1;
    }

    public static int insert(int arr[], int key){
        for(int i=1; i<=arr.length; i++){
            if(arr[i-1]<key && arr[i+1]>key){
                return i;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of array : ");
        int size = sc.nextInt();
        int arr[] = new int[size];
        System.out.println("Enter Elements in SORTED ORDER : ");

        //i/p
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        System.out.println("Inputed Array :");
        printArray(arr);

        System.out.println("Enter Element: ");
        int key = sc.nextInt();
        //Searching
        int index = search(arr,key);
        int position = index+1;

        if(index != -1){
            System.out.println("Index: " + index);
            System.out.println("Position: "+ position);
        }else{
            int in = insert(arr, key) + 1;
            int po = in+1;
            System.out.println("Element Not Found But We Can Add It On:");
            System.out.println("Index: "+in);
            System.out.println("Position: "+po);
        }
    }
}

