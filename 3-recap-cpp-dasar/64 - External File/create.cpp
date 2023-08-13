#include <iostream>
#include <string>
#include <fstream>

struct Siswa {
  std::string id;
  std::string nis;
  std::string nama;
  std::string kelas;
  std::string posisi;
  std::string status;
};

void createData(std::string &fileName, Siswa &x){
  std::fstream file;
  file.open(fileName, std::ios::app | std::ios::out);
  file << x.id << ";";
  file << x.nis << ";";
  file << x.nama << ";";
  file << x.kelas << ";";
  file << x.posisi << ";";
  file << x.status << ";";
  file << "\n";
  file.close();
}

int main(){
  Siswa siswa;
  siswa.id = "3";
  siswa.nis = "2002001";
  siswa.nama = "Dicky Nugraha";
  siswa.kelas = "XII IPS 2";
  siswa.posisi = "Anggota";
  siswa.status = "Aktif";

  std::string file = "data.txt";

  createData(file, siswa);
  
  std::cin.get();
  return 0;
}