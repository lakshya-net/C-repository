#include <iostream>
using namespace std;

class Hash {
    int Size;
    int* table;
public:
   Hash(int size) {
        Size = size;
        table = new int[Size];
        for (int i = 0; i < Size; i++) {
            table[i] = -1;
        }
    }
   void insert(int key) {
        int Index = key % Size;
        while (table[Index] != -1) {
            Index = (Index + 1) % Size;
            if(Index == key % Size) {
                cout << "Hash table is full!" << endl;
                return;
            }
        }
        table[Index] = key;
    }
    int search(int key) {
        int    Index = key % Size;
        int start = Index; // To detect if we have looped through the table
        while (table[Index] != -1) {
            if (table[Index] == key) {
                return Index;
            }
            Index = (Index + 1) % Size;
            if(Index == start ) {
               return -1; // Not found after looping through the table
            }
        }
        return -1; // Not found
    }
    void display() {
        for (int i = 0; i < Size; i++) {
            if (table[i] != -1) {
                cout << "Index " << i << ": " << table[i] << endl;
            }
            else {
                cout << "Index " << i << ": " << "Empty" << endl;
            }
        }
    }
} ;





int main() {
    
   int size, key, target;
   cin >> size;
   Hash hashTable(size);
    for (int i = 0; i < size; i++) {
        cin >> key;
        hashTable.insert(key);
    } 
hashTable.display();

    cin >> target;
    int index = hashTable.search(target);
    if (index != -1) {
        cout << "Key found at index: " << index << endl;
    } else {
        cout << "Key not found!" << endl;
    }
    return 0;
}