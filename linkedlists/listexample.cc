//Some common options with lists which is a good data struct to act as linked list in many cases
#include <iostream>
#include <list>


int main()
{
    std::list <int> my_linkedlist;

    unsigned int option = 0;

    while (option != 9) {
        //show current list value
        std::cout << "\nCurrent Linked List values: " << std::endl;
        for (int current_element: my_linkedlist) {
            std::cout << current_element << " ";       
        }

        std::cout << "\nType the option:" << std::endl;
        std::cout << "1 - Add element to the beggining of the linked list" << std::endl;
        std::cout << "2 - Add element to the end of the linked list" << std::endl;
        std::cout << "3 - Add element to specific position of the linked list" << std::endl;
        std::cout << "4 - Remove element from the beggining of the linked list" << std::endl;
        std::cout << "5 - Remove element from the end of the linked list" << std::endl;
        std::cout << "6 - Remove element from specific position of the linked list" << std::endl;
        std::cout << "7 - Sort elements" << std::endl;
        std::cout << "8 - Reverse elements" << std::endl;
        std::cout << "9 - Exit" << std::endl;
        
        std::cout << "\nType your option: ";
        std::cin >> option;

        //handle bad input
        while (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "Bad Entry! Enter a valid option: ";
            std::cin >> option;
        }

        int element;
        unsigned int position;
        std::list<int>::iterator it;

               

        switch(option) {
            
            case 1: //add element to beggining of ll
                std::cout << "Element to add: " << std::endl;
                std::cin >> element;

                //handle bad input
                while (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                    std::cout << "Bad Entry! Enter a valid element: ";
                    std::cin >> element;
                }

                my_linkedlist.push_front(element);
                break;
            
            case 2: //add element to end of ll
                std::cout << "Element to add: " << std::endl;
                std::cin >> element;
                
                //handle bad input
                while (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                    std::cout << "Bad Entry! Enter a valid element: ";
                    std::cin >> element;
                }

                my_linkedlist.push_back(element);
                break;
            
            case 3: //add element to specific position
                std::cout << "Element to add: " << std::endl;
                std::cin >> element;
                
                //handle bad input
                while (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                    std::cout << "Bad Entry! Enter a valid element: ";
                    std::cin >> element;
                }

                std::cout << "Position to add: (starts with 0) " << std::endl;
                std::cin >> position;
                
                  //handle bad input
                while (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                    std::cout << "Bad Entry! Enter a valid position: ";
                    std::cin >> position;
                }

                if (position > my_linkedlist.size() || position < 0) {
                    std::cout << "ERROR! Invalid value!" << std::endl;
                    break;
                }
                
                //initialize linked list iterator to the beggining
                it = my_linkedlist.begin();
                
                std::advance(it, position);
                // add element
                my_linkedlist.insert(it, element);
                break;

            case 4: //remove element from the beggining of ll
                if (my_linkedlist.size() == 0) break;
                my_linkedlist.pop_front();
                break;
            
            case 5: //remove element from the end of ll
                if (my_linkedlist.size() == 0) break;
                my_linkedlist.pop_back();
                break;
            
            case 6: //remove element from specific position
                std::cout << "Position to remove: (starts with 0) " << std::endl;
                std::cin >> position;
                
                
                //handle bad input
                while (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                    std::cout << "Bad Entry! Enter a valid position: ";
                    std::cin >> position;
                }
                if (position > my_linkedlist.size() || position < 0) {
                    std::cout << "ERROR! Invalid value!" << std::endl;
                    break;
                }
                
                it = my_linkedlist.begin();
                std::advance(it, position);
                my_linkedlist.erase(it);
                break;
            
            case 7: //sort elements
                my_linkedlist.sort();
                break;
            
            case 8: //reverse elements
                my_linkedlist.reverse();
                break;

        }
    }
    return 0;    
}