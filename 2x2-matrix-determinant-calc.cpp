#include <iostream>

using namespace std;

int main() {
	
    int matris[2][2];
	int det;
	
    cout << "Lutfen 2x2 matrisin elemanlarini girin:\n";

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Matris[" << i << "][" << j << "]: ";
            cin >> matris[i][j];
        }
    }
		
    cout << "\nGirdiginiz Matris:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << matris[i][j] << " ";
        }
        cout << endl;
    }
    
    	det= (matris[0][0]*matris[1][1])-(matris[0][1]*matris[1][0]);
		cout << "Girdiginiz matrisin determinanti: " << det;
		
    return 0;
}
