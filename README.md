# Advanced Algorithm Lab Codes

This repository contains the code implementations for the Advanced Algorithm Lab exercises.

## Lab 1

1. Randomized Quick Sort

   - Randomized Quick Sort is an efficient sorting algorithm that employs a randomized pivot selection strategy. It partitions the array around a randomly chosen pivot element, ensuring an average-case time complexity of O(n log n) by mitigating the risk of worst-case scenarios encountered in standard implementations of Quick Sort.

## Lab 2

1. Fermat's Little Theorem

   - Fermat's Little Theorem states that for a prime number p and and an integer a not divisible by p, a^(p-1) is congruent to 1 modulo p. This theorem finds applications in various fields including cryptography and primality testing.

## Lab 3

1. Ford Flukerson Algo.

   - Ford-Fulkerson algorithm is used to find the maximum flow in a flow network by iteratively increasing flow along augmenting paths from source to sink until no more paths exist.

## Lab 4

1. Karger's Min-Cut Algo.

   - Karger's algorithm is a randomized approach to find the minimum cut in a graph. It repeatedly contracts random edges until only two nodes remain, representing the cut. The probability of finding the true minimum cut increases with the number of iterations, making it highly efficient.

## Lab 5

1. Horspool Algo.

   - Horspool's algorithm efficiently finds occurrences of a pattern within a text by utilizing a "bad character" heuristic to skip unnecessary comparisons, resulting in faster string matching.

2. Naive(Bruteforce) String Matching Algo.

   - The naive or brute-force approach for string matching compares each character of the pattern with each character of the text sequentially, resulting in a time complexity of O(m * n), where m is the length of the pattern and n is the length of the text.

## Lab 6

1. Sum of Subset (Dynamic Programming)

   - The subset sum problem can be solved using the knapsack problem approach, where the set of elements represents the items, and the target sum represents the knapsack's capacity. By treating each element as an item with a weight equal to its value, the knapsack algorithm can efficiently determine if a subset sum equals the target value.

## Lab 7

1. Finite Automata String Matching Algo

   - The Finite Automata string matching algorithm constructs a state machine based on the pattern to efficiently search for occurrences in the text, offering linear time complexity for matching tasks.

2. Rabin Karp Algo.

   - Rabin-Karp algorithm efficiently searches for a pattern within a text by hashing the pattern and sliding it along the text, comparing hash values for potential matches. This approach uses hashing to avoid unnecessary character comparisons, making it particularly effective for large texts or patterns.

## Lab 8

1. Closest Pair of Points Algo.

   - The closest pair of points problem aims to find the two points with the smallest Euclidean distance among a set. It's crucial in computational geometry for tasks like clustering and nearest neighbor search. Algorithms like divide and conquer are typically employed for efficient solutions.
   
2. Knuth-Morris-Pratt (KMP) Algo.

   - The Knuth-Morris-Pratt (KMP) algorithm efficiently locates occurrences of a pattern within a text by utilizing a partial match table. This table helps it skip unnecessary comparisons, resulting in faster string matching, particularly for large texts or patterns.

## Lab 9

1. Graham Scan Algo.

   - Graham Scan is an algorithm used to find the convex hull of a set of points in a plane. It sorts the points based on their polar angle with respect to the lowest point and then iteratively constructs the convex hull by adding points in a counterclockwise manner. This approach ensures an efficient way to compute the convex hull with a time complexity of O(n log n).
   
2. Line Segment Intersection Algo.

   - Line segment intersection involves determining if any two line segments in a set intersect. It's important in computational geometry, with applications in computer graphics and collision detection. Algorithms like the sweep line method efficiently solve this problem.

## Lab 10

1. Randomized Minimum Vertex Cover

   - Randomized Minimum Vertex Cover is a probabilistic algorithm used to find a minimum vertex cover in a graph. It works by randomly selecting vertices and checking if they form a vertex cover. While it might not always find the exact minimum vertex cover, it provides a fast and approximate solution for large graphs.

## Lab 11

1. Minimum Vertex Cover (Linear Programming)

   - Minimum Vertex Cover (MVC) seeks the smallest set of vertices in a graph such that every edge is incident to at least one vertex in the set. While not typically directly solved using linear programming, it can be formulated as an integer linear programming (ILP) problem, where binary variables represent vertex inclusion, and constraints ensure edge coverage.
