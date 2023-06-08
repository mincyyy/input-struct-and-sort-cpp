#include <iostream>
#include <string.h>
using namespace std;

int a,z;
int k,l,z1,q,w;
char y;

struct bio{
	string nama ;
	string nim ;
	string alamat ;
	string prd ;
	string hp ;
};

void swap (bio *s, bio *t){
	bio tmp = *s;
	*s = *t;
	*t = tmp;
}

main(){
	bio dkk[200];
	cout << "Jumlah data yang ingin di inputkan: "; cin >> z; fflush(stdin);
	for (a=0;a<z;a++){
		cout << endl << "DATA "<<a+1<<""<<endl;
		cout << "Nama Lengkap\t:"; getline (cin,dkk[a].nama);
		cout << "NIM\t\t:"; getline (cin,dkk[a].nim);
		cout << "Alamat\t\t:"; getline (cin,dkk[a].alamat);
		cout << "Jurusan\t\t:"; getline (cin,dkk[a].prd);
		cout << "Nomor HP\t:"; getline (cin,dkk[a].hp);
	}
	do {
		cout << endl << "(PILIH) Urut berdasarkan:\n1.Nama\n2.NIM\n3.Alamat\nPilih: "; cin >> y;
	}
	while (y<'1'||y>'3');
	if (y=='1'){
		for (int i=0;i<z;i++){
			for (int j=0;j<z-1;j++){
				if (dkk[j+1].nama < dkk[j].nama){
					swap (&dkk[j],&dkk[j+1]);
				}
			}
		}
	}
	if (y=='2'){
		for (k=0;k<z-1;k++){
			z1=k;
			for (l=k+1;l<z;l++){
				if (dkk[l].nim<dkk[z1].nim){
					z1=l;
				}
			}
			if (z1 != k){
				swap(&dkk[z1],&dkk[k]);
			}
		}
	}
	if (y=='3'){
		for (q=1;q<z;q++){
			w=q;
			while(dkk[w].alamat < dkk[w-1].alamat && w>0){
				swap(&dkk[w],&dkk[w-1]);
				w--;
			}
		}
	}
	for (a=0;a<z;a++){
		cout << endl << "DATA "<<a+1<<""<<endl;
		cout << "Nama Lengkap\t:" << dkk[a].nama << endl;
		cout << "NIM\t\t:" << dkk[a].nim << endl;
		cout << "Alamat\t\t:" << dkk[a].alamat << endl;
		cout << "Jurusan\t\t:" << dkk[a].prd << endl;
		cout << "Nomor HP\t:" << dkk[a].hp;
	}
}
