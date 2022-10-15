#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <sys/time.h>
#include <stdlib.h>
#include <iostream>
#include <ctype.h>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <fstream>
#include <iostream>
using namespace std;
string convertToString(char* a, int size);
void remove(char *arr, int n);
bool compare(int x, int y);

char n1_array[50];
string input1;
char n2_array[50];
string input2;
char n3_array[50];
string input3;
char n4_array[50];
string input4;
int main()
{
  char arr[50];
  int n=1;
  cout << "Please Enter Block of Instruction. Press Ctrl + D to when you finish" <<endl;
  cout << "Block:" <<endl;
  while (cin.getline(arr,sizeof(arr)))
  {
    //cout << input << endl;



    if(n==1)
    {
      //cout <<"Array 1 entered: ";
       //for (size_t i = 0; i < strlen(arr); i++)
       //{
        //  cout << arr[i];

       //}
      //  cout << endl;



            int m = strlen(arr);
           input1 = convertToString(arr, m);
            //cout <<"INPUT 1 IS "<< input1<< endl;


        remove(arr,n);

        //cout <<"n1_arr after remove: "<< n1_array[0]<< n1_array[1]<< n1_array[2]<< n1_array[3]<< n1_array[4]<< n1_array[5]<< n1_array[6]<< n1_array[7]<< n1_array[8]<<endl;
}
    else if(n==2)
    {
      //cout <<"Array 2 enered: ";
       //for (size_t i = 0; i < strlen(n2_array); i++)
       //{
          //cout << n2_array[i];

       //}
          //cout << endl;
          int m = strlen(arr);
          input2 = convertToString(arr, m);
          //cout << input2<< endl;
          remove(arr,n);
          //cout <<"n2_arr after remove: "<< n2_array[0]<< n2_array[1]<< n2_array[2]<< n2_array[3]<< n2_array[4]<<endl;

    }
    else if(n==3)
    {
      //cout <<"Array 3 enered: ";
       //for (size_t i = 0; i < strlen(n3_array); i++)
       //{
          //cout << n3_array[i];

       //}
   //cout << endl;
   int m = strlen(arr);
   input3 = convertToString(arr, m);
   //cout << input3<< endl;
   remove(arr,n);
   //cout <<"n3_arr after remove: "<< n3_array[0]<< n3_array[1]<< n3_array[2]<< n3_array[3]<< n3_array[4]<<endl;
    }


    else if(n==4)
    {
      //cout <<"Array 4 entered: ";
       //for (size_t i = 0; i < strlen(n4_array); i++)
       //{
          //cout << n4_array[i];

       //}
    //cout << endl;
    int m = strlen(arr);
    input4 = convertToString(arr, m);
    //cout << input4<< endl;
    remove(arr,n);
    //cout <<"n4_arr after remove: "<< n4_array[0]<< n4_array[1]<< n4_array[2]<< n4_array[3]<< n4_array[4]<<endl;
    }





  n++;

}
int b = 0;
ofstream outfile;
 outfile.open("finalout.txt");
cout << "The pairs of Instructions that can be exexuted in parallel are:"<<endl;
outfile << "The pairs of Instructions that can be exexuted in parallel are:"<<endl;
if (n==2)
{
  cout << "Need More Inputs!"<<endl;
  outfile << "Need More Inputs!"<<endl;
}

else if (n==3)
{
  if(compare(1,2))
  {
    cout << "("<<input1<<","<<input2<<")"<<endl;
    outfile << "("<<input1<<","<<input2<<")"<<endl;
    b = 1;
  }

}
else if (n==4)
{
 //cout << "n=3 was ran"<<endl;
  if(compare(1,2))
  {
    cout << "("<<input1<<","<<input2<<")"<<endl;
    outfile  << "("<<input1<<","<<input2<<")"<<endl;
    b = 1;


  }
  if(compare(1,3))
  {
    cout << "("<<input1<<","<<input3<<")"<<endl;
    outfile  << "("<<input1<<","<<input3<<")"<<endl;
    b = 1;

  }
  if(compare(2,3))
  {
    cout << "("<<input2<<","<<input3<<")"<<endl;
    outfile  << "("<<input2<<","<<input3<<")"<<endl;
    b = 1;

  }

}
else if (n==5)
{
    if(compare(1,2))
    {
      cout << "("<<input1<<","<<input2<<")"<<endl;
      outfile << "("<<input1<<","<<input2<<")"<<endl;
      b = 1;
    }
    if(compare(1,3))
    {
      cout << "("<<input1<<","<<input3<<")"<<endl;
      outfile << "("<<input1<<","<<input3<<")"<<endl;
      b = 1;
    }
    if(compare(1,4))
    {
      cout << "("<<input1<<","<<input4<<")"<<endl;
      outfile  << "("<<input1<<","<<input4<<")"<<endl;
      b = 1;
    }
    if(compare(2,3))
    {
      cout << "("<<input2<<","<<input3<<")"<<endl;
      outfile  << "("<<input2<<","<<input3<<")"<<endl;
      b = 1;
    }
    if(compare(2,4))
    {
      cout << "("<<input2<<","<<input4<<")"<<endl;
      outfile << "("<<input2<<","<<input4<<")"<<endl;
      b = 1;
    }
    if(compare(3,4))
    {
      cout << "("<<input3<<","<<input4<<")"<<endl;
      outfile  << "("<<input3<<","<<input4<<")"<<endl;
      b = 1;
    }


}
if (!b)
{
  cout << "NONE"<<endl;
  outfile  << "NONE"<<endl;
}
cout << "End. Same output has been written to finalout.txt"<<endl;
}




