#include <iostream>
using namespace std;

class Hash {
    int hashSize;
    int* table;
public:
   Hash(int size) {
        hashSize = size;
        table = new int[hashSize];
        for (int i = 0; i < hashSize; i++) {
            table[i] = -1;
        }
    }
   void insert(int key) {
        int hashIndex = key % hashSize;
        while (table[hashIndex] != -1) {
            hashIndex = (hashIndex + 1) % hashSize;
            if(hashIndex == key % hashSize) {
                cout << "Hash table is full!" << endl;
                return;
            }
        }
        table[hashIndex] = key;
    }
    void display() {
        for (int i = 0; i < hashSize; i++) {
            if (table[i] != -1) {
                cout << "Index " << i << ": " << table[i] << endl;
            }
            else {
                cout << "Index " << i << ": " << "Empty" << endl;
            }
        }
    }
};
int main() {
    
   int size, key;
   cin >> size;
   Hash hashTable(size);
    for (int i = 0; i < size; i++) {
        cin >> key;
        hashTable.insert(key);
    } 
    hashTable.display();
    return 0;
}