#include <iostream>
#include <cstring>
using namespace std;

// ✅ Mock implementation of read4 API
int read4(char *buf) {
    static const char *data = "Hello, this is a test string.";
    static int readPos = 0;
    int count = 0;

    while (count < 4 && data[readPos] != '\0') {
        buf[count++] = data[readPos++];
    }

    return count;
}

// ✅ Solution class definition
class Solution {
private: 
    int buffercount = 0 ;
    int bufferptr = 0;
    char tempbuffer[4];
public:
    int read(char *buf, int n) {
        int ptr =0; 
        while(ptr<n){
            if(bufferptr == 0){
                buffercount = read4(tempbuffer);
            }
            if(buffercount == 0) break;

            while(ptr<n && bufferptr<buffercount){
                buf[ptr++] = tempbuffer[bufferptr++];
            }
            if(buffercount == bufferptr){
                bufferptr = 0;
            }
        return ptr;
             
        }

    }
};

// ✅ Main test function
int main() {
    Solution solution;
    char buf[21]; // 20 chars + 1 for null terminator
    int n = 20;

    int charsRead = solution.read(buf, n);
    buf[charsRead] = '\0'; // Null-terminate the string

    cout << "Read " << charsRead << " characters: " << buf << endl;

    return 0;
}