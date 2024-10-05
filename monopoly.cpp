#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases
    
    while (T--) {
        int P, Q, R, S;
        // Read profits of the four companies
        cin >> P >> Q >> R >> S;
        
        // Check if any company has a monopoly
        if (P > Q + R + S || Q > P + R + S || R > P + Q + S || S > P + Q + R) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
