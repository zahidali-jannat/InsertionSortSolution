# InsertionSortSolution
SolutionOfInsertionSort


In this Question most of the people and student like us not able visualize what is happening i will explain u in simple hindiEnglish language so that u can understand it well
Given Array: [3, 2, 6, 7, 8, 0]
Outer Loop (i) starts from 1 (not 0)

Reason: The first element (arr[0]) is considered already "sorted" since a single element needs no comparison.

Inner Loop (j) runs from i-1 down to 0

This creates a "barrier" where we compare the current element (arr[i]) with all previous elements (arr[j]).

Shifting Elements

If arr[j] > arr[i], we shift arr[j] to arr[j+1].

This makes space to insert arr[i] in the correct position.

Insertion at Correct Position

When the loop ends, we place arr[i] at arr[j+1].

🔹 Walkthrough with Your Example
Initial Array: [3, 2, 6, 7, 8, 0]
Step 1: i = 1 (Element = 2)
Inner Loop (j = i-1 = 0)

Compare arr[j] = 3 and arr[i] = 2

Since 3 > 2, shift 3 to arr[j+1] → [3, 3, 6, 7, 8, 0]

Decrement j → j = -1 (loop stops)

**Insert 2 at arr[j+1] = arr[0] → [2, 3, 6, 7, 8, 0]

Step 2: i = 2 (Element = 6)
Inner Loop (j = 1)

Compare arr[j] = 3 and 6 → 3 < 6 → No shift needed

Array remains [2, 3, 6, 7, 8, 0]

Step 3: i = 3 (Element = 7)
Inner Loop (j = 2)

Compare 6 < 7 → No shift

Array remains [2, 3, 6, 7, 8, 0]

Step 4: i = 4 (Element = 8)
Inner Loop (j = 3)

Compare 7 < 8 → No shift

Array remains [2, 3, 6, 7, 8, 0]

Step 5: i = 5 (Element = 0)
Inner Loop (j = 4)

8 > 0 → Shift 8 to arr[5] → [2, 3, 6, 7, 8, 8]

j = 3 → 7 > 0 → Shift 7 to arr[4] → [2, 3, 6, 7, 7, 8]

j = 2 → 6 > 0 → Shift 6 to arr[3] → [2, 3, 6, 6, 7, 8]

j = 1 → 3 > 0 → Shift 3 to arr[2] → [2, 3, 3, 6, 7, 8]

j = 0 → 2 > 0 → Shift 2 to arr[1] → [2, 2, 3, 6, 7, 8]

j = -1 → Loop stops

**Insert 0 at arr[0] → Final Array: [0, 2, 3, 6, 7, 8]


