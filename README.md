# Counting Even Digits in Array Elements Using Dynamic Arrays

### Task Description:
This program was developed as part of a university assignment for the **"Programming 2" course** at Angel Kanchev University of Ruse.

The task involves creating a program that, given a one-dimensional array of integers \( A_0, A_1, ..., A_{n-1} \), produces a new array \( a_0, a_1, ..., a_{n-1} \), where the value of \( a_i \) is equal to the count of even digits in \( A_i \).

### Requirements:
- Use dynamic arrays.
- The numbers should be integers, entered by the user.
- Each digit of the numbers in the array should be checked to determine if it is even.

### Example Input:
```
5 -> 12, 155, 4620, 11, 32
```

### Example Output:
```
1, 0, 4, 0, 1
```

### Explanation:
1. **Initialize Variables:** A variable is declared to store the number of elements in the arrays.
2. **Create Arrays:** Two dynamic arrays of type `int` are created. After the user inputs the number of elements, memory is allocated for both arrays accordingly.
3. **Input Elements:** The program prompts the user to input numbers into the first array.
4. **Process Even Digits:**
   - Each digit of the numbers in the first array is checked to determine if it is even.
   - A counter is incremented for each even digit, and the count is stored in the corresponding index of the second array.
5. **Output Results:** The program prints the contents of the second array.
6. **Memory Cleanup:** Both dynamic arrays are deleted after use.

### Testing:
- Input: `5 -> 12, 155, 4620, 11, 32`
- Expected Output: `1, 0, 4, 0, 1`

### Note:
This program was written as part of a university course assignment, demonstrating the use of dynamic arrays and basic array manipulation techniques.
