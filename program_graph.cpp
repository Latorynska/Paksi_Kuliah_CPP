#include <iostream>
#include <conio.h>
using namespace std;

struct node{
	node *next;
	node *prev;
	string nama;
	node *sisi[99];
	int sisi_count = 0;
};

node *head;
int simpul_count;

void init(){
	head = NULL;
	simpul_count = 0;
}

bool isEmpty(){
	if(head == NULL) return true;
	return false;
}

bool isExist(node * (&cluster)[99], int &cluster_count, node *target){
	for(int i = 0; i < cluster_count; i++){
		if(target == cluster[i]) return true;
	}
	return false;
}

void add_node(){
	node *baru = new node, *bantu;
	
	cout<<"Masukkan Nama Simpul : ";getline(cin, baru->nama);
	baru->next = NULL;
	baru->prev = NULL;
	
	if(isEmpty()){
		head = baru;
	}
	else{
		bantu = head;
		while(bantu->next != NULL){
			bantu = bantu->next;
		}
		baru->prev = bantu;
		bantu->next = baru;
	}
	cout<<"Simpul berhasil ditambahkan!\n\n";
	system("pause");
}

node *search_node(string targeted_nama){
	if(isEmpty()){
		cout<<"Data Kosong!\n";
	}
	else{
		node *bantu = head;
		while(bantu != NULL){
			if(bantu->nama == targeted_nama) return bantu;
			bantu = bantu->next;
		}
		return NULL;
	}
}

void add_simpul(){
	cout<<"=======================================================\n";
	cout<<"Menambah Simpul Baru"<<endl;
	cout<<"=======================================================\n";
	cout<<"Simpul Ke-"<<simpul_count + 1<<endl;
	add_node();
	simpul_count++;
}
bool add_sisi(node *asal){
	node *tujuan = NULL;
	string targeted_nama;
	
	cout<<"Masukkan Nama Node Tujuan : ";getline(cin, targeted_nama);
	tujuan = search_node(targeted_nama);
	if(isExist(asal->sisi,asal->sisi_count,tujuan)){
		cout<<"Tujuan Sudah dimasukkan di simpul ini!\n\n";
		return false;
	}
	
	if(tujuan == NULL){
		cout<<"\n\nNode Tujuan dengan nama : "<<targeted_nama<<" tidak dapat ditemukan!\n\n";
		return false;
	}
	else{
		asal->sisi[asal->sisi_count] = tujuan;
		asal->sisi_count++;
		tujuan->sisi[tujuan->sisi_count] = asal;
		tujuan->sisi_count++;
		cout<<"sisi berhasil ditambahkan!\n\n";
		return true;
	}
	
}
void generate_sisi(){
	if(isEmpty()){
		cout<<"\n\nData Kosong!\n\n";
	}
	else{
		string targeted_nama = "";
		cout<<"Masukkan nama simpul yang akan ditambahkan sisinya : ";getline(cin, targeted_nama);
		node *node_target = search_node(targeted_nama);
		
		if(node_target == NULL){
			cout<<"\n\nSimpul dengan nama \""<<targeted_nama<<"\" tidak dapat ditemukan\n\n";
		}
		else{
			int jml_sisi;
			cout<<"Masukkan jumlah sisi pada simpul : ";cin>>jml_sisi;cin.ignore();
			if(jml_sisi > simpul_count){
				cout<<"Jumlah sisi tidak dapat melebih dari jumlah simpul!\n\n";
			}
			else{
				int i = 0;
				while(i < jml_sisi){
					if(add_sisi(node_target)) i++;
					else{
						cout<<"\n\nSisi gagal ditambahkan!\n\n";
						char x;
						cout<<"ingin berhenti menambah sisi? (y/n) : ";cin>>x;cin.ignore();
						if(x == 'y' || x == 'Y') {
							break;
						}
					}
				}
			}
		}
	}
	system("pause");
}

void tampil_simpul(){
	if(isEmpty()){
		cout<<"Data Kosong!\n\n";
		system("pause");
	}
	else{
		node *bantu = head;
		while(bantu != NULL){
			cout<<"Nama Simpul : "<<bantu->nama<<endl;
			bantu = bantu->next;
		}
		cout<<"Jumlah seluruh simpul : "<<simpul_count<<endl<<endl;
		system("pause");
	}
}


void cluster_input(node * (&clustered)[99], int &cluster_count, node * (&checked)[99], int &checked_count, node *target){
	for(int i = 0; i < target->sisi_count;i++){
		if(!isExist(clustered,cluster_count,target->sisi[i]) && !isExist(checked,checked_count,target->sisi[i])){
			checked[checked_count] = target->sisi[i];
			checked_count++;
			cluster_input(clustered,cluster_count,checked,checked_count,target->sisi[i]);
		}
	}
	clustered[cluster_count] = target;
	cluster_count++;
}
bool is_connected(){
	if(isEmpty()){
		cout<<"Data Kosong!\n\n";
		system("pause");
		return false;
	}
	else{
		node *main_cluster[99], *checked[99], *bantu = head;
		int main_cluster_count = 0, checked_count = 0;;
		
		if(bantu->sisi_count == 0) return false;
		else{
			main_cluster[0] = bantu;
			main_cluster_count++;
			for(int i = 0; i < main_cluster[0]->sisi_count; i++){
				cluster_input(main_cluster,main_cluster_count,checked,checked_count,bantu);
			}
		}
		
		while(bantu != NULL){
			bool node_connected = false;
			for(int i = 0; i < bantu->sisi_count; i++){
				if(isExist(main_cluster,main_cluster_count,bantu->sisi[i])){
					node_connected = true;
					break;
				}
			}
			if(!node_connected) return false;
			bantu = bantu->next;
		}
	}
	return true;
}

void tampil_sisi(){
	if(isEmpty()){
		cout<<"Data Kosong!\n\n";
		system("pause");
	}
	else{
		node *bantu = head;
		while(bantu != NULL){
			cout<<"=======================================================\n";
			cout<<"\tMenampilkan sisi pada node "<<bantu->nama<<endl;
			cout<<"=======================================================\n";
			for(int i = 0; i < bantu->sisi_count; i++){
				cout<<"Terhubung pada node : "<<bantu->sisi[i]->nama<<endl;
			}
			cout<<endl;
			bantu = bantu->next;
		}
		if(is_connected()){
			cout<<"\n\nGraph Diatas merupakan Graph Terhubung\n\n";
		}
		else{
			cout<<"\n\nGraph Diatas merupakan Graph Tidak Terhubung\n\n";
		}
	}
	system("pause");
}

main(){
	init();
	start:
	system("CLS");
	int mn;
	cout<<"=======================================================\n";
	cout<<"\t\tMain Menu Graph"<<endl;
	cout<<"=======================================================\n";
	cout<<"1. Tambah Simpul"<<endl;
	cout<<"2. Tambah Sisi"<<endl;
	cout<<"3. Tampil Simpul"<<endl;
	cout<<"4. Tampil Seluruh Sisi"<<endl;
	cout<<"5. Keluar"<<endl;
	cout<<"Masukkan Pilihan <1-5> : ";cin>>mn;cin.ignore();
	switch(mn){
		case 1 : {
			add_simpul();
			break;
		}
		case 2 : {
			generate_sisi();
			break;
		}
		case 3 : {
			tampil_simpul();
			break;
		}
		case 4 : {
			tampil_sisi();
			break;
		}
		case 5 : {
			return 0;
			break;
		}
		default : {
			cout<<"Pilihan Tidak Tersedia!\n";
			system("pause");
			break;
		}
	}
	if(mn != 5) goto start;
}
