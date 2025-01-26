#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int ary[n];
    
    for (int i = 0; i < n ; i++)
    {
        std::cin >> ary[i];
    }

    for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (ary[i] > ary[j]) {
                    int temp = ary[j];
                    ary[j] = ary[i];
                    ary[i] = temp;
            }
    }

}
 for (int i=0;i<n;i++) {
        std::cout << ary[i] << "\n";
    }

    return 0;
}

        