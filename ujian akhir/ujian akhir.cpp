#include <iostream>
using namespace std;
class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}
	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return 0; }
	virtual void input() {}
	
	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getPresensi() {
		return presensi;
	}

	void setactivity(float nilaia) {
		this->activity = nilaia;
	}

	float getactivity() {
		return activity;
	}
	void setexercise(float nilaie) {
		this->exercise = nilaie;
	}
	float getexercise() {
		return exercise;
	}
	void settugasAkhir(float nilait) {
		this->tugasAkhir = nilait;
	}
	float gettugasAkhir() {
		return tugasAkhir;
	}

};
class Pemrograman : public MataKuliah {
	int nilai;

	void input() {
		int p;
		setPresensi(10);
		int a;
		setactivity(20);
		int e;
		setexercise(30);
		int ua;
		settugasAkhir(40);
	}

	virtual float hitungNilaiAkhir

	virtual void cekKelulusan() {
		if (nilai >= 75)
			return "selamat anda lulus" << endl;
		else
			return "maaf anda gagal " << endl;
	}
};




int main() {
	int  p, a, e, ua;
	
	cout << "masukan nilai presensi : " << endl;
	cin >> p;
	cout << "masukan nilai activity : " << endl;
	cin >> a;
	cout << "masukan nilai exercise : " << endl;
	cin >> e;
	cout << "masukan nilai tugas akhir : " << endl;
	cin >> ua;
}

