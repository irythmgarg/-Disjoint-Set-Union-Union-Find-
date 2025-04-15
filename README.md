# -Disjoint-Set-Union-Union-Find-
🧩 Disjoint Set Union (Union-Find)
Disjoint Set Union (DSU), also known as Union-Find, is a data structure that keeps track of elements partitioned into a number of disjoint (non-overlapping) sets. It supports two primary operations efficiently:

Find: Determine which set a particular element belongs to.

Union: Merge two sets into a single set.

📚 Use Case
DSU is widely used in problems involving:

Detecting cycles in graphs (like in Kruskal's Algorithm)

Network connectivity

Grouping problems

Finding connected components

🚀 Features
Path Compression in find() for efficient root lookups.

Union by Rank in union() to keep tree height minimal.

Near-constant time operations (almost O(1) per operation with inverse Ackermann function).
📈 Time Complexity
Operation	Time Complexity
Find	O(α(N))
Union	O(α(N))
Where α(N) is the inverse Ackermann function — practically constant for all reasonable N.

🌟 Applications
Minimum Spanning Tree (Kruskal’s Algorithm)

Dynamic connectivity

Percolation problem

Equations possible (Leetcode)

Connected components in a graph

🧠 Want More?
You can check out real problems like:

Leetcode 684 - Redundant Connection

Leetcode 990 - Satisfiability of Equality Equations

Leetcode 1319 - Number of Operations to Make Network Connected
