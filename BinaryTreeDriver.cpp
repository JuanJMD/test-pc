// This program currently builds a binary tree with 5 nodes.
// The nodes are displayed with the inorder algorithm (in IntBinaryTree.cpp).
//
// (1) Modify IntBinaryTree.cpp to include the preorder and postorder algorithms. 
//
// (2) Modify this driver program to provide a menu that allows the user to 
// insert a node and display the tree using the choice of the 
// inorder, preorder, or postorder algorithm. Also include an option to quit 
// the program

// Juan Jesus Marquez Diaz

#include <iostream>
//#include "IntBinaryTree.cpp"
#include "IntBinaryTree.h"
using namespace std;

void menu();
void diffDisplayNodes(IntBinaryTree, int);
void optionDisplay(int);

int main()
{
   IntBinaryTree tree;
   int nodeAmount = 5;
   int usrInput = 0;
   int nodeVal;
   int orderTravNum;

   cout << "Welcome to the Binary Tree Traversal Program" << endl;
   cout << "--------------------------------------------" << endl;

   /*
   The while loop will run up until the user inputs the number 5.
   When the number 5 is entered, the program will stop running as it 
   serves as the option 'end program'
   */

   while(usrInput != 5)
   {
      /*
      menu() outputs the menu that displays the options the user has
      to choose and they are asked to choose an option
      */
      menu();
      cout << "\n" << "> ";
      cin >> usrInput;
      cout << "\n";
      /*
      While the user inputs a value less than or equal to zero or a number
      greater than 5, the program will ask the user to try again and 
      input a new number.
      If the user keeps entering an invalid number, then the while loop
      will keep on running.
      */
      while(usrInput <= 0 || usrInput > 5)
      {
         cout << "Invalid Input, please try again" << endl;
         cout << "\n" << "> ";
         cin >> usrInput;
         cout << "\n";
      }

      /*
      If the user enters 1, their option will display their first option.
      They will be asked to enter the amount of nodes and will input those
      nodes right after.
      The nodes will be entered into the binary tree
      */
      if(usrInput == 1)
      {
         optionDisplay(1);

         cout << "How mant nodes would you like to insert?" << endl;
         cout << "Amount: ";
         cin >> nodeAmount;
         cout << "\n";

         cout << "Prepare to enter " << nodeAmount << " nodes." << endl;
         
         
         for(int i = 0; i < nodeAmount; i++)
         {
            cout << "Enter a value for node #" << i + 1 << endl;
            cout << "#" << i + 1 << ": ";
            cin >> nodeVal;
            cout << "\n";

            tree.insertNode(nodeVal);
         }         
         cout << "\n";
      }
      
      /*
      If the user enters 2, their option will display their second option.
      Then the program will call the program diffDisplay notes and call the
      display in order function from the IntBinary Tree class.
      */
      else if(usrInput == 2)
      {
         optionDisplay(2);
         orderTravNum = 1;
         diffDisplayNodes(tree, orderTravNum);
         cout << "\n";
      }
      /*
      If the user enters 3, their option will display their third option.
      Then the program will call the program diffDisplay notes and call the
      display pre order function from the IntBinary Tree class.
      */
      
      else if(usrInput == 3)
      {
         optionDisplay(3);
         orderTravNum = 2;
         diffDisplayNodes(tree, orderTravNum);
         cout << "\n";
      }
      /*
      If the user enters 4, their option will display their fourth option.
      Then the program will call the program diffDisplay notes and call the
      display post order function from the IntBinary Tree class.
      */

      else if(usrInput == 4)
      {
         optionDisplay(4);
         orderTravNum = 3;
         diffDisplayNodes(tree, orderTravNum);
         cout << "\n";
      }

   }

   /*
   If the user enters 5, the program will end the program.
   */
   cout << "--- End of Program ---" << endl;
   return 0;
}

/*
void menu() will display all of the options that
the user can enter.
*/
void menu()
{
   cout << "\n" << "-------------------------------------" << endl;
   cout << "Choose one of the following options: " << endl;
   cout << "-------------------------------------" << endl;

   cout << "[1] - Insert nodes" << endl;
   cout << "[2] - Displaying tree using In Order Traversal" << endl;
   cout << "[3] - Displaying tree using PreOrder Traversal" << endl;
   cout << "[4] - Displaying tree using PostOrder Traversal" << endl;
   cout << "[5] - Quit the Program" << endl;

}
/*
void optionDisplay(int) displays the option the user entered when they input a number 
by matching the case with the inputed value into the function.
*/
void optionDisplay(int option)
{
   switch (option)
   {
   case 1:
      cout << "----------------------------" << endl;         
      cout << "Option [1] - Inserting Nodes" << endl;
      cout << "----------------------------" << endl;
      break;
   
   case 2:
      cout << "-----------------------------------------------------" << endl;
      cout << "Option [2] - Displaying tree using In Order Traversal" << endl;
      cout << "-----------------------------------------------------" << endl;
      break;

   case 3:
      cout << "-----------------------------------------------------" << endl;
      cout << "Option [3] - Displaying tree using PreOrder Traversal" << endl;
      cout << "-----------------------------------------------------" << endl;
      break;
   
   case 4:
      cout << "------------------------------------------------------" << endl;
      cout << "Option [4] - Displaying tree using PostOrder Traversal" << endl;
      cout << "------------------------------------------------------" << endl;
      break;
   
   }
}

/*
void diffDisplayNodes(IntBinaryTree, int) displays the type of order the user
chooses in the above if statements.
The option they choose gets matched with the if statement and the correct function is displayed.
*/


void diffDisplayNodes(IntBinaryTree funct, int option)
{
   if(option == 1)
   {
      funct.displayInOrder();
   }
   else if(option == 2)
   {
      funct.displayPreOrder();
   }
   else if(option == 3)
   {
      funct.displayPostOrder();
   }
}
