## DATE:22/1/2026
# What is an Array?
- An array is a fundamental data structure that stores elements in contiguous memory locations. Each element can be accessed directly using its index, making arrays one of the most efficient data structures for random access operations.

- Arrays have a fixed size (in most languages) and provide O(1) time complexity for accessing elements by index. However, insertion and deletion operations may require shifting elements, resulting in O(n) time complexity in the worst case.

## Key Characteristics
- Fixed Size: Once created, the size cannot be changed (dynamic arrays handle this differently)
- Contiguous Memory: Elements are stored in consecutive memory locations
- Index-Based Access: Direct access to any element using its index
- Cache-Friendly: Sequential access benefits from CPU cache optimization
- Homogeneous: Typically stores elements of the same data type