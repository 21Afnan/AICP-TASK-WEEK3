#include <iostream>
using namespace std;
//using functions for calculuation of bill of slabs 1,2,3..
   void costslab1(	int electricity_matrix[4][3]){
      int i=0;
      double cost[3];
     //using while loop for calculation of each unit consumption by keeping rate constant...
           while(i<3){
             cost[i]= electricity_matrix[0][i] * electricity_matrix[3][0];
                   cout<<cost[i]<<" ";
                       i++;
          }
    }
     void costslab2(	int electricity_matrix[4][3]){
           int i=0;
           double cost[3];
            while(i<3){
                   cost[i]= electricity_matrix[1][i] * electricity_matrix[3][1];
                   cout<<cost[i]<<" ";
                        i++;
            }
        }
      void costslab3(	int electricity_matrix[4][3]){
           int i=0;
           double cost[3];
            while(i<3){
                 cost[i]= electricity_matrix[2][i] * electricity_matrix[3][2];
                    cout<<cost[i]<<" ";
                       i++;
               }
        }
     int main() {
          	int electricity_matrix[4][3]={
	          {55,65,75} // Storing units range for  slab 1..
	         ,{120,150,170}//Storing units range for  slab 2.
			 ,{210,230,240}//Storing units range for  slab 3.
			 ,{10,15,20} // costs per unit for slab 1,2,3...
	           };
           	string id ="s231963.";
           	int choice;
           // using do-while loop to continue running the code until the user wants to exit it..
           	do{
			
             cout<<"\nMy Student Id is:"<<id<<endl;
	         cout<<"Enter your choice to see the bill." <<endl;
             cout<<"1.Display the bill of slab1 and slab2. "<<endl; 
             cout<<"2.Display the bill of slab3. "<<endl; 
	         cout<<"Press anyother key to exit program."<<endl; 
             cin>>choice;
            //using switch to show the bill of slabs 1,2,3 on user choice..
           
		   
	          switch(choice){
	            case 1:
	             	 cout<<"the bill of slab1 is: Rs. "<<endl;
		             costslab1(	 electricity_matrix);
		             cout<<"\nthe bill of slab2 is : Rs. "<<endl;
		             costslab2(electricity_matrix);
                    	break;
                case 2:
    	            cout<<"the bill of slab3 is : Rs. "<<endl;
	  	            costslab3(electricity_matrix);
		              break;
	            default:
		            cout<<"Exiting program"<<endl;
	                 break;
              }
      }
              while(choice==1||choice==2);
          
	       return 0;
           }
