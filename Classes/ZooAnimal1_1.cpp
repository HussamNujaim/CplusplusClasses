// ZooAnimal #1 (1):
class ZooAnimal
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      ZooAnimal(char *, int, int, int); // Create Function (Constructor)
      void Destroy (); // destroy function
      char* reptName ();
      int daysSinceLastWeighed (int today);
   };
