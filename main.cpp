#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  //variables 
  string finalc, mytext;
  int firsta=0, correcta=0, wronga=0, seconda=0;
  
  cout<<"Hello and Welcome to my Blue-yellow color blind test. " <<endl
      <<"The test will begin easy at the start "
      <<"and will progressively get harder." <<endl<<endl;

      do
      {
        cout<<"============================================="<<endl<<endl;
          //say that you are about to begin 
          cout<< "Let's bring up the first two images."<<endl<<endl;

          //open first two images from the first file

          ifstream MyReadFile("Test1.txt");
  
    while (getline (MyReadFile, mytext)) 
    {
    // Output the text from the file
    cout << mytext <<endl;
    }

    cout<<endl;

    //give them an option between the two images (Question 1)
      do 
      {
        cout<<"Which image is blue? (Please selecr 1 or 2)"<<endl;

        //record the response 
        cin>> firsta;

        //see if the response is correct or wrong
          if (firsta == 1)
          {
          cout<<"Good choice!"<<endl<<endl;

          correcta++;
          }

          else if (firsta == 2)
          {
          cout<<"Nice try!"<<endl<<endl;
          wronga++;
          }

          else 
          {
            cout<<"Please select 1 or 2."<<endl<<endl;
          }
      }

      while ((firsta != 1) && (firsta != 2));

        //spacing for readability
        cout<<endl;
        cout<<"============================================="<<endl<<endl<<endl;

      do 
      {
        //start question 2
        cout<<"Here is Question 2."<<endl<<endl;

        //open the nexst two images from the second file
          ifstream MyReadFile("Test2.txt");
  
    while (getline (MyReadFile, mytext)) 
    {
    // Output the text from the file
    cout << mytext <<endl;
    }

    cout<<endl;

      //give them an option between the two images (Question 2)

        cout<<"Which image is green? (Please select 1 or 2)"<<endl;

        //record the second response 
        cin>> seconda;

        //see if the response is correct or wrong
          if (seconda == 1)
          {
          cout<<"Nice Try!"<<endl<<endl;

          wronga++;
          }

          else if (seconda == 2)
          {
          cout<<"Good job!"<<endl<<endl;
          correcta++;
          }

          else 
          {
            cout<<"Please select 1 or 2."<<endl<<endl;
          }
      }

      //checks to make sure the user enters a 1 or 2 //repeats if anything else
      while ((seconda != 1) && (seconda != 2));
      
      //spacing for readability 
      cout<<endl;
      cout<<"============================================="<<endl<<endl<<endl;

///////////////////////////////////////////////////////////////////////////////////////////
// END OF PROGRAM, IF EXPANDED DO BEFORE THIS LINE!!///////////////////////////////////////

        //final score
        cout<<"Your final score is " <<endl
            <<"                       "<<correcta <<" Correct answers!"<< endl
            <<"                       "<<wronga << " Incorrect answers!"
            <<endl;

        //reset the scores
        correcta=0;
        wronga=0;

        cout<<endl; //line spacing

      //ask user if they want to resart
        cout<<"Do you want to restart? (y or n)"<<endl;
        cin>> finalc;
        cout<<endl;
      }

  while (finalc != "n");

  cout<<"Thank you for your particpation!"<<endl;
  return 0;
}