#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

struct node
{
	int data;
	struct node *left;
	struct node *right;
}
struct node *root = (struct node *)malloc(sizeof(struct node));

void insert(int n)
{

}
void InOrder(struct node *t) // complexity O(n)
{
	if(t)
	{
		InOrder(t->left);
		std::cout << t->data;
		InOrder(t->right);
	}
}
void PreOrder(struct node *t)
{
	if(t)
	{
		std::cout << t->data;
		PreOrder(t->left);
		PreOrder(t->right);
	}
}
void PostOrder(struct node *t)
{
	if(t)
	{
		PostOrder(t->left);
		PostOrder(t->right);
		std::cout << t->data;
	}
}


int main()
{

  std::string command;       
  std::cout << "What operation to be performed? " << std::endl;
  std::cin >> command;
  root = NULL;
  while (command != "quit")
  { 
    if (command == "insert")
    {
    	int value;
    	std::cout << "Value you want to add " << std::endl;
  		std::cin >> value;
      	insert(value);
    }
    else if (command == "delete")
    {
    //   	int value1;
    // 	std::cout << "Value you want to delete " << std::endl;
  		// std::cin >> value1;
      	DeleteStart();
      	//std::cout << "delete in the end" << std::endl;
    } 
    else if (command == "print")
    {
    	struct node *t = root;
      std::cout << "InOrder" << std::endl;
      InOrder(t);
    }
    else std::cout << " Command not recognized." << std::endl; 
    std::cout << "What next operation to be performed? " << std::endl;
    std::cin >> command;
  };
}