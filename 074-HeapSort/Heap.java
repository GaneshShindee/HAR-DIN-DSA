// import java.util.*;

// class Heap {
//     int[] arr = new int[100];
//     int size = 0;

//     public Heap() {
//         arr[0] = -1;
//     }

//     public void insert(int val) {
//         size += 1;
//         int index = size;
//         arr[index] = val;

//         while (index > 1) {
//             int parent = index / 2;
//             if (arr[parent] < arr[index]) {
//                 swap(arr, parent, index);
//                 index = parent;
//             } else {
//                 return;
//             }
//         }
//     }

//     public void deleteFromHeap() {
//         if (size == 0) {
//             System.out.println("Nothing to delete");
//             return;
//         }

//         arr[1] = arr[size];
//         size--;

//         int i = 1;
//         while (i < size) {
//             int leftIndex = 2 * i;
//             int rightIndex = 2 * i + 1;

//             if (leftIndex <= size && arr[i] < arr[leftIndex]) {
//                 swap(arr, i, leftIndex);
//                 i = leftIndex;
//             } else if (rightIndex <= size && arr[i] < arr[rightIndex]) {
//                 swap(arr, i, rightIndex);
//                 i = rightIndex;
//             } else {
//                 return;
//             }
//         }
//     }

//     public void print() {
//         for (int i = 1; i <= size; i++) {
//             System.out.print(arr[i] + " ");
//         }
//         System.out.println();
//     }

//     private void swap(int[] arr, int a, int b) {
//         int temp = arr[a];
//         arr[a] = arr[b];
//         arr[b] = temp;
//     }

//     public static void main(String[] args) {
//         Heap h = new Heap();
//         h.insert(50);
//         System.out.print("Inserted new element:-  ");
//         h.print();
//         h.insert(70);
//         System.out.print("Inserted new element:-  ");
//         h.print();
//         h.insert(30);
//         System.out.print("Inserted new element:-  ");
//         h.print();
//         h.insert(80);
//         System.out.print("Inserted new element:-  ");
//         h.print();
//         h.insert(10);
//         System.out.print("Inserted new element:-  ");
//         h.print();
//         System.out.println("\n");

//         h.deleteFromHeap();
//         System.out.print("Deleted Heap element:-  ");
//         h.print();
//         h.deleteFromHeap();
//         System.out.print("Deleted Heap element:-  ");
//         h.print();
//         h.deleteFromHeap();
//         System.out.print("Deleted Heap element:-  ");
//         h.print();
//         h.deleteFromHeap();
//         System.out.print("Deleted Heap element:-  ");
//         h.print();
//     }
// }
