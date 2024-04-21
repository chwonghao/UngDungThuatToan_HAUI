#include <iostream>
using namespace std;

void view_config(string G[], string N[], int x[], int k) {
    for (int i = 0; i < k; i++) {
        cout << N[x[i]] << " ngồi ghế " << G[i] << ", ";
    }
    cout << endl;
}

void next_config(int x[], int k, int i) {
    x[i] += 1;
    i++;
    while (i <= k) { 
        x[i] = x[i - 1] + 1;
        i++;
    }
}

void listing_configs(string G[], string N[], int k, int n) {
    int i, x[k + 1];
    for (i = k; i >= 0; --i) {
        x[i] = i;
    }
    do {
        view_config(G, N, x, k);
        i = k;
        while (i > 0 && x[i] == n - k + i) {
            i--;
        }
        if (i > 0) {
            next_config(x, k, i);
        }
    } while (i > 0);
}

int main() {
    string G[] = {"A", "B", "C", "D"};
    string N[] = {"Tung", "Cuc", "Truc", "Mai"};
    int k = 4;
    int n = 4;

    listing_configs(G, N, k, n);
}