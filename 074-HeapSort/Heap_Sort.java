import java.util.ArrayList;
import java.util.List;

class Heap_Sort{

    static List<Integer> heap;

    public Heap_Sort(){
        this.heap = new ArrayList<>();
    }

    public List<Integer> getHeap(){
        return heap;
    }

    public void swap(int val1,int val2){
        int temp = heap.get(val1);
        heap.set(val1, heap.get(val2));
        heap.set(val2, temp);
    }

    public int  leftchild(int index){
        return 2*index+1;
    }

    public int  rightchild(int index){
        return 2*index+2;
    }

    public int  parent(int index){
        return (index-1)/2;
    }

    public void insert(int value){
        heap.add(value);
        int current = heap.size()-1;

        while(current > 0 && heap.get(current) > heap.get(parent(current))){
            swap(current, parent(current));
            current = parent(current);
        }
    }

    public Integer remove(){
        if(heap.isEmpty()){
            return null;
        }
        if(heap.size() == 1){
            return heap.remove(0);
        }

        int maxValue = heap.get(0);
        heap.set(0, heap.remove(heap.size()-1));
        sinkDown(0);
        return maxValue;
    }

    public void sinkDown(int index){
        int maxIndex = index;

        while(true){
            int leftIndex =leftchild(index);
            int rightIndex = rightchild(index);

            if(leftIndex < heap.size() && heap.get(leftIndex) >heap.get(maxIndex)){
                maxIndex = leftIndex;
            }

            if(rightIndex <heap.size() && heap.get(rightIndex) > heap.get(maxIndex)){
                maxIndex = rightIndex;
            }

            if(maxIndex != index){
                swap(index, maxIndex);
                index = maxIndex;
            }else{
                return;
            }
        }
    }

    public List<Integer> heapSort(List<Integer> elements) {
        Heap_Sort tempHeap = new Heap_Sort();

        // Insert all elements into the heap
        for (int element : elements) {
            tempHeap.insert(element);
        }

        List<Integer> sortedList = new ArrayList<>();

        // Remove elements one by one and add to the sorted list
        while (tempHeap.getHeap().size() > 0) {
            sortedList.add(tempHeap.remove());
        }

        return sortedList; // This will be in descending order due to max heap
    }

    public static void main(String[] args) {
        Heap_Sort myheap = new Heap_Sort();

        myheap.insert(95);
        myheap.insert(75);
        myheap.insert(80);
        myheap.insert(55);

        System.out.println(myheap.getHeap());

        myheap.insert(60);

        System.out.println(myheap.getHeap());

        myheap.insert(50);

        System.out.println(myheap.getHeap());

        myheap.insert(65);
        System.out.println(myheap.getHeap());

        myheap.remove();
        System.out.println(myheap.getHeap());

        myheap.remove();
        System.out.println(myheap.getHeap());


        List<Integer> elements = List.of(95, 75, 80, 55, 60, 50, 65);
        System.out.println("Original List: " + elements);

        // Sorting the list using heap sort
        List<Integer> sortedList = myheap.heapSort(elements);
        System.out.println("Sorted List (Ascending): " + sortedList);
    }
}
