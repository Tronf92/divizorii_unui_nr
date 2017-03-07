#include <iostream>
using namespace std;

int main(){
	int nr,contor;
	cin >> nr;
	for(contor=1;contor<=nr;contor++){
		if (nr%contor==0){
			cout  << contor << " Este divizor al numarului dat!" << endl;
		}
	}

	system("pause");
	return 0;
}