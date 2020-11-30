# Classes in C++ - Assignment 3 : 

--------------------------
Classes exercises

ZooAnimal #1

1.  The ZooAnimal class definition below is missing a prototype for
the Create function.  It should have parameters so that a character
string and three integer values (in that order) can be provided when
it is called for a ZooAnimal object.  Like the Destroy function, it
should have return type void.  Write an appropriate prototype for the
ZooAnimal Create function.

   class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Destroy (); // destroy function
      char* reptName ();
      int daysSinceLastWeighed (int today);
   };


2.  Write a function header for the ZooAnimal class member function
daysSinceLastWeighed.  This function has a single integer parameter
today and returns an integer number of days since the animal was last
weighed.

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

   {
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday) 
        thisday += 360;
    return (thisday-startday);
   }


3.  In the main function there is a cout statement that attempts to
print the animal's name.  However, it is not allowable because it
attempts to access the private data member called name.  Modify that
statement so that it uses a public member function that returns the
ZooAnimal's name.

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
   void main ()
   {
    ZooAnimal bozo;
    bozo.Create ("Bozo", 408, 1027, 400);

    cout << "This animal's name is " << bozo.name << endl;

    bozo.Destroy ();
   }

ZooAnimal #2


1.  Write the ZooAnimal inline member function reptWeightDate.  It
should simply return the weightDate data member.

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


2.  Modify the prototype for changeWeightDate below to make it the
appropriate single line inline member function changeWeightDate.  The
single line needed should set the data member weightDate equal to the
parameter today.

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
      inline void changeWeightDate (int today);
      char* reptName ();
      int reptWeight ();
      void reptWeight (scale which);
      int reptWeightDate ();
      int daysSinceLastWeighed (int today);
   };


3.  Write the ZooAnimal member function isMotherOf.  It needs only a
single statement that makes the mother data member of the ZooAnimal
object parameter a pointer to the ZooAnimal object for which this
function is called.

   class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
      ZooAnimal *mother;
    public:
      void Create (char*, int, int, int); // create function
      void Destroy (); // destroy function 
      void isMotherOf (ZooAnimal&);
      void changeWeight (int pounds);
      void changeWeightDate (int today);
      char* reptName ();
      int reptWeight ();
      void reptWeight (scale which);
      inline int reptWeightDate () {return weightDate;};
      int daysSinceLastWeighed (int today);
   };



