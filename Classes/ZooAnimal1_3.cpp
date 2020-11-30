#include <iostream>

using namespace std;

class ZooAnimal
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Create (char*, int, int, int); // create function
      void Destroy (); // destroy function
      char* reptName ();
      int daysSinceLastWeighed (int today);
   };

   // -------- member function to return the animal's name
   char* ZooAnimal::reptName ()
   {
    return name;
   }

   // ========== an application to use the ZooAnimal class
   int main ()
   {
    ZooAnimal bozo;
    bozo.Create ("Bozo", 408, 1027, 400);

    std::cout << "This animal's name is " << bozo.reptName() << std::endl;

    bozo.Destroy ();
    return 0;
   }
