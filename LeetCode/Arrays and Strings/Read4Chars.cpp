#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Simulated file content (global for read4)
string fileContent = "kavin";
int filePointer = 0; // Pointer to current read position

// Mock read4 API
int read4(char *buf4) {
    int i = 0;
    while (i < 4 && filePointer < fileContent.size()) {
        buf4[i++] = fileContent[filePointer++];
    }
    return i;
}

class Solution {
public:
    int read(char *buf, int n) {
        int total = 0;
        int count = 0;
        char temp[4];
        bool eof = false;

        while(!eof && total<n){
            count = read4(temp);
            
            if(count<4){
                eof = true;
            }
            count = min(count, n-total);

            for(int i = 0; i<count; i++){
                buf[i+total] = temp[i];
            }
            total+=count;
        }
        return total;
    }
};

// 🔍 Test function
int main() {
    Solution solution;
    char buf[100]; // buffer to read into

    int n = 5;
    int charsRead = solution.read(buf, n);

    cout << "Characters read: " << charsRead << endl;
    cout << "Buffer content: ";
    for (int i = 0; i < charsRead; i++) {
        cout << buf[i];
    }
    cout << endl;

    return 0;
}