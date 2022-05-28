#include <iostream>
#include <string>

class Employee {
  private:
    std::string name;
    std::string company;
    int age;
  public:
    Employee(std::string newName, std::string newCompany, int newAge) {
      name = newName;
      company = newCompany;
      age = newAge;
    }

    void setName(std::string newName){
      if(!newName.length() < 3){
        name = newName;
      }
    }

    std::string getName(){
      return name;
    }

    void setCompany(std::string newCompany){
      if(!newCompany.length() < 6){
        company = newCompany;
      }
    }

    std::string getCompany(){
      return company;
    }

    void setAge(int newAge){
      if(newAge >= 18){
        age = newAge;
      }
    }

    int getAge(){
      return age;
    }

    void introduceYourSelf() {
      std::cout << "name    : " << name << std::endl;
      std::cout << "age     : " << age << std::endl;
      std::cout << "company : " << company << std::endl;
    }

};

int main(){

  Employee employee1 = Employee("DikDns", "Diamond Inc.", 18);
  
  employee1.introduceYourSelf();

  std::cout << std::endl;

  std::cout << employee1.getName() << std::endl;
  employee1.setName("DIKDNS");
  std::cout << employee1.getName() << std::endl;

  std::cin.get();
  return 0;
}