enum scale {ounces, kilograms};

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
   void changeWeight (int pounds);
   void changeWeightDate (int today);
   char* reptName ();
   int reptWeight ();
   void reptWeight (scale which);
   inline int reptWeightDate ();
   int daysSinceLastWeighed (int today);
};

ZooAnimal::reptWeightDate()
{
    return weightDate;
}
