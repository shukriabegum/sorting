# sorting
 Sorting is a process of placing a list of elments from the collection of data in some order. It is nothing but storage of data in sorted order.Sorting can be done in acsending or descending order.
- Bubble sort
- Selection sort
- Insertion sort
- Merge sort
- Quick sort
## Bubble Sort:
Bubble Sort is one of the simplest sorting algorithms.
It repeatedly compares adjacent elements and swaps them if they are in the wrong order — like bubbles rising to the top.

#### Example: It moves the largest number to the end in each pass.

### Advantages:

- Very easy to understand and implement.

- Good for small data sets.

### Disadvantages:

- Very slow for large data (O(n²) time).

- Performs many unnecessary comparisons.

#### Use: Mostly for learning and demonstration purposes.

## Selection Sort

Selection Sort finds the smallest (or largest) element and places it in its correct position each time.

### Advantages:

- Easy to understand and implement.

- Requires fewer swaps compared to Bubble Sort.

### Disadvantages:

- Performs many comparisons (O(n²)).

- Not suitable for large data sets.

- Use: For small, simple sorting tasks.


  ## Insertion Sort

Insertion Sort works like sorting playing cards in your hands.
It takes one element at a time and inserts it into its correct position in the already sorted part.

### Advantages:

- Simple and efficient for small or nearly sorted data.

- No extra memory needed (in-place sorting).

### Disadvantages:

- Slow for large data sets (O(n²)).

#### Use: When the data set is small or almost sorted.



## Merge Sort

Merge Sort also uses the Divide and Conquer method.
It divides the array into two halves, sorts them separately, and then merges them into one sorted list.

### Advantages:

- Always O(n log n) time complexity.

- Stable sort — keeps equal elements in order.

- Works well for large data and linked lists.

### Disadvantages:

- Requires extra memory for merging.

- A bit slower for small data sets.

#### Use: For large, stable, and complex sorting operations.



# Quick Sort

Quick Sort is one of the fastest sorting algorithms.
It follows the Divide and Conquer technique.
It selects a pivot element, divides the array into two parts — one with elements smaller than the pivot and another with larger ones — and sorts them recursively.

### Advantages:

- Very fast in average cases (O(n log n)).

- Uses little extra memory.

### Disadvantages:

- Worst case can be O(n²) if pivot is chosen poorly.

- Recursive, which may use more stack space.

#### Use: For large data sets where speed is important.
