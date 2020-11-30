// ZooAnimal #1 (2):
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
void ZooAnimal::Destroy ()
   {
    delete [] name;
   }
   // -------- member function to return the animal's name
   char* ZooAnimal::reptName ()
   {
    return name;
   }

   // -------- member function to return the number of days
   // -------- since the animal was last weigh ed
int ZooAnimal::daysSinceLastWeighed(int today)
   {
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday)
        thisday += 360;
    return (thisday-startday);
   }
