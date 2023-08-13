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

void readData(std::string fileName){
  std::string buffer;
  std::fstream file;
  int count = 0;
  file.open(fileName, std::ios::in);
  while(!file.eof()){
    Siswa siswa;
    std::getline(file, buffer);
    for(int i = 0; i < buffer.length(); i++){
      if(buffer[i] == ';'){
        count++;
      } else if (count == 0) {
        siswa.id += buffer[i];
      } else if (count == 1) {
        siswa.nis += buffer[i];
      } else if (count == 2) {
        siswa.nama += buffer[i];
      } else if (count == 3) {
        siswa.kelas += buffer[i];
      } else if (count == 4) {
        siswa.posisi += buffer[i];
      } else if (count == 5) {
        siswa.status += buffer[i];
      }
    }   
    if(!buffer.empty()){
      std::cout << siswa.id << std::endl; 
      std::cout << siswa.nis << std::endl; 
      std::cout << siswa.nama << std::endl; 
      std::cout << siswa.kelas << std::endl; 
      std::cout << siswa.posisi << std::endl; 
      std::cout << siswa.status << std::endl; 
      std::cout << std::endl;
    }
    count = 0;
  }
  file.close();
}

void searchData(std::string fileName, std::string &id){
  std::string buffer;
  std::fstream file;
  int count = 0;
  file.open(fileName, std::ios::in);
  while(!file.eof()){
    Siswa siswa;
    std::getline(file, buffer);
    for(int i = 0; i < buffer.length(); i++){
      if(buffer[i] == ';'){
        count++;
      } else if (count == 0) {
        siswa.id += buffer[i];
      } else if (count == 1) {
        siswa.nis += buffer[i];
      } else if (count == 2) {
        siswa.nama += buffer[i];
      } else if (count == 3) {
        siswa.kelas += buffer[i];
      } else if (count == 4) {
        siswa.posisi += buffer[i];
      } else if (count == 5) {
        siswa.status += buffer[i];
      }
    }   
    if(id == siswa.id){
      std::cout << siswa.id << std::endl; 
      std::cout << siswa.nis << std::endl; 
      std::cout << siswa.nama << std::endl; 
      std::cout << siswa.kelas << std::endl; 
      std::cout << siswa.posisi << std::endl; 
      std::cout << siswa.status << std::endl; 
      std::cout << std::endl;
    }
    count = 0;
  }
  file.close();
}

int main(){
  std::string file = "data.txt";
  std::string id = "1";

  readData(file);
  searchData(file, id);

  std::cin.get();
  return 0;
}