bool compare(int x, int y)
{
  char first_instruction[20];
  char second_instruction[20];
  if (x==1&&y==2)
  {
      for (size_t i = 0; i < 20; i++)
    {
       first_instruction[i] = n1_array[i];
    }
    for (size_t k = 0; k < 20; k++)
  {
     second_instruction[k] = n2_array[k];
  }

  }
  if (x==1&&y==3)
  {
      for (size_t i = 0; i < 15; i++)
    {
       first_instruction[i] = n1_array[i];
    }
    for (size_t k = 0; k < 20; k++)
  {
     second_instruction[k] = n3_array[k];
  }

  }
  if (x==1&&y==4)
  {
      for (size_t i = 0; i < 20; i++)
    {
       first_instruction[i] = n1_array[i];
    }
    for (size_t k = 0; k < 20; k++)
  {
     second_instruction[k] = n4_array[k];
  }

  }
  if (x==2&&y==3)
  {
      for (size_t i = 0; i < 20; i++)
    {
       first_instruction[i] = n2_array[i];
    }
    for (size_t k = 0; k < 20; k++)
  {
     second_instruction[k] = n3_array[k];
  }
}
  if (x==2&&y==4)
  {
      for (size_t i = 0; i < 20; i++)
    {
       first_instruction[i] = n2_array[i];
    }
    for (size_t k = 0; k < 20; k++)
  {
     second_instruction[k] = n4_array[k];
  }
}
  if (x==3&&y==4)
  {
      for (size_t i = 0; i < 20; i++)
    {
       first_instruction[i] = n3_array[i];
    }
    for (size_t k = 0; k < 20; k++)
  {
     second_instruction[k] = n4_array[k];
  }

  }
  //Test 1
    //cout << first_instruction[0]<< " 1VS "<< second_instruction[0]<<endl;
    if (first_instruction[0] == second_instruction[0])
      {
        //cout << endl<< "found same letter"<<endl;
        //cout <<"It is : "<<first_instruction[0]<<" and: "<<second_instruction[0]<<endl;
        return false;
      }

    //cout <<"TEST 1 COMPLETED"<<endl;
  //Test 2
  for (int i = 0; i < 20; i++)
  {

    //cout << first_instruction[i+1]<< " 2VS "<< second_instruction[0]<<endl;
    if (first_instruction[i+1] == second_instruction[0])
      {
        //cout <<endl<< "found same letter"<<endl;
        //cout <<"It is : "<<first_instruction[i+1]<<" and: "<<second_instruction[0]<<endl;
        return false;
      }


  }
    //cout <<"TEST 2 COMPLETED"<<endl;

  //Test 3
  for (int i = 0; i < 20; i++)
  {

    //cout << first_instruction[0]<< " 3VS "<< second_instruction[i+1]<<endl;
    if (first_instruction[0] == second_instruction[i+1])
      {
        //cout <<endl<< "found same letter"<<endl;
        //cout <<"It is : "<<first_instruction[0]<<" and: "<<second_instruction[i+1]<<endl;
        return false;
      }


  }
    //cout <<"TEST 3 COMPLETED"<<endl;
  return true;
}























void remove(char *arr, int n)
{

for (size_t i = 0; i < 20; i++)
{
   if(arr[i] != '+'&&arr[i] != '-'&&arr[i] != '='&&arr[i] != '('&&arr[i] != '*'&&arr[i] != ')'&&arr[i] != '/'&&arr[i] != ' ')
   {

     if(arr[i]=='a'||arr[i]=='b'||arr[i]=='c'||arr[i]=='d'||arr[i]=='e'||arr[i]=='f'
       ||arr[i]=='g'||arr[i]=='h'||arr[i]=='i'||arr[i]=='j'||arr[i]=='k'||arr[i]=='l'
     ||arr[i]=='m'||arr[i]=='n'||arr[i]=='o'||arr[i]=='p'||arr[i]=='q'||arr[i]=='r'
   ||arr[i]=='s'||arr[i]=='t'||arr[i]=='u'||arr[i]=='v'||arr[i]=='w'||arr[i]=='x'||arr[i]=='y'||arr[i]=='z')
     {
           //cout << strlen(s_arr);
           if(n==1)
           {
                    n1_array[i] = arr[i];
           }
           else if (n==2)
           {
                    n2_array[i] = arr[i];
           }
           else if (n==3)
           {
                    n3_array[i] = arr[i];
           }
           else if (n==4)
           {
                    n4_array[i] = arr[i];
           }
}

     }

   }

}

string convertToString(char* a, int size)
{
    int i;
    string s = "";
    for (i = 0; i < size; i++) {
        s = s + a[i];
    }
    return s;
}
