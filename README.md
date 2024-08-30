Insertion Sort is a simple and intuitive sorting algorithm that works similarly to the way you might sort playing cards in your hands. It builds the sorted array (or list) one item at a time, by repeatedly picking the next element and inserting it into the correct position among the already sorted elements.Insertion Sort is a simple and intuitive sorting algorithm that works similarly to the way you might sort playing cards in your hands. It builds the sorted array (or list) one item at a time, by repeatedly picking the next element and inserting it into the correct position among the already sorted elements.
Here's how it works:

Start with the second element: The first element is already sorted.

Compare the current element with the sorted part: Move left through the sorted elements to find where the current element belongs.

Shift and Insert: Shift larger elements one position to the right to make space, then insert the current element in the correct spot.

Repeat: Do this for every element until the entire list is sorted.

Example:
Consider sorting the array [4, 3, 2, 10, 12, 1, 5, 6] using insertion sort:

Initial Array: [4, 3, 2, 10, 12, 1, 5, 6]
Step 1: Compare 3 with 4, and insert 3 before 4.
Array after step 1: [3, 4, 2, 10, 12, 1, 5, 6]
Step 2: Compare 2 with 4, then with 3, and insert 2 before 3.
Array after step 2: [2, 3, 4, 10, 12, 1, 5, 6]
Step 3: 10 is already in the correct position.
Array after step 3: [2, 3, 4, 10, 12, 1, 5, 6]
Step 4: 12 is also in the correct position.
Array after step 4: [2, 3, 4, 10, 12, 1, 5, 6]
Step 5: Compare 1 with 12, then with 10, 4, 3, and 2, and insert 1 at the beginning.
Array after step 5: [1, 2, 3, 4, 10, 12, 5, 6]
Step 6: Compare 5 with 12 and 10, and insert 5 between 4 and 10.
Array after step 6: [1, 2, 3, 4, 5, 10, 12, 6]
Step 7: Compare 6 with 12 and 10, and insert 6 between 5 and 10.
Array after step 7: [1, 2, 3, 4, 5, 6, 10, 12]
