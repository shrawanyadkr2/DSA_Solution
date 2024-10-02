


/*
Link:-
https://www.geeksforgeeks.org/problems/decimal-to-binary-1587115620/1
*/


void toBinary(int N) {
    if (N == 0) {
        cout << "0";
        return;
    }

    string res = "";
    
    while (N > 0) {
        if (N % 2 == 1) res += '1';
        else res += '0';
        N = N / 2;
    }
    
    // Print the result in reverse order
    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i];
    }
}
