// import java.util.Arrays;

// class aHeapSort {
//     int[] arr;
//     int size;

//     // Constructor
//     public aHeapSort() {
//         arr = new int[101]; // Extra space for 1-based index
//         arr[0] = -1;        // Set the first element to -1 (as in C++ code)
//         size = 0;
//     }

//     // Insert function
//     public void insert(int val) {
//         size++;
//         int index = size;
//         arr[index] = val;

//         while (index > 1) {
//             int parent = index / 2;
//             if (arr[parent] < arr[index]) {
//                 // Swap the elements
//                 int temp = arr[parent];
//                 arr[parent] = arr[index];
//                 arr[index] = temp;

//                 index = parent;
//             } else {
//                 return;
//             }
//         }
//     }

//     // Print function
//     public void print() {
//         for (int i = 1; i <= size; i++) {
//             System.out.print(arr[i] + " ");
//         }
//         System.out.println();
//     }

   
//     public static void main(String[] args) {
//         aHeapSort h = new aHeapSort();
//         h.insert(50);
//         h.insert(30);
//         h.insert(40);
//         h.insert(20);
//         h.insert(90);
//         h.insert(10);
//         h.print();
//     }
// }
