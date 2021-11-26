#include <iostream>
using namespace std;

void showmatriks(int mtrks[][2], int jmlb, int jmlk){
	for(int i = 0; i < jmlb; i++){
		for(int x = 0; x < jmlk; x++){
			cout<<mtrks[i][x]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}
void inputmatriks(int mtrks[][2],int jmlb,int jmlk){
	for(int i = 0; i < jmlb; i++){
		for(int x = 0; x < jmlk; x++){
			cout<<"Masukkan nilai baris ke-"<<i+1<<" Kolom ke-"<<x+1<<" : ";cin>>mtrks[i][x];
		}
	}
}

void getadd(int mtrks1[][2], int mtrks2[][2], int tmp[][2]){
	for(int i = 0; i < 2; i++){
		for(int x = 0; x < 2; x++){
			tmp[i][x] = mtrks1[i][x] + mtrks2[i][x];
		}
	}
}

void getmultiple(int mtrks1[][2], int mtrks2[][2], int tmp[][2]){
	for(int i = 0; i < 2; i++){
		for(int x = 0; x < 2; x++){
			tmp[i][x] = (mtrks1[i][0] * mtrks2[0][x]) + (mtrks1[i][1] * mtrks2[1][x]);
		}
	}
}

void showinvers(int mtrks[][2], int det){
	if(det != 0){
		for(int i = 0; i < 2; i++){
			for(int x = 0; x < 2; x++){
				cout<<float(float(mtrks[i][x]) / float(det))<<" ";
			}
			cout<<endl;
		}
	}
	else{
		cout<<"Invers Tidak Ditemukan";
	}
}

int getdeterminan(int mtrks[][2]){
	return (mtrks[0][0] * mtrks[1][1]) - (mtrks[0][1] * mtrks[1][0]);
}

main(){
	int matriks1[2][2], matriks2[2][2];
	int tempmatriks[2][2];
	
	cout<<"Masukkan Data Matriks A"<<endl;
	inputmatriks(matriks1,2,2);
	
	cout<<"\nMasukkan Data Matriks B"<<endl;
	inputmatriks(matriks2,2,2);
	
	cout<<endl;
	showmatriks(matriks1,2,2);
	showmatriks(matriks2,2,2);
	
	cout<<"Penjumlahan Matriks A + Matriks B"<<endl;
	getadd(matriks1,matriks2,tempmatriks);
	showmatriks(tempmatriks,2,2);
	
	cout<<"Perkalian Matriks A * Matriks B"<<endl;
	getmultiple(matriks1, matriks2, tempmatriks);
	showmatriks(tempmatriks,2,2);
	
	cout<<"Determinasi Dari Matriks A : "<<getdeterminan(matriks1);
	cout<<endl;
	
	cout<<"Invers Dari Matriks A"<<endl;
	showinvers(matriks1,getdeterminan(matriks1));
}
