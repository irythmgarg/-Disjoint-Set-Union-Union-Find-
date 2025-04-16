#include <iostream>
#include <vector>
using namespace std;

/**
 * Disjoint Set Union (Union-Find) data structure with:
 * - Path Compression
 * - Union by Size
 */
class DSU {
private:
    vector<int> parent, size;

public:
    // Constructor: initialize DSU with n elements (0-based index)
    DSU(int n) {
        parent.resize(n);
        size.resize(n, 1);  // Initially, every set has size 1
        for (int i = 0; i < n; i++) {
            parent[i] = i;  // Each node is its own parent initially
        }
    }

    // Find the representative (root) of the set that contains node u
    int find(int u) {
        if (u == parent[u])
            return u;
        return parent[u] = find(parent[u]);  // Path compression
    }

    // Union two sets by size
    void unite(int u, int v) {
        int parentU = find(u);
        int parentV = find(v);

        if (parentU == parentV)
            return;  // Already in the same set

        // Attach smaller set to larger one
        if (size[parentU] < size[parentV]) {
            parent[parentU] = parentV;
            size[parentV] += size[parentU];
        } else {
            parent[parentV] = parentU;
            size[parentU] += size[parentV];
        }
    }

    // Check if two nodes are in the same set
    bool isConnected(int u, int v) {
        return find(u) == find(v);
    }

    // Get size of set containing node u
    int getSize(int u) {
        return size[find(u)];
    }
};

// Example usage
int main() {
    int n = 7;
    DSU dsu(n);

    dsu.unite(0, 1);
    dsu.unite(1, 2);
    dsu.unite(3, 4);
    dsu.unite(5, 6);
    dsu.unite(4, 5);

    cout << "Is 2 connected to 0? " << (dsu.isConnected(2, 0) ? "Yes" : "No") << endl;
    cout << "Is 6 connected to 3? " << (dsu.isConnected(6, 3) ? "Yes" : "No") << endl;
    cout << "Size of set containing node 5: " << dsu.getSize(5) << endl;

    return 0;
}
