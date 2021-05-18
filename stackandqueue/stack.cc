#include <iostream>
#include <stack>
#include <algorithm>

int main()
{
  std::string content;
  std::stack<std::string> my_stack;
  while(true) {
    
    std::cout << "Type the content to add to the stack (EXIT to finish): ";
    std::cin >> content;

    if (content  == "EXIT") {
        //print content from stack
        std::cout << "Here is the final content of the stack:" << std::endl;
        size_t stack_size = my_stack.size();
        for (size_t i = 0; i < stack_size; ++i) {
            std::cout << my_stack.top() << " ";
            my_stack.pop();
        }
        return 0;
    }
    my_stack.push(content);
  }
}