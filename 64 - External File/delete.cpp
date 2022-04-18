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

void deleteData(std::string &fileName, std::string &id){
  std::string buffer;
  std::fstream file;
  std::fstream tempFile;
  char confirm;
  int count = 0;

  tempFile.open("tempFile.txt", std::ios::trunc | std::ios::out);
  file.open(fileName, std::ios::in);

  while( !file.eof() ){
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
      std::cout << "delete this data? (Y/N) ";
      std::cin >> confirm;
      if(confirm == 'y' || confirm == 'Y'){
        buffer = "";
      }
    }

    if(!buffer.empty()){
      tempFile << siswa.id << ";";
      tempFile << siswa.nis << ";";
      tempFile << siswa.nama << ";";
      tempFile << siswa.kelas << ";";
      tempFile << siswa.posisi << ";";
      tempFile << siswa.status << ";";
      tempFile << "\n";
    }

    count = 0;
  }

  file.close();
  tempFile.close();
  std::remove(fileName.c_str());
  std::rename("tempFile.txt",fileName.c_str());
}

int main(){
  std::string file = "data.txt";
  std::string id = "2";

  deleteData(file, id);

  std::cin.get();
  return 0;
}